// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingSphereActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingSphereActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingSphereActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingSphereActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingSphereActor::StaticRegisterNativesAGTClippingSphereActor()
	{
	}
	UClass* Z_Construct_UClass_AGTClippingSphereActor_NoRegister()
	{
		return AGTClippingSphereActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingSphereActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingSphereActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingSphereComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingSphereActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingSphereActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingSphereComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingSphereActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingSphereActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingSphereActor_Statics::ClassParams = {
		&AGTClippingSphereActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingSphereActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTClippingSphereActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTClippingSphereActor, 1576803428);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingSphereActor>()
	{
		return AGTClippingSphereActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTClippingSphereActor(Z_Construct_UClass_AGTClippingSphereActor, &AGTClippingSphereActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTClippingSphereActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingSphereActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
