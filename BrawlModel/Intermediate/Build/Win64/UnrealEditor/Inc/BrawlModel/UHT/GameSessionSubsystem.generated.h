// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineSubsystem/GameSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlueprint_JoinSessionResult : uint8;
struct FBluePrint_SessionResult;
#ifdef BRAWLMODEL_GameSessionSubsystem_generated_h
#error "GameSessionSubsystem.generated.h already included, missing '#pragma once' in GameSessionSubsystem.h"
#endif
#define BRAWLMODEL_GameSessionSubsystem_generated_h

#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_26_DELEGATE \
BRAWLMODEL_API void FOnCreateSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnCreateSessionComplete_BP, bool bWasSuccessful);


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_27_DELEGATE \
BRAWLMODEL_API void FOnFindSessionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnFindSessionsComplete_BP, TArray<FBluePrint_SessionResult> const& Results, bool bWasSuccessful);


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_28_DELEGATE \
BRAWLMODEL_API void FOnJoinSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnJoinSessionComplete_BP, EBlueprint_JoinSessionResult Result);


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_SPARSE_DATA
#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinCustomSession); \
	DECLARE_FUNCTION(execFindCustomSession); \
	DECLARE_FUNCTION(execCreateCustomSession);


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_ACCESSORS
#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSessionSubsystem(); \
	friend struct Z_Construct_UClass_UGameSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BrawlModel"), NO_API) \
	DECLARE_SERIALIZER(UGameSessionSubsystem)


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSessionSubsystem(UGameSessionSubsystem&&); \
	NO_API UGameSessionSubsystem(const UGameSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSessionSubsystem) \
	NO_API virtual ~UGameSessionSubsystem();


#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_30_PROLOG
#define FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_SPARSE_DATA \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_ACCESSORS \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BRAWLMODEL_API UClass* StaticClass<class UGameSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
