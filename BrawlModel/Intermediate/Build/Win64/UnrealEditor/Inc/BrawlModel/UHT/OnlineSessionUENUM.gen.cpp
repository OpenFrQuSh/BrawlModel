// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrawlModel/Private/OnlineSubsystem/OnlineSessionUENUM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionUENUM() {}
// Cross Module References
	BRAWLMODEL_API UEnum* Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult();
	UPackage* Z_Construct_UPackage__Script_BrawlModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult;
	static UEnum* EBlueprint_JoinSessionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult, (UObject*)Z_Construct_UPackage__Script_BrawlModel(), TEXT("EBlueprint_JoinSessionResult"));
		}
		return Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.OuterSingleton;
	}
	template<> BRAWLMODEL_API UEnum* StaticEnum<EBlueprint_JoinSessionResult>()
	{
		return EBlueprint_JoinSessionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enumerators[] = {
		{ "EBlueprint_JoinSessionResult::Success", (int64)EBlueprint_JoinSessionResult::Success },
		{ "EBlueprint_JoinSessionResult::SessionIsFull", (int64)EBlueprint_JoinSessionResult::SessionIsFull },
		{ "EBlueprint_JoinSessionResult::SessionDoesNotExist", (int64)EBlueprint_JoinSessionResult::SessionDoesNotExist },
		{ "EBlueprint_JoinSessionResult::CouldNotRetrieveAddress", (int64)EBlueprint_JoinSessionResult::CouldNotRetrieveAddress },
		{ "EBlueprint_JoinSessionResult::AlreadyInSession", (int64)EBlueprint_JoinSessionResult::AlreadyInSession },
		{ "EBlueprint_JoinSessionResult::UnknownError", (int64)EBlueprint_JoinSessionResult::UnknownError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInSession.Comment", "/**\n * \n */" },
		{ "AlreadyInSession.Name", "EBlueprint_JoinSessionResult::AlreadyInSession" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "CouldNotRetrieveAddress.Comment", "/**\n * \n */" },
		{ "CouldNotRetrieveAddress.Name", "EBlueprint_JoinSessionResult::CouldNotRetrieveAddress" },
		{ "ModuleRelativePath", "Private/OnlineSubsystem/OnlineSessionUENUM.h" },
		{ "SessionDoesNotExist.Comment", "/**\n * \n */" },
		{ "SessionDoesNotExist.Name", "EBlueprint_JoinSessionResult::SessionDoesNotExist" },
		{ "SessionIsFull.Comment", "/**\n * \n */" },
		{ "SessionIsFull.Name", "EBlueprint_JoinSessionResult::SessionIsFull" },
		{ "Success.Comment", "/**\n * \n */" },
		{ "Success.Name", "EBlueprint_JoinSessionResult::Success" },
		{ "UnknownError.Comment", "/**\n * \n */" },
		{ "UnknownError.Name", "EBlueprint_JoinSessionResult::UnknownError" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BrawlModel,
		nullptr,
		"EBlueprint_JoinSessionResult",
		"EBlueprint_JoinSessionResult",
		Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult()
	{
		if (!Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.InnerSingleton, Z_Construct_UEnum_BrawlModel_EBlueprint_JoinSessionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h_Statics::EnumInfo[] = {
		{ EBlueprint_JoinSessionResult_StaticEnum, TEXT("EBlueprint_JoinSessionResult"), &Z_Registration_Info_UEnum_EBlueprint_JoinSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3765379869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h_3664863664(TEXT("/Script/BrawlModel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BrawlModel_Source_BrawlModel_Private_OnlineSubsystem_OnlineSessionUENUM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
