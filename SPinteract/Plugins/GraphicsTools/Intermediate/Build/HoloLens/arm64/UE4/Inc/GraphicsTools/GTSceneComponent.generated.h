// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialParameterCollection;
#ifdef GRAPHICSTOOLS_GTSceneComponent_generated_h
#error "GTSceneComponent.generated.h already included, missing '#pragma once' in GTSceneComponent.h"
#endif
#define GRAPHICSTOOLS_GTSceneComponent_generated_h

#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_SPARSE_DATA
#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasParameterCollectionOverride); \
	DECLARE_FUNCTION(execSetParameterCollectionOverride);


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasParameterCollectionOverride); \
	DECLARE_FUNCTION(execSetParameterCollectionOverride);


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGTSceneComponent(); \
	friend struct Z_Construct_UClass_UGTSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UGTSceneComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsTools"), NO_API) \
	DECLARE_SERIALIZER(UGTSceneComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGTSceneComponent(); \
	friend struct Z_Construct_UClass_UGTSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UGTSceneComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsTools"), NO_API) \
	DECLARE_SERIALIZER(UGTSceneComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGTSceneComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGTSceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTSceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTSceneComponent(UGTSceneComponent&&); \
	NO_API UGTSceneComponent(const UGTSceneComponent&); \
public:


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGTSceneComponent(UGTSceneComponent&&); \
	NO_API UGTSceneComponent(const UGTSceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGTSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGTSceneComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGTSceneComponent)


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParameterCollectionOverride() { return STRUCT_OFFSET(UGTSceneComponent, ParameterCollectionOverride); } \
	FORCEINLINE static uint32 __PPO__WorldParameterCollection() { return STRUCT_OFFSET(UGTSceneComponent, WorldParameterCollection); }


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_17_PROLOG
#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_SPARSE_DATA \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_RPC_WRAPPERS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_INCLASS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_SPARSE_DATA \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHICSTOOLS_API UClass* StaticClass<class UGTSceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTSceneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
