// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TiTanRise3/TiTanRise3HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiTanRise3HUD() {}
// Cross Module References
	TITANRISE3_API UClass* Z_Construct_UClass_ATiTanRise3HUD_NoRegister();
	TITANRISE3_API UClass* Z_Construct_UClass_ATiTanRise3HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TiTanRise3();
// End Cross Module References
	void ATiTanRise3HUD::StaticRegisterNativesATiTanRise3HUD()
	{
	}
	UClass* Z_Construct_UClass_ATiTanRise3HUD_NoRegister()
	{
		return ATiTanRise3HUD::StaticClass();
	}
	struct Z_Construct_UClass_ATiTanRise3HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiTanRise3HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TiTanRise3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiTanRise3HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TiTanRise3HUD.h" },
		{ "ModuleRelativePath", "TiTanRise3HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiTanRise3HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiTanRise3HUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATiTanRise3HUD_Statics::ClassParams = {
		&ATiTanRise3HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATiTanRise3HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATiTanRise3HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiTanRise3HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATiTanRise3HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATiTanRise3HUD, 2516341528);
	template<> TITANRISE3_API UClass* StaticClass<ATiTanRise3HUD>()
	{
		return ATiTanRise3HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATiTanRise3HUD(Z_Construct_UClass_ATiTanRise3HUD, &ATiTanRise3HUD::StaticClass, TEXT("/Script/TiTanRise3"), TEXT("ATiTanRise3HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiTanRise3HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
