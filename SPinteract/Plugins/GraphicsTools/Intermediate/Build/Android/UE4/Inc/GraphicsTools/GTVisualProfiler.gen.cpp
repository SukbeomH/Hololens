// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTVisualProfiler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTVisualProfiler() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTVisualProfiler_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTVisualProfiler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGTVisualProfiler::execSetPitchOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGTVisualProfiler::execGetPitchOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPitchOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGTVisualProfiler::execSetFollowOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGTVisualProfiler::execGetFollowOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFollowOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGTVisualProfiler::execSetFollowSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGTVisualProfiler::execGetFollowSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFollowSpeed();
		P_NATIVE_END;
	}
	void AGTVisualProfiler::StaticRegisterNativesAGTVisualProfiler()
	{
		UClass* Class = AGTVisualProfiler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFollowOffset", &AGTVisualProfiler::execGetFollowOffset },
			{ "GetFollowSpeed", &AGTVisualProfiler::execGetFollowSpeed },
			{ "GetPitchOffset", &AGTVisualProfiler::execGetPitchOffset },
			{ "SetFollowOffset", &AGTVisualProfiler::execSetFollowOffset },
			{ "SetFollowSpeed", &AGTVisualProfiler::execSetFollowSpeed },
			{ "SetPitchOffset", &AGTVisualProfiler::execSetPitchOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics
	{
		struct GTVisualProfiler_eventGetFollowOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventGetFollowOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Getter to the FollowOffset. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Getter to the FollowOffset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "GetFollowOffset", nullptr, nullptr, sizeof(GTVisualProfiler_eventGetFollowOffset_Parms), Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics
	{
		struct GTVisualProfiler_eventGetFollowSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventGetFollowSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Getter to the FollowSpeed. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Getter to the FollowSpeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "GetFollowSpeed", nullptr, nullptr, sizeof(GTVisualProfiler_eventGetFollowSpeed_Parms), Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics
	{
		struct GTVisualProfiler_eventGetPitchOffset_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventGetPitchOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Getter to the PitchOffset. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Getter to the PitchOffset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "GetPitchOffset", nullptr, nullptr, sizeof(GTVisualProfiler_eventGetPitchOffset_Parms), Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics
	{
		struct GTVisualProfiler_eventSetFollowOffset_Parms
		{
			FVector Offset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventSetFollowOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Setter to the FollowOffset. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Setter to the FollowOffset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "SetFollowOffset", nullptr, nullptr, sizeof(GTVisualProfiler_eventSetFollowOffset_Parms), Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics
	{
		struct GTVisualProfiler_eventSetFollowSpeed_Parms
		{
			float Speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventSetFollowSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Setter to the FollowSpeed. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Setter to the FollowSpeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "SetFollowSpeed", nullptr, nullptr, sizeof(GTVisualProfiler_eventSetFollowSpeed_Parms), Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics
	{
		struct GTVisualProfiler_eventSetPitchOffset_Parms
		{
			float Offset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTVisualProfiler_eventSetPitchOffset_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** Setter to the PitchOffset. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Setter to the PitchOffset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGTVisualProfiler, nullptr, "SetPitchOffset", nullptr, nullptr, sizeof(GTVisualProfiler_eventSetPitchOffset_Parms), Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGTVisualProfiler_NoRegister()
	{
		return AGTVisualProfiler::StaticClass();
	}
	struct Z_Construct_UClass_AGTVisualProfiler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FollowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultQuadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultQuadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTimeLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameTimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTimePivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameTimePivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameThreadTimeLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameThreadTimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameThreadTimePivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameThreadTimePivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderThreadTimeLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderThreadTimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderThreadTimePivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderThreadTimePivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUTimeLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GPUTimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUTimePivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GPUTimePivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawCallsLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawCallsLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitivesLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitivesLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTVisualProfiler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGTVisualProfiler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGTVisualProfiler_GetFollowOffset, "GetFollowOffset" }, // 2775727251
		{ &Z_Construct_UFunction_AGTVisualProfiler_GetFollowSpeed, "GetFollowSpeed" }, // 3758616329
		{ &Z_Construct_UFunction_AGTVisualProfiler_GetPitchOffset, "GetPitchOffset" }, // 2067926108
		{ &Z_Construct_UFunction_AGTVisualProfiler_SetFollowOffset, "SetFollowOffset" }, // 2257400969
		{ &Z_Construct_UFunction_AGTVisualProfiler_SetFollowSpeed, "SetFollowSpeed" }, // 2207685898
		{ &Z_Construct_UFunction_AGTVisualProfiler_SetPitchOffset, "SetPitchOffset" }, // 3060857056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * The VisualProfiler provides a drop in, single actor class, solution for viewing your Windows Mixed Reality Unreal application's frame,\n * game, render, and GPU time. Missed frames are displayed as red text and bar graphs to find problem areas. Draw calls and primitive counts\n * (polygons/triangles) are reported as well.\n */" },
		{ "IncludePath", "GTVisualProfiler.h" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "The VisualProfiler provides a drop in, single actor class, solution for viewing your Windows Mixed Reality Unreal application's frame,\ngame, render, and GPU time. Missed frames are displayed as red text and bar graphs to find problem areas. Draw calls and primitive counts\n(polygons/triangles) are reported as well." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowSpeed_MetaData[] = {
		{ "BlueprintGetter", "GetFollowSpeed" },
		{ "BlueprintSetter", "SetFollowSpeed" },
		{ "Category", "Visual Profiler" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How quickly to interpolate the profiler towards its target location and rotation. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "How quickly to interpolate the profiler towards its target location and rotation." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowSpeed = { "FollowSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, FollowSpeed), METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "BlueprintGetter", "GetFollowOffset" },
		{ "BlueprintSetter", "SetFollowOffset" },
		{ "Category", "Visual Profiler" },
		{ "Comment", "/** The offset from the target location in camera local space. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "The offset from the target location in camera local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, FollowOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PitchOffset_MetaData[] = {
		{ "BlueprintGetter", "GetPitchOffset" },
		{ "BlueprintSetter", "SetPitchOffset" },
		{ "Category", "Visual Profiler" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Extra pitch applied on top of the target rotation (in degrees). */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Extra pitch applied on top of the target rotation (in degrees)." },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PitchOffset = { "PitchOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, PitchOffset), METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PitchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultQuadMesh_MetaData[] = {
		{ "Comment", "/** Assets used to construct the profiler. */" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Assets used to construct the profiler." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultQuadMesh = { "DefaultQuadMesh", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, DefaultQuadMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultQuadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultQuadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultTextMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultTextMaterial = { "DefaultTextMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, DefaultTextMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultTextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultTextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimeLabel_MetaData[] = {
		{ "Comment", "/** Profiler components. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
		{ "ToolTip", "Profiler components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimeLabel = { "FrameTimeLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, FrameTimeLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimePivot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimePivot = { "FrameTimePivot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, FrameTimePivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimePivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimePivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimeLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimeLabel = { "GameThreadTimeLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, GameThreadTimeLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimePivot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimePivot = { "GameThreadTimePivot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, GameThreadTimePivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimePivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimePivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimeLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimeLabel = { "RenderThreadTimeLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, RenderThreadTimeLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimePivot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimePivot = { "RenderThreadTimePivot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, RenderThreadTimePivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimePivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimePivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimeLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimeLabel = { "GPUTimeLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, GPUTimeLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimePivot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimePivot = { "GPUTimePivot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, GPUTimePivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimePivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimePivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DrawCallsLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DrawCallsLabel = { "DrawCallsLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, DrawCallsLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DrawCallsLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DrawCallsLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PrimitivesLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTVisualProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PrimitivesLabel = { "PrimitivesLabel", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTVisualProfiler, PrimitivesLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PrimitivesLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PrimitivesLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGTVisualProfiler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FollowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PitchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultQuadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DefaultTextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_FrameTimePivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GameThreadTimePivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_RenderThreadTimePivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_GPUTimePivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_DrawCallsLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTVisualProfiler_Statics::NewProp_PrimitivesLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTVisualProfiler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTVisualProfiler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTVisualProfiler_Statics::ClassParams = {
		&AGTVisualProfiler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGTVisualProfiler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGTVisualProfiler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTVisualProfiler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTVisualProfiler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTVisualProfiler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTVisualProfiler, 679167022);
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTVisualProfiler>()
	{
		return AGTVisualProfiler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTVisualProfiler(Z_Construct_UClass_AGTVisualProfiler, &AGTVisualProfiler::StaticClass, TEXT("/Script/GraphicsTools"), TEXT("AGTVisualProfiler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTVisualProfiler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
