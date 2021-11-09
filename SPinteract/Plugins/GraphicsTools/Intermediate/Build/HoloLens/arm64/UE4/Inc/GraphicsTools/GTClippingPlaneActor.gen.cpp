// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPlaneActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPlaneActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPlaneActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPlaneActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingPlaneActor::StaticRegisterNativesAGTClippingPlaneActor()
	{
	}
	UClass* Z_Construct_UClass_AGTClippingPlaneActor_NoRegister()
	{
		return AGTClippingPlaneActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingPlaneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingPlaneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingPlaneComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingPlaneActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingPlaneActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingPlaneComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingPlaneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingPlaneActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingPlaneActor_Statics::ClassParams = {
		&AGTClippingPlaneActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingPlaneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTClippingPlaneActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTClippingPlaneActor, 915512135);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingPlaneActor>()
	{
		return AGTClippingPlaneActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTClippingPlaneActor(Z_Construct_UClass_AGTClippingPlaneActor, &AGTClippingPlaneActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTClippingPlaneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingPlaneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
