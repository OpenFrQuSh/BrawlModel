// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrawlModel_init() {}
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature();
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature();
	BRAWLMODEL_API UFunction* Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BrawlModel;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BrawlModel()
	{
		if (!Z_Registration_Info_UPackage__Script_BrawlModel.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BrawlModel_OnCreateSessionComplete_BP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BrawlModel_OnFindSessionsComplete_BP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BrawlModel_OnJoinSessionComplete_BP__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BrawlModel",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB710B4DF,
				0x7F2964A0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BrawlModel.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BrawlModel.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BrawlModel(Z_Construct_UPackage__Script_BrawlModel, TEXT("/Script/BrawlModel"), Z_Registration_Info_UPackage__Script_BrawlModel, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB710B4DF, 0x7F2964A0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
