// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrawlModel/Private/MyOnlineSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyOnlineSession() {}
// Cross Module References
	BRAWLMODEL_API UClass* Z_Construct_UClass_UMyOnlineSession();
	BRAWLMODEL_API UClass* Z_Construct_UClass_UMyOnlineSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	UPackage* Z_Construct_UPackage__Script_BrawlModel();
// End Cross Module References
	void UMyOnlineSession::StaticRegisterNativesUMyOnlineSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyOnlineSession);
	UClass* Z_Construct_UClass_UMyOnlineSession_NoRegister()
	{
		return UMyOnlineSession::StaticClass();
	}
	struct Z_Construct_UClass_UMyOnlineSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyOnlineSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSession,
		(UObject* (*)())Z_Construct_UPackage__Script_BrawlModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOnlineSession_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyOnlineSession_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyOnlineSession.h" },
		{ "ModuleRelativePath", "Private/MyOnlineSession.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyOnlineSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyOnlineSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyOnlineSession_Statics::ClassParams = {
		&UMyOnlineSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOnlineSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyOnlineSession_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyOnlineSession()
	{
		if (!Z_Registration_Info_UClass_UMyOnlineSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyOnlineSession.OuterSingleton, Z_Construct_UClass_UMyOnlineSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyOnlineSession.OuterSingleton;
	}
	template<> BRAWLMODEL_API UClass* StaticClass<UMyOnlineSession>()
	{
		return UMyOnlineSession::StaticClass();
	}
	UMyOnlineSession::UMyOnlineSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyOnlineSession);
	UMyOnlineSession::~UMyOnlineSession() {}
	struct Z_CompiledInDeferFile_FID_Project_BrawlModel_BrawlModel_Source_BrawlModel_Private_MyOnlineSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_BrawlModel_BrawlModel_Source_BrawlModel_Private_MyOnlineSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyOnlineSession, UMyOnlineSession::StaticClass, TEXT("UMyOnlineSession"), &Z_Registration_Info_UClass_UMyOnlineSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyOnlineSession), 575073538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_BrawlModel_BrawlModel_Source_BrawlModel_Private_MyOnlineSession_h_51752556(TEXT("/Script/BrawlModel"),
		Z_CompiledInDeferFile_FID_Project_BrawlModel_BrawlModel_Source_BrawlModel_Private_MyOnlineSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_BrawlModel_BrawlModel_Source_BrawlModel_Private_MyOnlineSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
