// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define ROSSINANTE_MyGameModeBase_generated_h

#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_RPC_WRAPPERS
#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase)


#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BP_HUDWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_HUDWidget); } \
	FORCEINLINE static uint32 __PPO__BP_LoginWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_LoginWidget); } \
	FORCEINLINE static uint32 __PPO__BP_MenuWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_MenuWidget); } \
	FORCEINLINE static uint32 __PPO__BP_PlayMenuWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_PlayMenuWidget); } \
	FORCEINLINE static uint32 __PPO__BP_StatMenuWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_StatMenuWidget); } \
	FORCEINLINE static uint32 __PPO__BP_BossHPWidget() { return STRUCT_OFFSET(AMyGameModeBase, BP_BossHPWidget); }


#define RossiNante_Source_RossiNante_MyGameModeBase_h_30_PROLOG
#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_INCLASS \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyGameModeBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyGameModeBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
