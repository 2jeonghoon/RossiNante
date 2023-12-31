// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/PlayMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMenuWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_UPlayMenuWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_UPlayMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UPlayMenuWidget::StaticRegisterNativesUPlayMenuWidget()
	{
		UClass* Class = UPlayMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDownButtonClicked", &UPlayMenuWidget::execOnDownButtonClicked },
			{ "OnPlayButtonClicked", &UPlayMenuWidget::execOnPlayButtonClicked },
			{ "OnUpButtonClicked", &UPlayMenuWidget::execOnUpButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
		{ "ToolTip", "BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMenuWidget, nullptr, "OnDownButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMenuWidget, nullptr, "OnPlayButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
		{ "ToolTip", "BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMenuWidget, nullptr, "OnUpButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayMenuWidget_NoRegister()
	{
		return UPlayMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_ExpValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_ExpValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_LevelValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_LevelValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_Floor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_Floor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Play_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Play;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayMenuWidget_OnDownButtonClicked, "OnDownButtonClicked" }, // 680494593
		{ &Z_Construct_UFunction_UPlayMenuWidget_OnPlayButtonClicked, "OnPlayButtonClicked" }, // 3702717794
		{ &Z_Construct_UFunction_UPlayMenuWidget_OnUpButtonClicked, "OnUpButtonClicked" }, // 1209630675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayMenuWidget.h" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_ExpValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_ExpValue = { "TB_ExpValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, TB_ExpValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_ExpValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_ExpValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_LevelValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_LevelValue = { "TB_LevelValue", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, TB_LevelValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_LevelValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_LevelValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_Floor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_Floor = { "TB_Floor", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, TB_Floor), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_Floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_Floor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Down_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Down = { "BT_Down", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, BT_Down), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Up_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Up = { "BT_Up", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, BT_Up), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play = { "BT_Play", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayMenuWidget, BT_Play), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_ExpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_LevelValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_TB_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMenuWidget_Statics::NewProp_BT_Play,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayMenuWidget_Statics::ClassParams = {
		&UPlayMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayMenuWidget, 4062947473);
	template<> ROSSINANTE_API UClass* StaticClass<UPlayMenuWidget>()
	{
		return UPlayMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayMenuWidget(Z_Construct_UClass_UPlayMenuWidget, &UPlayMenuWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("UPlayMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
