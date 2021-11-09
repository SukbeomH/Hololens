// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTDirectionalLightActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDirectionalLightActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTDirectionalLightActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTDirectionalLightActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTLightActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTDirectionalLightActor::StaticRegisterNativesAGTDirectionalLightActor()
	{
	}
	UClass* Z_Construct_UClass_AGTDirectionalLightActor_NoRegister()
	{
		return AGTDirectionalLightActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTDirectionalLightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTDirectionalLightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTLightActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTDirectionalLightComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTDirectionalLightActor.h" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTDirectionalLightComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTDirectionalLightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTDirectionalLightActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTDirectionalLightActor_Statics::ClassParams = {
		&AGTDirectionalLightActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTDirectionalLightActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTDirectionalLightActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTDirectionalLightActor, 2950834845);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTDirectionalLightActor>()
	{
		return AGTDirectionalLightActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTDirectionalLightActor(Z_Construct_UClass_AGTDirectionalLightActor, &AGTDirectionalLightActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTDirectionalLightActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTDirectionalLightActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
