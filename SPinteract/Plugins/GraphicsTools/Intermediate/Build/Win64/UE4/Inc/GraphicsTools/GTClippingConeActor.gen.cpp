// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingConeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingConeActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingConeActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingConeActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingConeActor::StaticRegisterNativesAGTClippingConeActor()
	{
	}
	UClass* Z_Construct_UClass_AGTClippingConeActor_NoRegister()
	{
		return AGTClippingConeActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingConeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingConeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingConeComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingConeActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingConeActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingConeComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingConeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingConeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingConeActor_Statics::ClassParams = {
		&AGTClippingConeActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingConeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTClippingConeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTClippingConeActor, 2620257134);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingConeActor>()
	{
		return AGTClippingConeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTClippingConeActor(Z_Construct_UClass_AGTClippingConeActor, &AGTClippingConeActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTClippingConeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingConeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
