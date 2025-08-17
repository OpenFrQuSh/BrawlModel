// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionUENUM.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EBlueprint_JoinSessionResult : uint8
{
	Success,
	SessionIsFull,
	SessionDoesNotExist,
	CouldNotRetrieveAddress,
	AlreadyInSession,
	UnknownError,
};


