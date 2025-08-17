// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "OnlineSessionSettings.h"
#include "CoreMinimal.h"
#include "OnlineSessionStruct.generated.h"

USTRUCT(BlueprintType)
struct FBluePrint_SessionResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString RoomID;

	UPROPERTY(BlueprintReadOnly)
	int32 MaxPlayer;

	UPROPERTY(BlueprintReadOnly)
	FString RoomPassword;

	//SessionSearch index
	int32 SearchResultIndex;

	void SetOnlineResult(const FOnlineSessionSearchResult& Result);
};
