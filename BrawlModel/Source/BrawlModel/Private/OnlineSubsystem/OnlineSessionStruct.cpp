// Fill out your copyright notice in the Description page of Project Settings.


#include "OnlineSubsystem/OnlineSessionStruct.h"


void FBluePrint_SessionResult::SetOnlineResult(const FOnlineSessionSearchResult& Result)
{
	// 获取 SessionId
	RoomID = Result.GetSessionIdStr();  

	// 获取最大玩家数
	MaxPlayer = Result.Session.SessionSettings.NumPublicConnections;  

	// 获取密码，如果没有密码则使用默认值
	FString Password;
	if (Result.Session.SessionSettings.Get(FName("RoomPassword"), Password))
	{
		RoomPassword = Password;
	}
	else
	{
		RoomPassword = FString("DefaultPassword");
	}
	
}