// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define ROSSINANTE_MyAnimInstance_generated_h

#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnHitEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_OnHitEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_SkillCastEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_SkillCastEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_OnTumbleEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_OnTumbleEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackHit(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnHitEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_OnHitEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_SkillCastEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_SkillCastEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_OnTumbleEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_OnTumbleEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackHit(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public:


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAnimInstance)


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UMyAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Horizontal() { return STRUCT_OFFSET(UMyAnimInstance, Horizontal); } \
	FORCEINLINE static uint32 __PPO__Vertical() { return STRUCT_OFFSET(UMyAnimInstance, Vertical); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UMyAnimInstance, AttackMontage); } \
	FORCEINLINE static uint32 __PPO__TumbleMontage() { return STRUCT_OFFSET(UMyAnimInstance, TumbleMontage); } \
	FORCEINLINE static uint32 __PPO__Skill_QMontage() { return STRUCT_OFFSET(UMyAnimInstance, Skill_QMontage); } \
	FORCEINLINE static uint32 __PPO__Skill_EMontage() { return STRUCT_OFFSET(UMyAnimInstance, Skill_EMontage); } \
	FORCEINLINE static uint32 __PPO__HitReactMontage() { return STRUCT_OFFSET(UMyAnimInstance, HitReactMontage); }


#define RossiNante_Source_RossiNante_MyAnimInstance_h_18_PROLOG
#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_INCLASS \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyAnimInstance_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class UMyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
