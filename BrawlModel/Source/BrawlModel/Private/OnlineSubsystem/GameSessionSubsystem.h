// Fill out your copyright notice in the Description page of Project Settings.

/*注意事项:
 *文档：在初始化期间，在线子系统将尝试加载"Engine.ini"文件中指定的默认在线服务模块。对在线服务的所有访问都将通过此模块。
 *DefaultEngine.ini
 *[OnlineSubsystem]
 *DefaultPlatformService=Null
*/
//BrawlModel.Build.cs添加"OnlineSubsystem","OnlineSubsystemUtils"模块
//重新编译.UProject
//GitHub pull则无需此步骤
#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionStruct.h"
#include "OnlineSessionUENUM.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSessionSubsystem.generated.h"
/*
 *动态多播委托，实现事件绑定
 *FOnCreateSessionComplete_BP->绑定：OnCreateSessionComplete调用 >OnCreateSessionCompleteHandler()创建房间时触发
 *FOnFindSessionsComplete_BP->绑定：OnFindSessionsComplete调用 >OnCreateSessionCompleteHandler()查找房间时触发
 *FOnJoinSessionComplete_BP->绑定：OnJoinSessionComplete调用 >OnCreateSessionCompleteHandler()加入房间时触发
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateSessionComplete_BP, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFindSessionsComplete_BP, const TArray<FBluePrint_SessionResult>&, Results, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinSessionComplete_BP, EBlueprint_JoinSessionResult, Result);

UCLASS(BlueprintType, Blueprintable)
class UGameSessionSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
public:
    UGameSessionSubsystem();

    // 创建房间完成时触发
    UPROPERTY(BlueprintAssignable)
    FOnCreateSessionComplete_BP OnCreateSessionComplete;

    // 查找房间完成时触发
    UPROPERTY(BlueprintAssignable)
    FOnFindSessionsComplete_BP OnFindSessionsComplete;

    // 加入房间完成时触发
    UPROPERTY(BlueprintAssignable)
    FOnJoinSessionComplete_BP OnJoinSessionComplete;

    // 创建房间
    UFUNCTION(BlueprintCallable, Category = "Online|Session")
    /*
     * CreateCustomSession创建房间，会话
     * MaxPlayers：最大玩家数
     * RoomID：房间名，会话ID注意它与Results（结构体：FBluePrint_SessionResult的RoomID不一样）
     * RoomPassword：房间，会话密码
     */
    void CreateCustomSession(int32 MaxPlayers, FString RoomID, FString RoomPassword);

    // 查找房间
    UFUNCTION(BlueprintCallable, Category = "Online|Session")
    void FindCustomSession(FString RoomID, int32 MaxResults = 20);

    // 加入房间（通过密码验证）
    UFUNCTION(BlueprintCallable, Category = "Online|Session")
    void JoinCustomSession(FString RoomPasswordInput);

private:
    // 会话接口（智能指针，持有引用）
    IOnlineSessionPtr SessionInterface;
    // 搜索对象
    TSharedPtr<FOnlineSessionSearch> SessionSearch;      
    // 查找目标房间ID
    FString DesiredRoomID;
    // 待写入的房间密码
    FString PendingPassword;
    // 待创建房间的玩家数
    int32 PendingMaxPlayers;                             

    // 委托句柄
    FDelegateHandle OnCreateSessionCompleteDelegate;
    FDelegateHandle OnFindSessionsCompleteDelegate;
    FDelegateHandle OnJoinSessionCompleteDelegate;
    FDelegateHandle OnDestroySessionCompleteDelegate;    // 新增：销毁完成委托

    // 回调函数
    void OnCreateSessionCompleteHandler(FName SessionName, bool bWasSuccessful);
    void OnFindSessionsCompleteHandler(bool bWasSuccessful);
    void OnJoinSessionCompleteHandler(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
    void OnDestroySessionCompleteHandler(FName SessionName, bool bWasSuccessful); // 新增：销毁完成回调

    // 内部真正执行创建房间的函数（等销毁完成后再调用）
    void CreateCustomSession_Internal(int32 MaxPlayers, FString RoomID, FString RoomPassword);
};