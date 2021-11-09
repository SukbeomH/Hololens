// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPrimitiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPrimitiveActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister();
// End Cross Module References
	void AGTClippingPrimitiveActor::StaticRegisterNativesAGTClippingPrimitiveActor()
	{
	}
	UClass* Z_Construct_UClass_AGTClippingPrimitiveActor_NoRegister()
	{
		return AGTClippingPrimitiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingPrimitiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingPrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClippingPrimitiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all Clipping Primitive actor types within Graphics Tools.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingPrimitiveActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveActor.h" },
		{ "ToolTip", "Abstract base class for all Clipping Primitive actor types within Graphics Tools." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GT Clipping Primitive" },
		{ "Comment", "/** Handle to the clipping primitive component derived Graphics Tools clipping primitive actors instantiate. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveActor.h" },
		{ "ToolTip", "Handle to the clipping primitive component derived Graphics Tools clipping primitive actors instantiate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent = { "ClippingPrimitiveComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTClippingPrimitiveActor, ClippingPrimitiveComponent), Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingPrimitiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::ClassParams = {
		&AGTClippingPrimitiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingPrimitiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTClippingPrimitiveActor, 1220446409);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingPrimitiveActor>()
	{
		return AGTClippingPrimitiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTClippingPrimitiveActor(Z_Construct_UClass_AGTClippingPrimitiveActor, &AGTClippingPrimitiveActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTClippingPrimitiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingPrimitiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
