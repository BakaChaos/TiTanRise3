// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TiTanRise3/TiTanRise3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiTanRise3GameMode() {}
// Cross Module References
	TITANRISE3_API UClass* Z_Construct_UClass_ATiTanRise3GameMode_NoRegister();
	TITANRISE3_API UClass* Z_Construct_UClass_ATiTanRise3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TiTanRise3();
// End Cross Module References
	void ATiTanRise3GameMode::StaticRegisterNativesATiTanRise3GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATiTanRise3GameMode_NoRegister()
	{
		return ATiTanRise3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATiTanRise3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiTanRise3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TiTanRise3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiTanRise3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "TiTanRise3GameMode.h" },
		{ "ModuleRelativePath", "TiTanRise3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiTanRise3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiTanRise3GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATiTanRise3GameMode_Statics::ClassParams = {
		&ATiTanRise3GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATiTanRise3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATiTanRise3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiTanRise3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATiTanRise3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATiTanRise3GameMode, 52202313);
	template<> TITANRISE3_API UClass* StaticClass<ATiTanRise3GameMode>()
	{
		return ATiTanRise3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATiTanRise3GameMode(Z_Construct_UClass_ATiTanRise3GameMode, &ATiTanRise3GameMode::StaticClass, TEXT("/Script/TiTanRise3"), TEXT("ATiTanRise3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiTanRise3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
