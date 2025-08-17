// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrawlModel/Private/OnlineSubsystem/OnlineSessionStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionStruct() {}
// Cross Module References
	BRAWLMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FBluePrint_SessionResult();
	UPackage* Z_Construct_UPackage__Script_BrawlModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BluePrint_SessionResult;
class UScriptStruct* FBluePrint_SessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBluePrint_SessionResult, (UObject*)Z_Construct_UPackage__Script_BrawlModel(), TEXT("BluePrint_SessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.OuterSingleton;
}
template<> BRAWLMODEL_API UScriptStruct* StaticStruct<FBluePrint_SessionResult>()
{
	return FBluePrint_SessionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomPassword;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/OnlineSessionStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBluePrint_SessionResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomID_MetaData[] = {
		{ "Category", "BluePrint_SessionResult" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/OnlineSessionStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBluePrint_SessionResult, RoomID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomID_MetaData), Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_MaxPlayer_MetaData[] = {
		{ "Category", "BluePrint_SessionResult" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/OnlineSessionStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBluePrint_SessionResult, MaxPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_MaxPlayer_MetaData), Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_MaxPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomPassword_MetaData[] = {
		{ "Category", "BluePrint_SessionResult" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/OnlineSessionStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomPassword = { "RoomPassword", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBluePrint_SessionResult, RoomPassword), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomPassword_MetaData), Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomPassword_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_MaxPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewProp_RoomPassword,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BrawlModel,
		nullptr,
		&NewStructOps,
		"BluePrint_SessionResult",
		Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::PropPointers),
		sizeof(FBluePrint_SessionResult),
		alignof(FBluePrint_SessionResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBluePrint_SessionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.InnerSingleton, Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BluePrint_SessionResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionStruct_h_Statics::ScriptStructInfo[] = {
		{ FBluePrint_SessionResult::StaticStruct, Z_Construct_UScriptStruct_FBluePrint_SessionResult_Statics::NewStructOps, TEXT("BluePrint_SessionResult"), &Z_Registration_Info_UScriptStruct_BluePrint_SessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBluePrint_SessionResult), 797150769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionStruct_h_391296002(TEXT("/Script/BrawlModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
