// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTDirectionalLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDirectionalLightComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTDirectionalLightComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTDirectionalLightComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execSetColorIntensityParameterName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorIntensityParameterName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execGetColorIntensityParameterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetColorIntensityParameterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execSetDirectionEnabledParameterName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirectionEnabledParameterName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execGetDirectionEnabledParameterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDirectionEnabledParameterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execSetLightColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execGetLightColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetLightColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execSetLightIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightIntensity(Z_Param_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTDirectionalLightComponent::execGetLightIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightIntensity();
		P_NATIVE_END;
	}
	void UGTDirectionalLightComponent::StaticRegisterNativesUGTDirectionalLightComponent()
	{
		UClass* Class = UGTDirectionalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorIntensityParameterName", &UGTDirectionalLightComponent::execGetColorIntensityParameterName },
			{ "GetDirectionEnabledParameterName", &UGTDirectionalLightComponent::execGetDirectionEnabledParameterName },
			{ "GetLightColor", &UGTDirectionalLightComponent::execGetLightColor },
			{ "GetLightIntensity", &UGTDirectionalLightComponent::execGetLightIntensity },
			{ "SetColorIntensityParameterName", &UGTDirectionalLightComponent::execSetColorIntensityParameterName },
			{ "SetDirectionEnabledParameterName", &UGTDirectionalLightComponent::execSetDirectionEnabledParameterName },
			{ "SetLightColor", &UGTDirectionalLightComponent::execSetLightColor },
			{ "SetLightIntensity", &UGTDirectionalLightComponent::execSetLightIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics
	{
		struct GTDirectionalLightComponent_eventGetColorIntensityParameterName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventGetColorIntensityParameterName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name used for the color and intensity state. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name used for the color and intensity state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "GetColorIntensityParameterName", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventGetColorIntensityParameterName_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics
	{
		struct GTDirectionalLightComponent_eventGetDirectionEnabledParameterName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventGetDirectionEnabledParameterName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name used for the direction and enabled state. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name used for the direction and enabled state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "GetDirectionEnabledParameterName", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventGetDirectionEnabledParameterName_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics
	{
		struct GTDirectionalLightComponent_eventGetLightColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's color. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Accessor to the light's color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "GetLightColor", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventGetLightColor_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics
	{
		struct GTDirectionalLightComponent_eventGetLightIntensity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventGetLightIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's intensity. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Accessor to the light's intensity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "GetLightIntensity", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventGetLightIntensity_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics
	{
		struct GTDirectionalLightComponent_eventSetColorIntensityParameterName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventSetColorIntensityParameterName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name used for the color and intensity state. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name used for the color and intensity state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "SetColorIntensityParameterName", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventSetColorIntensityParameterName_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics
	{
		struct GTDirectionalLightComponent_eventSetDirectionEnabledParameterName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventSetDirectionEnabledParameterName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name used for the direction and enabled state. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name used for the direction and enabled state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "SetDirectionEnabledParameterName", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventSetDirectionEnabledParameterName_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics
	{
		struct GTDirectionalLightComponent_eventSetLightColor_Parms
		{
			FColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventSetLightColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's color. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Sets the light's color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "SetLightColor", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventSetLightColor_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics
	{
		struct GTDirectionalLightComponent_eventSetLightIntensity_Parms
		{
			float Intensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTDirectionalLightComponent_eventSetLightIntensity_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's intensity. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Sets the light's intensity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTDirectionalLightComponent, nullptr, "SetLightIntensity", nullptr, nullptr, sizeof(GTDirectionalLightComponent_eventSetLightIntensity_Parms), Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGTDirectionalLightComponent_NoRegister()
	{
		return UGTDirectionalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTDirectionalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionEnabledParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DirectionEnabledParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIntensityParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorIntensityParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTDirectionalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTDirectionalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_GetColorIntensityParameterName, "GetColorIntensityParameterName" }, // 1517681753
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_GetDirectionEnabledParameterName, "GetDirectionEnabledParameterName" }, // 3571106397
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightColor, "GetLightColor" }, // 1748702102
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_GetLightIntensity, "GetLightIntensity" }, // 1345895247
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_SetColorIntensityParameterName, "SetColorIntensityParameterName" }, // 25920855
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_SetDirectionEnabledParameterName, "SetDirectionEnabledParameterName" }, // 3319476226
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightColor, "SetLightColor" }, // 1734768468
		{ &Z_Construct_UFunction_UGTDirectionalLightComponent_SetLightIntensity, "SetLightIntensity" }, // 897953215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). Only 1\n * DirectionalLight will be considered in a scene at a time.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTDirectionalLightComponent.h" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). Only 1\nDirectionalLight will be considered in a scene at a time." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to editor visualization arrow\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Reference to editor visualization arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTDirectionalLightComponent, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightIntensity_MetaData[] = {
		{ "BlueprintGetter", "GetLightIntensity" },
		{ "BlueprintSetter", "SetLightIntensity" },
		{ "Category", "Light" },
		{ "Comment", "/** Total energy that the DirectionalLight emits. */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Total energy that the DirectionalLight emits." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTDirectionalLightComponent, LightIntensity), METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightColor_MetaData[] = {
		{ "BlueprintGetter", "GetLightColor" },
		{ "BlueprintSetter", "SetLightColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the DirectionalLight. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "The color of the DirectionalLight." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTDirectionalLightComponent, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_DirectionEnabledParameterName_MetaData[] = {
		{ "BlueprintGetter", "GetDirectionEnabledParameterName" },
		{ "BlueprintSetter", "SetDirectionEnabledParameterName" },
		{ "Category", "Light" },
		{ "Comment", "/** Material parameter name used for the lights direction and enabled state to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Material parameter name used for the lights direction and enabled state to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_DirectionEnabledParameterName = { "DirectionEnabledParameterName", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTDirectionalLightComponent, DirectionEnabledParameterName), METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_DirectionEnabledParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_DirectionEnabledParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ColorIntensityParameterName_MetaData[] = {
		{ "BlueprintGetter", "GetColorIntensityParameterName" },
		{ "BlueprintSetter", "SetColorIntensityParameterName" },
		{ "Category", "Light" },
		{ "Comment", "/** Material parameter name used for the lights color and intensity to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightComponent.h" },
		{ "ToolTip", "Material parameter name used for the lights color and intensity to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ColorIntensityParameterName = { "ColorIntensityParameterName", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTDirectionalLightComponent, ColorIntensityParameterName), METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ColorIntensityParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ColorIntensityParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTDirectionalLightComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_DirectionEnabledParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTDirectionalLightComponent_Statics::NewProp_ColorIntensityParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTDirectionalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTDirectionalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTDirectionalLightComponent_Statics::ClassParams = {
		&UGTDirectionalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTDirectionalLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTDirectionalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTDirectionalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTDirectionalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTDirectionalLightComponent, 4062708129);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTDirectionalLightComponent>()
	{
		return UGTDirectionalLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTDirectionalLightComponent(Z_Construct_UClass_UGTDirectionalLightComponent, &UGTDirectionalLightComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTDirectionalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTDirectionalLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
