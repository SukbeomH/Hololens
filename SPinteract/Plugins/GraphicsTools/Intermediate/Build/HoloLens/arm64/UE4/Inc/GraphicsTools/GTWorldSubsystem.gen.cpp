// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTWorldSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTWorldSubsystem() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTWorldSubsystem_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTWorldSubsystem::StaticRegisterNativesUGTWorldSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UGTWorldSubsystem_NoRegister()
	{
		return UGTWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGTWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Subsystem to hold all graphics data associated with a world that will effect the world's MPC_GTSettings material parameter collection.\n */" },
		{ "IncludePath", "GTWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/GTWorldSubsystem.h" },
		{ "ToolTip", "Subsystem to hold all graphics data associated with a world that will effect the world's MPC_GTSettings material parameter collection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTWorldSubsystem_Statics::ClassParams = {
		&UGTWorldSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTWorldSubsystem, 4156332751);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTWorldSubsystem>()
	{
		return UGTWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTWorldSubsystem(Z_Construct_UClass_UGTWorldSubsystem, &UGTWorldSubsystem::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTWorldSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
