// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineSubsystem/OnlineSessionUENUM.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRAWLMODEL_OnlineSessionUENUM_generated_h
#error "OnlineSessionUENUM.generated.h already included, missing '#pragma once' in OnlineSessionUENUM.h"
#endif
#define BRAWLMODEL_OnlineSessionUENUM_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h


#define FOREACH_ENUM_EBLUEPRINT_JOINSESSIONRESULT(op) \
	op(EBlueprint_JoinSessionResult::Success) \
	op(EBlueprint_JoinSessionResult::SessionIsFull) \
	op(EBlueprint_JoinSessionResult::SessionDoesNotExist) \
	op(EBlueprint_JoinSessionResult::CouldNotRetrieveAddress) \
	op(EBlueprint_JoinSessionResult::AlreadyInSession) \
	op(EBlueprint_JoinSessionResult::UnknownError) 

enum class EBlueprint_JoinSessionResult : uint8;
template<> struct TIsUEnumClass<EBlueprint_JoinSessionResult> { enum { Value = true }; };
template<> BRAWLMODEL_API UEnum* StaticEnum<EBlueprint_JoinSessionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
