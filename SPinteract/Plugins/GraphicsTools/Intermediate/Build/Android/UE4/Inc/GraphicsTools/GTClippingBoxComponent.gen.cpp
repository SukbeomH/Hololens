// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingBoxComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingBoxComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingBoxComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTClippingBoxComponent::StaticRegisterNativesUGTClippingBoxComponent()
	{
	}
	UClass* Z_Construct_UClass_UGTClippingBoxComponent_NoRegister()
	{
		return UGTClippingBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTClippingBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTClippingBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTClippingPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Sub class of a ClippingPrimitive that represents an analytic box used to pass state to materials for per pixel clipping. A box's\n * transformation is described by 4x4 matrix that represents the box's location, rotation, and scale. A sphere can be non-uniformally\n * scaled along the x, y, or z axis. The box's dimension along the x, y, or z axis is determined by the magnitude of the\n * scale along each axis. A scale of one represents a unit box.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTClippingBoxComponent.h" },
		{ "ModuleRelativePath", "Public/GTClippingBoxComponent.h" },
		{ "ToolTip", "Sub class of a ClippingPrimitive that represents an analytic box used to pass state to materials for per pixel clipping. A box's\ntransformation is described by 4x4 matrix that represents the box's location, rotation, and scale. A sphere can be non-uniformally\nscaled along the x, y, or z axis. The box's dimension along the x, y, or z axis is determined by the magnitude of the\nscale along each axis. A scale of one represents a unit box." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTClippingBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTClippingBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTClippingBoxComponent_Statics::ClassParams = {
		&UGTClippingBoxComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTClippingBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTClippingBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTClippingBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTClippingBoxComponent, 197441204);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTClippingBoxComponent>()
	{
		return UGTClippingBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTClippingBoxComponent(Z_Construct_UClass_UGTClippingBoxComponent, &UGTClippingBoxComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTClippingBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTClippingBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
