// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrawlModel/Private/OnlineSubsystem/GameSessionSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "BrawlModel/Private/OnlineSubsystem/OnlineSessionStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSessionSubsystem() {}
// Cross Module References
	BRAWLMODEL_API UClass* Z_Construct_UClass_UGameSessionSubsystem();
	BRAWLMODEL_API UClass* Z_Construct_UClass_UGameSessionSubsystem_NoRegister();
	BRAWLMODEL_API UEnum* Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult();
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature();
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature();
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature();
	BRAWLMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FBluePrint_SessionResult();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_BrawlModel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics
	{
		struct _Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms), &Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\xe5\x8a\xa8\xe6\x80\x81\xe5\xa4\x9a\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xae\x9e\xe7\x8e\xb0\xe4\xba\x8b\xe4\xbb\xb6\xe7\xbb\x91\xe5\xae\x9a\n *FOnCreateSessionComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnCreateSessionComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n *FOnFindSessionsComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnFindSessionsComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n *FOnJoinSessionComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnJoinSessionComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n */" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*\xe5\x8a\xa8\xe6\x80\x81\xe5\xa4\x9a\xe6\x92\xad\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xae\x9e\xe7\x8e\xb0\xe4\xba\x8b\xe4\xbb\xb6\xe7\xbb\x91\xe5\xae\x9a\n*FOnCreateSessionComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnCreateSessionComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n*FOnFindSessionsComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnFindSessionsComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n*FOnJoinSessionComplete_BP->\xe7\xbb\x91\xe5\xae\x9a\xef\xbc\x9aOnJoinSessionComplete\xe8\xb0\x83\xe7\x94\xa8 >OnCreateSessionCompleteHandler()\xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BrawlModel, nullptr, "OnCreateSessionComplete_BP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCreateSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnCreateSessionComplete_BP, bool bWasSuccessful)
{
	struct _Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms
	{
		bool bWasSuccessful;
	};
	_Script_BrawlModel_eventOnCreateSessionComplete_BP_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics
	{
		struct _Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms
		{
			TArray<FBluePrint_SessionResult> Results;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBluePrint_SessionResult, METADATA_PARAMS(0, nullptr) }; // 797150769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results_MetaData), Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results_MetaData) }; // 797150769
	void Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms), &Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BrawlModel, nullptr, "OnFindSessionsComplete_BP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFindSessionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnFindSessionsComplete_BP, TArray<FBluePrint_SessionResult> const& Results, bool bWasSuccessful)
{
	struct _Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms
	{
		TArray<FBluePrint_SessionResult> Results;
		bool bWasSuccessful;
	};
	_Script_BrawlModel_eventOnFindSessionsComplete_BP_Parms Parms;
	Parms.Results=Results;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindSessionsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics
	{
		struct _Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms
		{
			EBlueprint_JoinSessionResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms, Result), Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult, METADATA_PARAMS(0, nullptr) }; // 3765379869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BrawlModel, nullptr, "OnJoinSessionComplete_BP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::_Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJoinSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& OnJoinSessionComplete_BP, EBlueprint_JoinSessionResult Result)
{
	struct _Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms
	{
		EBlueprint_JoinSessionResult Result;
	};
	_Script_BrawlModel_eventOnJoinSessionComplete_BP_Parms Parms;
	Parms.Result=Result;
	OnJoinSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGameSessionSubsystem::execJoinCustomSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomPasswordInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinCustomSession(Z_Param_RoomPasswordInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSessionSubsystem::execFindCustomSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindCustomSession(Z_Param_RoomID,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSessionSubsystem::execCreateCustomSession)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomPassword);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateCustomSession(Z_Param_MaxPlayers,Z_Param_RoomID,Z_Param_RoomPassword);
		P_NATIVE_END;
	}
	void UGameSessionSubsystem::StaticRegisterNativesUGameSessionSubsystem()
	{
		UClass* Class = UGameSessionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCustomSession", &UGameSessionSubsystem::execCreateCustomSession },
			{ "FindCustomSession", &UGameSessionSubsystem::execFindCustomSession },
			{ "JoinCustomSession", &UGameSessionSubsystem::execJoinCustomSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics
	{
		struct GameSessionSubsystem_eventCreateCustomSession_Parms
		{
			int32 MaxPlayers;
			FString RoomID;
			FString RoomPassword;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomPassword;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventCreateCustomSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventCreateCustomSession_Parms, RoomID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_RoomPassword = { "RoomPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventCreateCustomSession_Parms, RoomPassword), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_RoomID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::NewProp_RoomPassword,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * CreateCustomSession\xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9d\n     * MaxPlayers\xef\xbc\x9a\xe6\x9c\x80\xe5\xa4\xa7\xe7\x8e\xa9\xe5\xae\xb6\xe6\x95\xb0\n     * RoomID\xef\xbc\x9a\xe6\x88\xbf\xe9\x97\xb4\xe5\x90\x8d\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9dID\xe6\xb3\xa8\xe6\x84\x8f\xe5\xae\x83\xe4\xb8\x8eResults\xef\xbc\x88\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x9a""FBluePrint_SessionResult\xe7\x9a\x84RoomID\xe4\xb8\x8d\xe4\xb8\x80\xe6\xa0\xb7\xef\xbc\x89\n     * RoomPassword\xef\xbc\x9a\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9d\xe5\xaf\x86\xe7\xa0\x81\n     */" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* CreateCustomSession\xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9d\n* MaxPlayers\xef\xbc\x9a\xe6\x9c\x80\xe5\xa4\xa7\xe7\x8e\xa9\xe5\xae\xb6\xe6\x95\xb0\n* RoomID\xef\xbc\x9a\xe6\x88\xbf\xe9\x97\xb4\xe5\x90\x8d\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9dID\xe6\xb3\xa8\xe6\x84\x8f\xe5\xae\x83\xe4\xb8\x8eResults\xef\xbc\x88\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x9a""FBluePrint_SessionResult\xe7\x9a\x84RoomID\xe4\xb8\x8d\xe4\xb8\x80\xe6\xa0\xb7\xef\xbc\x89\n* RoomPassword\xef\xbc\x9a\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x8c\xe4\xbc\x9a\xe8\xaf\x9d\xe5\xaf\x86\xe7\xa0\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSessionSubsystem, nullptr, "CreateCustomSession", nullptr, nullptr, Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::GameSessionSubsystem_eventCreateCustomSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::GameSessionSubsystem_eventCreateCustomSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics
	{
		struct GameSessionSubsystem_eventFindCustomSession_Parms
		{
			FString RoomID;
			int32 MaxResults;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventFindCustomSession_Parms, RoomID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventFindCustomSession_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::NewProp_RoomID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4\n" },
#endif
		{ "CPP_Default_MaxResults", "20" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSessionSubsystem, nullptr, "FindCustomSession", nullptr, nullptr, Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::GameSessionSubsystem_eventFindCustomSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::GameSessionSubsystem_eventFindCustomSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics
	{
		struct GameSessionSubsystem_eventJoinCustomSession_Parms
		{
			FString RoomPasswordInput;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomPasswordInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::NewProp_RoomPasswordInput = { "RoomPasswordInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSessionSubsystem_eventJoinCustomSession_Parms, RoomPasswordInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::NewProp_RoomPasswordInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x88\xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\x86\xe7\xa0\x81\xe9\xaa\x8c\xe8\xaf\x81\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xef\xbc\x88\xe9\x80\x9a\xe8\xbf\x87\xe5\xaf\x86\xe7\xa0\x81\xe9\xaa\x8c\xe8\xaf\x81\xef\xbc\x89" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSessionSubsystem, nullptr, "JoinCustomSession", nullptr, nullptr, Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::GameSessionSubsystem_eventJoinCustomSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::GameSessionSubsystem_eventJoinCustomSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSessionSubsystem);
	UClass* Z_Construct_UClass_UGameSessionSubsystem_NoRegister()
	{
		return UGameSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateSessionComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateSessionComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFindSessionsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFindSessionsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinSessionComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinSessionComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BrawlModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSessionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSessionSubsystem_CreateCustomSession, "CreateCustomSession" }, // 2349843924
		{ &Z_Construct_UFunction_UGameSessionSubsystem_FindCustomSession, "FindCustomSession" }, // 3255960236
		{ &Z_Construct_UFunction_UGameSessionSubsystem_JoinCustomSession, "JoinCustomSession" }, // 644674323
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineSubsystem/GameSessionSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnCreateSessionComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnCreateSessionComplete = { "OnCreateSessionComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSessionSubsystem, OnCreateSessionComplete), Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnCreateSessionComplete_MetaData), Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnCreateSessionComplete_MetaData) }; // 1587156692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnFindSessionsComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnFindSessionsComplete = { "OnFindSessionsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSessionSubsystem, OnFindSessionsComplete), Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnFindSessionsComplete_MetaData), Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnFindSessionsComplete_MetaData) }; // 3008904155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnJoinSessionComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Private/OnlineSubsystem/GameSessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x85\xa5\xe6\x88\xbf\xe9\x97\xb4\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnJoinSessionComplete = { "OnJoinSessionComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSessionSubsystem, OnJoinSessionComplete), Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnJoinSessionComplete_MetaData), Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnJoinSessionComplete_MetaData) }; // 2580085357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSessionSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnCreateSessionComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnFindSessionsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSubsystem_Statics::NewProp_OnJoinSessionComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSessionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSessionSubsystem_Statics::ClassParams = {
		&UGameSessionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSessionSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSessionSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameSessionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameSessionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSessionSubsystem.OuterSingleton, Z_Construct_UClass_UGameSessionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSessionSubsystem.OuterSingleton;
	}
	template<> BRAWLMODEL_API UClass* StaticClass<UGameSessionSubsystem>()
	{
		return UGameSessionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionSubsystem);
	UGameSessionSubsystem::~UGameSessionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSessionSubsystem, UGameSessionSubsystem::StaticClass, TEXT("UGameSessionSubsystem"), &Z_Registration_Info_UClass_UGameSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSessionSubsystem), 427371903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_1427987428(TEXT("/Script/BrawlModel"),
		Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_GameSessionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
