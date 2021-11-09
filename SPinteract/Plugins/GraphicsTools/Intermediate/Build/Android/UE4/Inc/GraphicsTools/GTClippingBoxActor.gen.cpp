// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingBoxActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingBoxActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingBoxActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingBoxActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingBoxActor::StaticRegisterNativesAGTClippingBoxActor()
	{
	}
	UClass* Z_Construct_UClass_AGTClippingBoxActor_NoRegister()
	{
		return AGTClippingBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingBoxComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingBoxActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingBoxActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingBoxComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingBoxActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingBoxActor_Statics::ClassParams = {
		&AGTClippingBoxActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingBoxActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTClippingBoxActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTClippingBoxActor, 3353746965);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingBoxActor>()
	{
		return AGTClippingBoxActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTClippingBoxActor(Z_Construct_UClass_AGTClippingBoxActor, &AGTClippingBoxActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTClippingBoxActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingBoxActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
