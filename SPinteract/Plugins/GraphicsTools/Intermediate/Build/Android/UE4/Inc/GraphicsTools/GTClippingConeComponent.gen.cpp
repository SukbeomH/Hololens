// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingConeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingConeComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingConeComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingConeComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTClippingConeComponent::StaticRegisterNativesUGTClippingConeComponent()
	{
	}
	UClass* Z_Construct_UClass_UGTClippingConeComponent_NoRegister()
	{
		return UGTClippingConeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTClippingConeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTClippingConeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTClippingPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingConeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Sub class of a ClippingPrimitive that represents an analytic cone used to pass state to materials for per pixel clipping. A cone's\n * transformation is described by two points and two radii. The points represent the top and bottom faces of the cone and the two radii\n * represent the radius of those two faces. The orientation and height of the cone is described by the vector between the top and bottom\n * points direction and magnitude respectively. To change the height, top radius, or bottom radius of the cone adjust the scale of the\n * component. The scale along the x-axis is the height, and scale along y-axis is the bottom radius, and the scale along the z-axis is the\n * top radius. If the y and z axis scales are the same the cone becomes a capped cylinder.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTClippingConeComponent.h" },
		{ "ModuleRelativePath", "Public/GTClippingConeComponent.h" },
		{ "ToolTip", "Sub class of a ClippingPrimitive that represents an analytic cone used to pass state to materials for per pixel clipping. A cone's\ntransformation is described by two points and two radii. The points represent the top and bottom faces of the cone and the two radii\nrepresent the radius of those two faces. The orientation and height of the cone is described by the vector between the top and bottom\npoints direction and magnitude respectively. To change the height, top radius, or bottom radius of the cone adjust the scale of the\ncomponent. The scale along the x-axis is the height, and scale along y-axis is the bottom radius, and the scale along the z-axis is the\ntop radius. If the y and z axis scales are the same the cone becomes a capped cylinder." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTClippingConeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTClippingConeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTClippingConeComponent_Statics::ClassParams = {
		&UGTClippingConeComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGTClippingConeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingConeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTClippingConeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTClippingConeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTClippingConeComponent, 3344362071);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTClippingConeComponent>()
	{
		return UGTClippingConeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTClippingConeComponent(Z_Construct_UClass_UGTClippingConeComponent, &UGTClippingConeComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTClippingConeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTClippingConeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
