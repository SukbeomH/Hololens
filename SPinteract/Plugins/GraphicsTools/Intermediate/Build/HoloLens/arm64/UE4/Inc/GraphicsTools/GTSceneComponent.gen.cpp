// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTSceneComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTSceneComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTSceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGTSceneComponent::execHasParameterCollectionOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasParameterCollectionOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTSceneComponent::execSetParameterCollectionOverride)
	{
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Override);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterCollectionOverride(Z_Param_Override);
		P_NATIVE_END;
	}
	void UGTSceneComponent::StaticRegisterNativesUGTSceneComponent()
	{
		UClass* Class = UGTSceneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasParameterCollectionOverride", &UGTSceneComponent::execHasParameterCollectionOverride },
			{ "SetParameterCollectionOverride", &UGTSceneComponent::execSetParameterCollectionOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics
	{
		struct GTSceneComponent_eventHasParameterCollectionOverride_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GTSceneComponent_eventHasParameterCollectionOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GTSceneComponent_eventHasParameterCollectionOverride_Parms), &Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "GT Scene Component" },
		{ "Comment", "/** Returns true if the WorldParameterCollection is currently being overridden. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "Returns true if the WorldParameterCollection is currently being overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTSceneComponent, nullptr, "HasParameterCollectionOverride", nullptr, nullptr, sizeof(GTSceneComponent_eventHasParameterCollectionOverride_Parms), Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics
	{
		struct GTSceneComponent_eventSetParameterCollectionOverride_Parms
		{
			UMaterialParameterCollection* Override;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Override;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTSceneComponent_eventSetParameterCollectionOverride_Parms, Override), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::NewProp_Override,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "GT Scene Component" },
		{ "Comment", "/** Specifies the current WorldParameterCollection override, if null is passed in the component will start writing to the\n\x09 * WorldParameterCollection. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "Specifies the current WorldParameterCollection override, if null is passed in the component will start writing to the\nWorldParameterCollection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTSceneComponent, nullptr, "SetParameterCollectionOverride", nullptr, nullptr, sizeof(GTSceneComponent_eventSetParameterCollectionOverride_Parms), Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGTSceneComponent_NoRegister()
	{
		return UGTSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditorTextureScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollectionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldParameterCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTSceneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTSceneComponent_HasParameterCollectionOverride, "HasParameterCollectionOverride" }, // 1266500782
		{ &Z_Construct_UFunction_UGTSceneComponent_SetParameterCollectionOverride, "SetParameterCollectionOverride" }, // 1433584206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all scene actor components within Graphics Tools.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTSceneComponent.h" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "Abstract base class for all scene actor components within Graphics Tools." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTexture_MetaData[] = {
		{ "Comment", "/** Sprite for the scene in the editor. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "Sprite for the scene in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTexture = { "EditorTexture", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTSceneComponent, EditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for the scene in the editor. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "Sprite scaling for the scene in the editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTextureScale = { "EditorTextureScale", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTSceneComponent, EditorTextureScale), METADATA_PARAMS(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTextureScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_ParameterCollectionOverride_MetaData[] = {
		{ "BlueprintSetter", "SetParameterCollectionOverride" },
		{ "Category", "GT Scene Component" },
		{ "Comment", "/** An override that removes the component from the WorldParameterCollection and allows the user to control what\n\x09 * MaterialParameterCollection gets written to. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "An override that removes the component from the WorldParameterCollection and allows the user to control what\nMaterialParameterCollection gets written to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_ParameterCollectionOverride = { "ParameterCollectionOverride", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTSceneComponent, ParameterCollectionOverride), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_ParameterCollectionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_ParameterCollectionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_WorldParameterCollection_MetaData[] = {
		{ "Comment", "/** The default MaterialParameterCollection all components within the current world will write to. */" },
		{ "ModuleRelativePath", "Public/GTSceneComponent.h" },
		{ "ToolTip", "The default MaterialParameterCollection all components within the current world will write to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_WorldParameterCollection = { "WorldParameterCollection", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTSceneComponent, WorldParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_WorldParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_WorldParameterCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTSceneComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_EditorTextureScale,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_ParameterCollectionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTSceneComponent_Statics::NewProp_WorldParameterCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTSceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTSceneComponent_Statics::ClassParams = {
		&UGTSceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTSceneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGTSceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTSceneComponent, 3126467247);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTSceneComponent>()
	{
		return UGTSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTSceneComponent(Z_Construct_UClass_UGTSceneComponent, &UGTSceneComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTSceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
