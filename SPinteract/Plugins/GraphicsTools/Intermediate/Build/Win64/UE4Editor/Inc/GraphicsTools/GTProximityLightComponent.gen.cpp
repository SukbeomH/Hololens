// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTProximityLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTProximityLightComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTProximityLightComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTProximityLightComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseFadeTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPulseFadeTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPulseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execPulse)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pulse(Z_Param_Duration,Z_Param_FadeOffset,Z_Param_FadeDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetOuterColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetOuterColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetOuterColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetMiddleColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiddleColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetMiddleColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMiddleColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetCenterColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetCenterColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCenterColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetPulseSettingsParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPulseSettingsParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseSettingsParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetPulseSettingsParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetSettingsParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetSettingsParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSettingsParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetLocationParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetLocationParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetLocationParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetOuterColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetOuterColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetOuterColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetMiddleColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiddleColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetMiddleColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetMiddleColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetCenterColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetCenterColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetCenterColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetShrinkPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShrinkPercentage(Z_Param_Percentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetShrinkPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShrinkPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetShrinkDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShrinkDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetShrinkDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShrinkDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetAttenuationRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetProjectedRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectedRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetProjectedRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectedRadius();
		P_NATIVE_END;
	}
	void UGTProximityLightComponent::StaticRegisterNativesUGTProximityLightComponent()
	{
		UClass* Class = UGTProximityLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UGTProximityLightComponent::execGetAttenuationRadius },
			{ "GetCenterColor", &UGTProximityLightComponent::execGetCenterColor },
			{ "GetCenterColorParameterNames", &UGTProximityLightComponent::execGetCenterColorParameterNames },
			{ "GetLocationParameterNames", &UGTProximityLightComponent::execGetLocationParameterNames },
			{ "GetMiddleColor", &UGTProximityLightComponent::execGetMiddleColor },
			{ "GetMiddleColorParameterNames", &UGTProximityLightComponent::execGetMiddleColorParameterNames },
			{ "GetOuterColor", &UGTProximityLightComponent::execGetOuterColor },
			{ "GetOuterColorParameterNames", &UGTProximityLightComponent::execGetOuterColorParameterNames },
			{ "GetProjectedRadius", &UGTProximityLightComponent::execGetProjectedRadius },
			{ "GetPulseFadeTime", &UGTProximityLightComponent::execGetPulseFadeTime },
			{ "GetPulseSettingsParameterNames", &UGTProximityLightComponent::execGetPulseSettingsParameterNames },
			{ "GetPulseTime", &UGTProximityLightComponent::execGetPulseTime },
			{ "GetSettingsParameterNames", &UGTProximityLightComponent::execGetSettingsParameterNames },
			{ "GetShrinkDistance", &UGTProximityLightComponent::execGetShrinkDistance },
			{ "GetShrinkPercentage", &UGTProximityLightComponent::execGetShrinkPercentage },
			{ "Pulse", &UGTProximityLightComponent::execPulse },
			{ "SetAttenuationRadius", &UGTProximityLightComponent::execSetAttenuationRadius },
			{ "SetCenterColor", &UGTProximityLightComponent::execSetCenterColor },
			{ "SetCenterColorParameterNames", &UGTProximityLightComponent::execSetCenterColorParameterNames },
			{ "SetLocationParameterNames", &UGTProximityLightComponent::execSetLocationParameterNames },
			{ "SetMiddleColor", &UGTProximityLightComponent::execSetMiddleColor },
			{ "SetMiddleColorParameterNames", &UGTProximityLightComponent::execSetMiddleColorParameterNames },
			{ "SetOuterColor", &UGTProximityLightComponent::execSetOuterColor },
			{ "SetOuterColorParameterNames", &UGTProximityLightComponent::execSetOuterColorParameterNames },
			{ "SetProjectedRadius", &UGTProximityLightComponent::execSetProjectedRadius },
			{ "SetPulseSettingsParameterNames", &UGTProximityLightComponent::execSetPulseSettingsParameterNames },
			{ "SetSettingsParameterNames", &UGTProximityLightComponent::execSetSettingsParameterNames },
			{ "SetShrinkDistance", &UGTProximityLightComponent::execSetShrinkDistance },
			{ "SetShrinkPercentage", &UGTProximityLightComponent::execSetShrinkPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics
	{
		struct GTProximityLightComponent_eventGetAttenuationRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's attenuation radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's attenuation radius." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics
	{
		struct GTProximityLightComponent_eventGetCenterColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetCenterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's center color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's center color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetCenterColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetCenterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetCenterColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetCenterColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each center color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each center color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetCenterColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetCenterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetLocationParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetLocationParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each location of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each location of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetLocationParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetLocationParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics
	{
		struct GTProximityLightComponent_eventGetMiddleColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetMiddleColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's middle color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's middle color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetMiddleColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetMiddleColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each middle color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each middle color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetMiddleColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics
	{
		struct GTProximityLightComponent_eventGetOuterColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetOuterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's outer color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's outer color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetOuterColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetOuterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetOuterColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetOuterColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each outer color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each outer color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetOuterColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetOuterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics
	{
		struct GTProximityLightComponent_eventGetProjectedRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetProjectedRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's projected radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's projected radius." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetProjectedRadius", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetProjectedRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics
	{
		struct GTProximityLightComponent_eventGetPulseFadeTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseFadeTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Calculates the normalized pulse fade animation time. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Calculates the normalized pulse fade animation time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseFadeTime", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetPulseFadeTime_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each pulse setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each pulse setting of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseSettingsParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics
	{
		struct GTProximityLightComponent_eventGetPulseTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Calculates the normalized pulse animation time. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Calculates the normalized pulse animation time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseTime", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetPulseTime_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetSettingsParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetSettingsParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each setting of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetSettingsParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics
	{
		struct GTProximityLightComponent_eventGetShrinkDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetShrinkDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's shrink distance. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's shrink distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetShrinkDistance", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetShrinkDistance_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics
	{
		struct GTProximityLightComponent_eventGetShrinkPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetShrinkPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's shrink percentage. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's shrink percentage." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetShrinkPercentage", nullptr, nullptr, sizeof(GTProximityLightComponent_eventGetShrinkPercentage_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics
	{
		struct GTProximityLightComponent_eventPulse_Parms
		{
			float Duration;
			float FadeOffset;
			float FadeDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeOffset = { "FadeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, FadeOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, FadeDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Initiates a pulse, if one is not already occurring, which simulates a user touching a surface. */" },
		{ "CPP_Default_Duration", "0.200000" },
		{ "CPP_Default_FadeDuration", "0.100000" },
		{ "CPP_Default_FadeOffset", "0.100000" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Initiates a pulse, if one is not already occurring, which simulates a user touching a surface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "Pulse", nullptr, nullptr, sizeof(GTProximityLightComponent_eventPulse_Parms), Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_Pulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics
	{
		struct GTProximityLightComponent_eventSetAttenuationRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetAttenuationRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's attenuation radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's attenuation radius." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetAttenuationRadius", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics
	{
		struct GTProximityLightComponent_eventSetCenterColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetCenterColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's center color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's center color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetCenterColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetCenterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetCenterColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetCenterColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each center color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each center color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetCenterColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetCenterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetLocationParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetLocationParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each location of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each location of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetLocationParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetLocationParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics
	{
		struct GTProximityLightComponent_eventSetMiddleColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetMiddleColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's middle color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's middle color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetMiddleColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetMiddleColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each middle color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each middle color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetMiddleColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics
	{
		struct GTProximityLightComponent_eventSetOuterColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetOuterColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's outer color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's outer color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetOuterColor", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetOuterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetOuterColorParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetOuterColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each outer color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each outer color of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetOuterColorParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetOuterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics
	{
		struct GTProximityLightComponent_eventSetProjectedRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetProjectedRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's projected radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's projected radius." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetProjectedRadius", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetProjectedRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each pulse setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each pulse setting of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetPulseSettingsParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetSettingsParameterNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetSettingsParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each setting of a ProximityLight." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetSettingsParameterNames", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics
	{
		struct GTProximityLightComponent_eventSetShrinkDistance_Parms
		{
			float Distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetShrinkDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's shrink distance. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's shrink distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetShrinkDistance", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetShrinkDistance_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics
	{
		struct GTProximityLightComponent_eventSetShrinkPercentage_Parms
		{
			float Percentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetShrinkPercentage_Parms, Percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's shrink percentage. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's shrink percentage." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetShrinkPercentage", nullptr, nullptr, sizeof(GTProximityLightComponent_eventSetShrinkPercentage_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGTProximityLightComponent_NoRegister()
	{
		return UGTProximityLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTProximityLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectedRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectedRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiddleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterColor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettingsParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PulseSettingsParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PulseSettingsParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PulseSettingsParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CenterColorParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterColorParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CenterColorParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MiddleColorParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleColorParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiddleColorParameterNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OuterColorParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterColorParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterColorParameterNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTProximityLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTProximityLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 3419118495
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor, "GetCenterColor" }, // 3191520699
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames, "GetCenterColorParameterNames" }, // 700653661
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames, "GetLocationParameterNames" }, // 745016116
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor, "GetMiddleColor" }, // 480508221
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames, "GetMiddleColorParameterNames" }, // 221310059
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor, "GetOuterColor" }, // 3938335963
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames, "GetOuterColorParameterNames" }, // 2159327793
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius, "GetProjectedRadius" }, // 683625397
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime, "GetPulseFadeTime" }, // 3139301929
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames, "GetPulseSettingsParameterNames" }, // 4133138272
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime, "GetPulseTime" }, // 3736228495
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames, "GetSettingsParameterNames" }, // 627591758
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance, "GetShrinkDistance" }, // 2929975733
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage, "GetShrinkPercentage" }, // 188948516
		{ &Z_Construct_UFunction_UGTProximityLightComponent_Pulse, "Pulse" }, // 3371979583
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 1963009891
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor, "SetCenterColor" }, // 4069840580
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames, "SetCenterColorParameterNames" }, // 709315975
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames, "SetLocationParameterNames" }, // 1171064126
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor, "SetMiddleColor" }, // 4146234867
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames, "SetMiddleColorParameterNames" }, // 2782723021
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor, "SetOuterColor" }, // 584157131
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames, "SetOuterColorParameterNames" }, // 26658998
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius, "SetProjectedRadius" }, // 2021914399
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames, "SetPulseSettingsParameterNames" }, // 2050822759
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames, "SetSettingsParameterNames" }, // 3845035485
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance, "SetShrinkDistance" }, // 2328179384
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage, "SetShrinkPercentage" }, // 2068579864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * A proximity light is a Fluent Design System paradigm that acts as a surface projected gradient point light. For a material to be\n * influenced by a proximity light the ProximityLightContribution material function must be used within the material's shader graph.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTProximityLightComponent.h" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "A proximity light is a Fluent Design System paradigm that acts as a surface projected gradient point light. For a material to be\ninfluenced by a proximity light the ProximityLightContribution material function must be used within the material's shader graph." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData[] = {
		{ "BlueprintGetter", "GetProjectedRadius" },
		{ "BlueprintSetter", "SetProjectedRadius" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the radius of the ProximityLight effect when projected onto a surface. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the radius of the ProximityLight effect when projected onto a surface." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius = { "ProjectedRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ProjectedRadius), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "BlueprintGetter", "GetAttenuationRadius" },
		{ "BlueprintSetter", "SetAttenuationRadius" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the radius at which the ProximityLight effect is no longer visible. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the radius at which the ProximityLight effect is no longer visible." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData[] = {
		{ "BlueprintGetter", "GetShrinkDistance" },
		{ "BlueprintSetter", "SetShrinkDistance" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the distance a ProximityLight must be from a surface (less than or equal to) to begin shrinking to the\n\x09(ProjectedRadius * ShrinkPercentage) radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the distance a ProximityLight must be from a surface (less than or equal to) to begin shrinking to the\n      (ProjectedRadius * ShrinkPercentage) radius." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance = { "ShrinkDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ShrinkDistance), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData[] = {
		{ "BlueprintGetter", "GetShrinkPercentage" },
		{ "BlueprintSetter", "SetShrinkPercentage" },
		{ "Category", "Light" },
		{ "Comment", "/** When a ProximityLight is closer to a surface than the ShrinkDistance, the smallest percentage of the ProjectedRadius it can\n\x09 * shrink to. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "When a ProximityLight is closer to a surface than the ShrinkDistance, the smallest percentage of the ProjectedRadius it can\nshrink to." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage = { "ShrinkPercentage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ShrinkPercentage), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData[] = {
		{ "BlueprintGetter", "GetCenterColor" },
		{ "BlueprintSetter", "SetCenterColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient at the center (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient at the center (RGB) and (A) is gradient extent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor = { "CenterColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, CenterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData[] = {
		{ "BlueprintGetter", "GetMiddleColor" },
		{ "BlueprintSetter", "SetMiddleColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient in between the center and outer color (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient in between the center and outer color (RGB) and (A) is gradient extent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor = { "MiddleColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, MiddleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData[] = {
		{ "BlueprintGetter", "GetOuterColor" },
		{ "BlueprintSetter", "SetOuterColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient at the outer edge (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient at the outer edge (RGB) and (A) is gradient extent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor = { "OuterColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, OuterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_Inner = { "LocationParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetLocationParameterNames" },
		{ "BlueprintSetter", "SetLocationParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each location of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each location of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames = { "LocationParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, LocationParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_Inner = { "SettingsParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetSettingsParameterNames" },
		{ "BlueprintSetter", "SetSettingsParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each setting of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each setting of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames = { "SettingsParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, SettingsParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_Inner = { "PulseSettingsParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetPulseSettingsParameterNames" },
		{ "BlueprintSetter", "SetPulseSettingsParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each pulse setting of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each pulse setting of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames = { "PulseSettingsParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, PulseSettingsParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_Inner = { "CenterColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetCenterColorParameterNames" },
		{ "BlueprintSetter", "SetCenterColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each center color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each center color of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames = { "CenterColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, CenterColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_Inner = { "MiddleColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetMiddleColorParameterNames" },
		{ "BlueprintSetter", "SetMiddleColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each middle color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each middle color of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames = { "MiddleColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, MiddleColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_Inner = { "OuterColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetOuterColorParameterNames" },
		{ "BlueprintSetter", "SetOuterColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each outer color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each outer color of a ProximityLight to pass to a material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames = { "OuterColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, OuterColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTProximityLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTProximityLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGTProximityLightComponent_Statics::ClassParams = {
		&UGTProximityLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTProximityLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGTProximityLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGTProximityLightComponent, 2340436011);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTProximityLightComponent>()
	{
		return UGTProximityLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGTProximityLightComponent(Z_Construct_UClass_UGTProximityLightComponent, &UGTProximityLightComponent::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("UGTProximityLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTProximityLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
