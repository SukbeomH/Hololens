// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTLightActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTLightActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTLightActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTLightActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent_NoRegister();
// End Cross Module References
	void AGTLightActor::StaticRegisterNativesAGTLightActor()
	{
	}
	UClass* Z_Construct_UClass_AGTLightActor_NoRegister()
	{
		return AGTLightActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTLightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTLightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTLightActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all light actor types within Graphics Tools.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTLightActor.h" },
		{ "ModuleRelativePath", "Public/GTLightActor.h" },
		{ "ToolTip", "Abstract base class for all light actor types within Graphics Tools." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTLightActor_Statics::NewProp_LightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GT Light" },
		{ "Comment", "/** Handle to the light component derived Graphics Tools light actors instantiate. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTLightActor.h" },
		{ "ToolTip", "Handle to the light component derived Graphics Tools light actors instantiate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTLightActor_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTLightActor, LightComponent), Z_Construct_UClass_UGTLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTLightActor_Statics::NewProp_LightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTLightActor_Statics::NewProp_LightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGTLightActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTLightActor_Statics::NewProp_LightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTLightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTLightActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTLightActor_Statics::ClassParams = {
		&AGTLightActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGTLightActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGTLightActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGTLightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTLightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTLightActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTLightActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTLightActor, 2918118999);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTLightActor>()
	{
		return AGTLightActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTLightActor(Z_Construct_UClass_AGTLightActor, &AGTLightActor::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTLightActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTLightActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
