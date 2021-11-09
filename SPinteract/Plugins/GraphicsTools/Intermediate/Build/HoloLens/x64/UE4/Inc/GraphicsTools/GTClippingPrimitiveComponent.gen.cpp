// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPrimitiveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPrimitiveComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UEnum* Z_Construct_UEnum_GraphicsTools_EGTClippingSide();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTSceneComponent();
// End Cross Module References
	static UEnum* EGTClippingSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GraphicsTools_EGTClippingSide, Z_Construct_UPackage__Script_GraphicsTools(), TEXT("EGTClippingSide"));
		}
		return Singleton;
	}
	template<> GRAPHICSTOOLS_API UEnum* StaticEnum<EGTClippingSide>()
	{
		return EGTClippingSide_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGTClippingSide(EGTClippingSide_StaticEnum, TEXT("/Script/GraphicsTools"), TEXT("EGTClippingSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GraphicsTools_EGTClippingSide_Hash() { return 1869281072U; }
	UEnum* Z_Construct_UEnum_GraphicsTools_EGTClippingSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GraphicsTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGTClippingSide"), 0, Get_Z_Construct_UEnum_GraphicsTools_EGTClippingSide_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGTClippingSide::Inside", (int64)EGTClippingSide::Inside },
				{ "EGTClippingSide::Outside", (int64)EGTClippingSide::Outside },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Inside.Comment", "/** Pixels on the interior of the clipping primitive are discarded. */" },
				{ "Inside.Name", "EGTClippingSide::Inside" },
				{ "Inside.ToolTip", "Pixels on the interior of the clipping primitive are discarded." },
				{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
				{ "Outside.Comment", "/** Pixels on the exterior of the clipping primitive are discarded. */" },
				{ "Outside.Name", "EGTClippingSide::Outside" },
				{ "Outside.ToolTip", "Pixels on the exterior of the clipping primitive are discarded." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GraphicsTools,
				nullptr,
				"EGTClippingSide",
				"EGTClippingSide",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execSetTransformColumnParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformColumnParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execGetTransformColumnParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetTransformColumnParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execSetSettingsParameterName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsParameterName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execGetSettingsParameterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSettingsParameterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execSetClippingSide)
	{
		P_GET_ENUM(EGTClippingSide,Z_Param_Side);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClippingSide(EGTClippingSide(Z_Param_Side));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTClippingPrimitiveComponent::execGetClippingSide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGTClippingSide*)Z_Param__Result=P_THIS->GetClippingSide();
		P_NATIVE_END;
	}
	void UGTClippingPrimitiveComponent::StaticRegisterNativesUGTClippingPrimitiveComponent()
	{
		UClass* Class = UGTClippingPrimitiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClippingSide", &UGTClippingPrimitiveComponent::execGetClippingSide },
			{ "GetSettingsParameterName", &UGTClippingPrimitiveComponent::execGetSettingsParameterName },
			{ "GetTransformColumnParameterNames", &UGTClippingPrimitiveComponent::execGetTransformColumnParameterNames },
			{ "SetClippingSide", &UGTClippingPrimitiveComponent::execSetClippingSide },
			{ "SetSettingsParameterName", &UGTClippingPrimitiveComponent::execSetSettingsParameterName },
			{ "SetTransformColumnParameterNames", &UGTClippingPrimitiveComponent::execSetTransformColumnParameterNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics
	{
		struct GTClippingPrimitiveComponent_eventGetClippingSide_Parms
		{
			EGTClippingSide ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventGetClippingSide_Parms, ReturnValue), Z_Construct_UEnum_GraphicsTools_EGTClippingSide, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Gets if pixels will be clipped on the inside or outside of the primitive shape. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Gets if pixels will be clipped on the inside or outside of the primitive shape." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "GetClippingSide", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventGetClippingSide_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics
	{
		struct GTClippingPrimitiveComponent_eventGetSettingsParameterName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventGetSettingsParameterName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Gets the material parameter name used for general settings. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Gets the material parameter name used for general settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "GetSettingsParameterName", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventGetSettingsParameterName_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics
	{
		struct GTClippingPrimitiveComponent_eventGetTransformColumnParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventGetTransformColumnParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Gets the material parameter name array used to represent each column of the primitive's transformation matrix. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each column of the primitive's transformation matrix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "GetTransformColumnParameterNames", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventGetTransformColumnParameterNames_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics
	{
		struct GTClippingPrimitiveComponent_eventSetClippingSide_Parms
		{
			EGTClippingSide Side;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Side;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventSetClippingSide_Parms, Side), Z_Construct_UEnum_GraphicsTools_EGTClippingSide, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::NewProp_Side_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::NewProp_Side,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Sets if pixels will be clipped on the inside or outside of the primitive shape. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Sets if pixels will be clipped on the inside or outside of the primitive shape." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "SetClippingSide", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventSetClippingSide_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics
	{
		struct GTClippingPrimitiveComponent_eventSetSettingsParameterName_Parms
		{
			FName Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventSetSettingsParameterName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Sets the material parameter name used for general settings. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Sets the material parameter name used for general settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "SetSettingsParameterName", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventSetSettingsParameterName_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics
	{
		struct GTClippingPrimitiveComponent_eventSetTransformColumnParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTClippingPrimitiveComponent_eventSetTransformColumnParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Sets the material parameter name array used to represent each column of the primitive's transformation matrix. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each column of the primitive's transformation matrix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTClippingPrimitiveComponent, nullptr, "SetTransformColumnParameterNames", nullptr, nullptr, sizeof(GTClippingPrimitiveComponent_eventSetTransformColumnParameterNames_Parms), Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister()
	{
		return UGTClippingPrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClippingSide_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClippingSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClippingSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsParameterName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransformColumnParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformColumnParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformColumnParameterNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetClippingSide, "GetClippingSide" }, // 695576684
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetSettingsParameterName, "GetSettingsParameterName" }, // 2187828788
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_GetTransformColumnParameterNames, "GetTransformColumnParameterNames" }, // 1254593936
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetClippingSide, "SetClippingSide" }, // 1834530420
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetSettingsParameterName, "SetSettingsParameterName" }, // 875547561
		{ &Z_Construct_UFunction_UGTClippingPrimitiveComponent_SetTransformColumnParameterNames, "SetTransformColumnParameterNames" }, // 2477580357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all ClippingPrimitive actor components within Graphics Tools. Represents an analytic shape used to pass state to\n * materials for per pixel clipping. A sphere's transformation is described by 4x4 matrix that represents the sphere's location, rotation,\n * and scale. A sphere can be non-uniformally scaled along the x, y, or z axis to form an ellipsoid. The sphere's radii along the x, y, or\n * z axis is determined by the magnitude of the scale along each axis. A scale of one represents a unit sphere.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTClippingPrimitiveComponent.h" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Abstract base class for all ClippingPrimitive actor components within Graphics Tools. Represents an analytic shape used to pass state to\nmaterials for per pixel clipping. A sphere's transformation is described by 4x4 matrix that represents the sphere's location, rotation,\nand scale. A sphere can be non-uniformally scaled along the x, y, or z axis to form an ellipsoid. The sphere's radii along the x, y, or\nz axis is determined by the magnitude of the scale along each axis. A scale of one represents a unit sphere." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide_MetaData[] = {
		{ "BlueprintGetter", "GetClippingside" },
		{ "BlueprintSetter", "SetClippingside" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Specifies if the primitive discards pixels on the inside or outside of the primitive shape. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Specifies if the primitive discards pixels on the inside or outside of the primitive shape." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide = { "ClippingSide", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTClippingPrimitiveComponent, ClippingSide), Z_Construct_UEnum_GraphicsTools_EGTClippingSide, METADATA_PARAMS(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_SettingsParameterName_MetaData[] = {
		{ "BlueprintGetter", "GetSettingsParameterName" },
		{ "BlueprintSetter", "SetSettingsParameterName" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Material parameter name used for general primitive settings to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Material parameter name used for general primitive settings to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_SettingsParameterName = { "SettingsParameterName", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTClippingPrimitiveComponent, SettingsParameterName), METADATA_PARAMS(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_SettingsParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_SettingsParameterName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames_Inner = { "TransformColumnParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetTransformColumnParameterNames" },
		{ "BlueprintSetter", "SetTransformColumnParameterNames" },
		{ "Category", "Clipping Primitive" },
		{ "Comment", "/** Parameter name array used to represent each column of the primitive's transformation matrix to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each column of the primitive's transformation matrix to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames = { "TransformColumnParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTClippingPrimitiveComponent, TransformColumnParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_ClippingSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_SettingsParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::NewProp_TransformColumnParameterNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTClippingPrimitiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::ClassParams = {
		&UGTClippingPrimitiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTClippingPrimitiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTClippingPrimitiveComponent, 4046958805);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTClippingPrimitiveComponent>()
	{
		return UGTClippingPrimitiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTClippingPrimitiveComponent(Z_Construct_UClass_UGTClippingPrimitiveComponent, &UGTClippingPrimitiveComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTClippingPrimitiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTClippingPrimitiveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
