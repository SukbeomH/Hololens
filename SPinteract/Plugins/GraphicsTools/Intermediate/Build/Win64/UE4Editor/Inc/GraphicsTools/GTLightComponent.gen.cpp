// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTLightComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTSceneComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTLightComponent::StaticRegisterNativesUGTLightComponent()
	{
	}
	UClass* Z_Construct_UClass_UGTLightComponent_NoRegister()
	{
		return UGTLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all light actor components within Graphics Tools.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTLightComponent.h" },
		{ "ModuleRelativePath", "Public/GTLightComponent.h" },
		{ "ToolTip", "Abstract base class for all light actor components within Graphics Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTLightComponent_Statics::ClassParams = {
		&UGTLightComponent::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTLightComponent, 245196202);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTLightComponent>()
	{
		return UGTLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTLightComponent(Z_Construct_UClass_UGTLightComponent, &UGTLightComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
