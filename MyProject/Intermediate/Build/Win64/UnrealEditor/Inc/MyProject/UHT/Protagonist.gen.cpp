// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Characters/Protagonist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtagonist() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYPROJECT_API UClass* Z_Construct_UClass_AProtagonist();
	MYPROJECT_API UClass* Z_Construct_UClass_AProtagonist_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AProtagonist::StaticRegisterNativesAProtagonist()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProtagonist);
	UClass* Z_Construct_UClass_AProtagonist_NoRegister()
	{
		return AProtagonist::StaticClass();
	}
	struct Z_Construct_UClass_AProtagonist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtagonist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Protagonist.h" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtagonist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtagonist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtagonist_Statics::ClassParams = {
		&AProtagonist::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams), Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProtagonist()
	{
		if (!Z_Registration_Info_UClass_AProtagonist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProtagonist.OuterSingleton, Z_Construct_UClass_AProtagonist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProtagonist.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AProtagonist>()
	{
		return AProtagonist::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtagonist);
	AProtagonist::~AProtagonist() {}
	struct Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProtagonist, AProtagonist::StaticClass, TEXT("AProtagonist"), &Z_Registration_Info_UClass_AProtagonist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtagonist), 3201696563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_2263268689(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
