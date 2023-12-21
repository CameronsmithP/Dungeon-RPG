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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtagContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProtagContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_ProtagContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_ProtagContext = { "ProtagContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProtagonist, ProtagContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_ProtagContext_MetaData), Z_Construct_UClass_AProtagonist_Statics::NewProp_ProtagContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProtagonist, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_AProtagonist_Statics::NewProp_MovementAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProtagonist, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AProtagonist_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Protagonist" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProtagonist, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_ViewCamera_MetaData[] = {
		{ "Category", "Protagonist" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Protagonist.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProtagonist, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_ViewCamera_MetaData), Z_Construct_UClass_AProtagonist_Statics::NewProp_ViewCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProtagonist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_ProtagContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_ViewCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtagonist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtagonist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtagonist_Statics::ClassParams = {
		&AProtagonist::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProtagonist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams), Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AProtagonist, AProtagonist::StaticClass, TEXT("AProtagonist"), &Z_Registration_Info_UClass_AProtagonist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtagonist), 4028806495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_328484319(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGit_Dungeon_RPG_MyProject_Source_MyProject_Public_Characters_Protagonist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
