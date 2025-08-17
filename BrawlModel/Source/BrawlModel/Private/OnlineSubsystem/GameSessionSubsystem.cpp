#include "GameSessionSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Online/OnlineSessionNames.h"

UGameSessionSubsystem::UGameSessionSubsystem()
{
    // 获取当前平台的在线子系统（如 Null, Steam, EOS）
    IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
    if (Subsystem)
    {
        SessionInterface = Subsystem->GetSessionInterface();
    }
}

// 外部调用的创建房间接口
void UGameSessionSubsystem::CreateCustomSession(int32 MaxPlayers, FString RoomID, FString RoomPassword)
{
    if (!SessionInterface.IsValid()) return;

    // 记录参数，等销毁完成后再使用
    PendingMaxPlayers = MaxPlayers;
    PendingPassword = RoomPassword;
    DesiredRoomID = RoomID;

    // 如果已有同名 Session，先走销毁流程
    if (SessionInterface->GetNamedSession(NAME_GameSession))
    {
        OnDestroySessionCompleteDelegate = SessionInterface->AddOnDestroySessionCompleteDelegate_Handle(
            FOnDestroySessionCompleteDelegate::CreateUObject(this, &UGameSessionSubsystem::OnDestroySessionCompleteHandler)
        );

        SessionInterface->DestroySession(NAME_GameSession);
    }
    else
    {
        // 没有旧的，直接创建
        CreateCustomSession_Internal(MaxPlayers, RoomID, RoomPassword);
    }
}

// 内部执行的创建逻辑
void UGameSessionSubsystem::CreateCustomSession_Internal(int32 MaxPlayers, FString RoomID, FString RoomPassword)
{
    UWorld* World = GetWorld();
    if (!World) return;

    APlayerController* PC = World->GetFirstPlayerController();
    if (!PC || !PC->GetLocalPlayer()) return;

    // 配置会话参数
    FOnlineSessionSettings SessionSettings;
    SessionSettings.NumPublicConnections = MaxPlayers;
    SessionSettings.bIsLANMatch = true; 
    SessionSettings.bShouldAdvertise = true;
    SessionSettings.bUsesPresence = true;
    SessionSettings.Set(FName("RoomID"), RoomID, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
    SessionSettings.Set(FName("RoomPassword"), RoomPassword, EOnlineDataAdvertisementType::ViaOnlineService);

    // 注册创建完成回调
    OnCreateSessionCompleteDelegate = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(
        FOnCreateSessionCompleteDelegate::CreateUObject(this, &UGameSessionSubsystem::OnCreateSessionCompleteHandler)
    );

    // 调用创建接口（异步）
    SessionInterface->CreateSession(PC->GetLocalPlayer()->GetControllerId(), NAME_GameSession, SessionSettings);

    UE_LOG(LogTemp, Warning, TEXT("Creating session... MaxPlayers=%d, RoomID=%s"), MaxPlayers, *RoomID);
}
// 销毁完成回调
void UGameSessionSubsystem::OnDestroySessionCompleteHandler(FName SessionName, bool bWasSuccessful)
{
    if (SessionInterface.IsValid())
    {
        SessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegate);
    }

    // 销毁成功后再继续创建
    if (bWasSuccessful)
    {
        CreateCustomSession_Internal(PendingMaxPlayers, DesiredRoomID, PendingPassword);
    }
    else
    {
        OnCreateSessionComplete.Broadcast(false);
    }
}

// 查找房间
void UGameSessionSubsystem::FindCustomSession(FString RoomID, int32 MaxResults)
{
    if (!SessionInterface.IsValid()) return;

    DesiredRoomID = RoomID;

    UWorld* World = GetWorld();
    if (!World) return;

    APlayerController* PC = World->GetFirstPlayerController();
    if (!PC || !PC->GetLocalPlayer()) return;

    // 初始化搜索参数
    SessionSearch = MakeShareable(new FOnlineSessionSearch());
    SessionSearch->MaxSearchResults = MaxResults;
    SessionSearch->bIsLanQuery = true;
    SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

    OnFindSessionsCompleteDelegate = SessionInterface->AddOnFindSessionsCompleteDelegate_Handle(
        FOnFindSessionsCompleteDelegate::CreateUObject(this, &UGameSessionSubsystem::OnFindSessionsCompleteHandler)
    );

    // 延迟搜索，保证 LAN 广播完成
    FTimerHandle TimerHandle;
    World->GetTimerManager().SetTimer(TimerHandle, [this, PC]()
    {
        if (SessionInterface.IsValid())
        {
            UE_LOG(LogTemp, Warning, TEXT("Starting FindSessions..."));
            SessionInterface->FindSessions(PC->GetLocalPlayer()->GetControllerId(), SessionSearch.ToSharedRef());
        }//等待2秒，广播容错时间
    }, 2.0f, false); 
}

// 加入房间（按密码匹配）
void UGameSessionSubsystem::JoinCustomSession(FString RoomPasswordInput)
{
    if (!SessionInterface.IsValid() || !SessionSearch.IsValid()) return;

    UWorld* World = GetWorld();
    if (!World) return;

    APlayerController* PC = World->GetFirstPlayerController();
    if (!PC || !PC->GetLocalPlayer()) return;

    // 遍历搜索结果，匹配密码
    for (auto& Result : SessionSearch->SearchResults)
    {
        FString FoundPassword;
        Result.Session.SessionSettings.Get(FName("RoomPassword"), FoundPassword);

        if (FoundPassword == RoomPasswordInput)
        {
            OnJoinSessionCompleteDelegate = SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(
                FOnJoinSessionCompleteDelegate::CreateUObject(this, &UGameSessionSubsystem::OnJoinSessionCompleteHandler)
            );

            SessionInterface->JoinSession(PC->GetLocalPlayer()->GetControllerId(), NAME_GameSession, Result);
            return;
        }
    }
    // 没找到符合密码的房间
    OnJoinSessionComplete.Broadcast(EBlueprint_JoinSessionResult::UnknownError);
}

// 回调：创建完成
void UGameSessionSubsystem::OnCreateSessionCompleteHandler(FName SessionName, bool bWasSuccessful)
{
    if (SessionInterface.IsValid())
        SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);

    OnCreateSessionComplete.Broadcast(bWasSuccessful);
}

// 回调：查找完成
void UGameSessionSubsystem::OnFindSessionsCompleteHandler(bool bWasSuccessful)
{
    if (SessionInterface.IsValid())
        SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegate);

    TArray<FBluePrint_SessionResult> BPResults;

    if (bWasSuccessful && SessionSearch.IsValid())
    {
        for (auto& Result : SessionSearch->SearchResults)
        {
            FString FoundRoomID;
            Result.Session.SessionSettings.Get(FName("RoomID"), FoundRoomID);

            if (FoundRoomID == DesiredRoomID)
            {
                FBluePrint_SessionResult BPResult;
                BPResult.SetOnlineResult(Result);
                BPResults.Add(BPResult);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("FindSessions 完成。结果已找到: %d"), BPResults.Num());
    OnFindSessionsComplete.Broadcast(BPResults, bWasSuccessful && BPResults.Num() > 0);
}

// 回调：加入完成
void UGameSessionSubsystem::OnJoinSessionCompleteHandler(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
    if (SessionInterface.IsValid())
        SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegate);

    EBlueprint_JoinSessionResult BPResult = EBlueprint_JoinSessionResult::UnknownError;
    switch (Result)
    {
    case EOnJoinSessionCompleteResult::Success:
        BPResult = EBlueprint_JoinSessionResult::Success; break;
    case EOnJoinSessionCompleteResult::SessionIsFull:
        BPResult = EBlueprint_JoinSessionResult::SessionIsFull; break;
    case EOnJoinSessionCompleteResult::SessionDoesNotExist:
        BPResult = EBlueprint_JoinSessionResult::SessionDoesNotExist; break;
    case EOnJoinSessionCompleteResult::CouldNotRetrieveAddress:
        BPResult = EBlueprint_JoinSessionResult::CouldNotRetrieveAddress; break;
    case EOnJoinSessionCompleteResult::AlreadyInSession:
        BPResult = EBlueprint_JoinSessionResult::AlreadyInSession; break;
    default:
        BPResult = EBlueprint_JoinSessionResult::UnknownError; break;
    }

    OnJoinSessionComplete.Broadcast(BPResult);
}