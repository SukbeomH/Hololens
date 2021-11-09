// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef GRAPHICSTOOLS_GTProximityLightComponent_generated_h
#error "GTProximityLightComponent.generated.h already included, missing '#pragma once' in GTProximityLightComponent.h"
#endif
#define GRAPHICSTOOLS_GTProximityLightComponent_generated_h

#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_SPARSE_DATA
#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPulseFadeTime); \
	DECLARE_FUNCTION(execGetPulseTime); \
	DECLARE_FUNCTION(execPulse); \
	DECLARE_FUNCTION(execSetOuterColorParameterNames); \
	DECLARE_FUNCTION(execGetOuterColorParameterNames); \
	DECLARE_FUNCTION(execSetMiddleColorParameterNames); \
	DECLARE_FUNCTION(execGetMiddleColorParameterNames); \
	DECLARE_FUNCTION(execSetCenterColorParameterNames); \
	DECLARE_FUNCTION(execGetCenterColorParameterNames); \
	DECLARE_FUNCTION(execSetPulseSettingsParameterNames); \
	DECLARE_FUNCTION(execGetPulseSettingsParameterNames); \
	DECLARE_FUNCTION(execSetSettingsParameterNames); \
	DECLARE_FUNCTION(execGetSettingsParameterNames); \
	DECLARE_FUNCTION(execSetLocationParameterNames); \
	DECLARE_FUNCTION(execGetLocationParameterNames); \
	DECLARE_FUNCTION(execSetOuterColor); \
	DECLARE_FUNCTION(execGetOuterColor); \
	DECLARE_FUNCTION(execSetMiddleColor); \
	DECLARE_FUNCTION(execGetMiddleColor); \
	DECLARE_FUNCTION(execSetCenterColor); \
	DECLARE_FUNCTION(execGetCenterColor); \
	DECLARE_FUNCTION(execSetShrinkPercentage); \
	DECLARE_FUNCTION(execGetShrinkPercentage); \
	DECLARE_FUNCTION(execSetShrinkDistance); \
	DECLARE_FUNCTION(execGetShrinkDistance); \
	DECLARE_FUNCTION(execSetAttenuationRadius); \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetProjectedRadius); \
	DECLARE_FUNCTION(execGetProjectedRadius);


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPulseFadeTime); \
	DECLARE_FUNCTION(execGetPulseTime); \
	DECLARE_FUNCTION(execPulse); \
	DECLARE_FUNCTION(execSetOuterColorParameterNames); \
	DECLARE_FUNCTION(execGetOuterColorParameterNames); \
	DECLARE_FUNCTION(execSetMiddleColorParameterNames); \
	DECLARE_FUNCTION(execGetMiddleColorParameterNames); \
	DECLARE_FUNCTION(execSetCenterColorParameterNames); \
	DECLARE_FUNCTION(execGetCenterColorParameterNames); \
	DECLARE_FUNCTION(execSetPulseSettingsParameterNames); \
	DECLARE_FUNCTION(execGetPulseSettingsParameterNames); \
	DECLARE_FUNCTION(execSetSettingsParameterNames); \
	DECLARE_FUNCTION(execGetSettingsParameterNames); \
	DECLARE_FUNCTION(execSetLocationParameterNames); \
	DECLARE_FUNCTION(execGetLocationParameterNames); \
	DECLARE_FUNCTION(execSetOuterColor); \
	DECLARE_FUNCTION(execGetOuterColor); \
	DECLARE_FUNCTION(execSetMiddleColor); \
	DECLARE_FUNCTION(execGetMiddleColor); \
	DECLARE_FUNCTION(execSetCenterColor); \
	DECLARE_FUNCTION(execGetCenterColor); \
	DECLARE_FUNCTION(execSetShrinkPercentage); \
	DECLARE_FUNCTION(execGetShrinkPercentage); \
	DECLARE_FUNCTION(execSetShrinkDistance); \
	DECLARE_FUNCTION(execGetShrinkDistance); \
	DECLARE_FUNCTION(execSetAttenuationRadius); \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetProjectedRadius); \
	DECLARE_FUNCTION(execGetProjectedRadius);


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGTProximityLightComponent(); \
	friend struct Z_Construct_UClass_UGTProximityLightComponent_Statics; \
public: \
	DECLARE_CLASS(UGTProximityLightComponent, UGTLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsTools"), NO_API) \
	DECLARE_SERIALIZER(UGTProximityLightComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGTProximityLightComponent(); \
	friend struct Z_Construct_UClass_UGTProximityLightComponent_Statics; \
public: \
	DECLARE_CLASS(UGTProximityLightComponent, UGTLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsTools"), NO_API) \
	DECLARE_SERIALIZER(UGTProximityLightComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGTProximityLightComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGTProximityLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTProximityLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTProximityLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTProximityLightComponent(UGTProximityLightComponent&&); \
	NO_API UGTProximityLightComponent(const UGTProximityLightComponent&); \
public:


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTProximityLightComponent(UGTProximityLightComponent&&); \
	NO_API UGTProximityLightComponent(const UGTProximityLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTProximityLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTProximityLightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGTProximityLightComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectedRadius() { return STRUCT_OFFSET(UGTProximityLightComponent, ProjectedRadius); } \
	FORCEINLINE static uint32 __PPO__AttenuationRadius() { return STRUCT_OFFSET(UGTProximityLightComponent, AttenuationRadius); } \
	FORCEINLINE static uint32 __PPO__ShrinkDistance() { return STRUCT_OFFSET(UGTProximityLightComponent, ShrinkDistance); } \
	FORCEINLINE static uint32 __PPO__ShrinkPercentage() { return STRUCT_OFFSET(UGTProximityLightComponent, ShrinkPercentage); } \
	FORCEINLINE static uint32 __PPO__CenterColor() { return STRUCT_OFFSET(UGTProximityLightComponent, CenterColor); } \
	FORCEINLINE static uint32 __PPO__MiddleColor() { return STRUCT_OFFSET(UGTProximityLightComponent, MiddleColor); } \
	FORCEINLINE static uint32 __PPO__OuterColor() { return STRUCT_OFFSET(UGTProximityLightComponent, OuterColor); } \
	FORCEINLINE static uint32 __PPO__LocationParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, LocationParameterNames); } \
	FORCEINLINE static uint32 __PPO__SettingsParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, SettingsParameterNames); } \
	FORCEINLINE static uint32 __PPO__PulseSettingsParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, PulseSettingsParameterNames); } \
	FORCEINLINE static uint32 __PPO__CenterColorParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, CenterColorParameterNames); } \
	FORCEINLINE static uint32 __PPO__MiddleColorParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, MiddleColorParameterNames); } \
	FORCEINLINE static uint32 __PPO__OuterColorParameterNames() { return STRUCT_OFFSET(UGTProximityLightComponent, OuterColorParameterNames); }


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_24_PROLOG
#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_RPC_WRAPPERS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_INCLASS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHICSTOOLS_API UClass* StaticClass<class UGTProximityLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
