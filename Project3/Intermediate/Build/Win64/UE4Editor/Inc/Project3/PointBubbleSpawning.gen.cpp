// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project3/PointBubbleSpawning.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointBubbleSpawning() {}
// Cross Module References
	PROJECT3_API UClass* Z_Construct_UClass_UPointBubbleSpawning_NoRegister();
	PROJECT3_API UClass* Z_Construct_UClass_UPointBubbleSpawning();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Project3();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UPointBubbleSpawning::execRandomizeSpawnLocation)
	{
		P_GET_OBJECT(AActor,Z_Param_minActor);
		P_GET_OBJECT(AActor,Z_Param_maxActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPointBubbleSpawning::RandomizeSpawnLocation(Z_Param_minActor,Z_Param_maxActor);
		P_NATIVE_END;
	}
	void UPointBubbleSpawning::StaticRegisterNativesUPointBubbleSpawning()
	{
		UClass* Class = UPointBubbleSpawning::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RandomizeSpawnLocation", &UPointBubbleSpawning::execRandomizeSpawnLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics
	{
		struct PointBubbleSpawning_eventRandomizeSpawnLocation_Parms
		{
			AActor* minActor;
			AActor* maxActor;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_minActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maxActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_minActor = { "minActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointBubbleSpawning_eventRandomizeSpawnLocation_Parms, minActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_maxActor = { "maxActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointBubbleSpawning_eventRandomizeSpawnLocation_Parms, maxActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointBubbleSpawning_eventRandomizeSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_minActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_maxActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PointBubbleSpawning.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointBubbleSpawning, nullptr, "RandomizeSpawnLocation", nullptr, nullptr, sizeof(PointBubbleSpawning_eventRandomizeSpawnLocation_Parms), Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointBubbleSpawning_NoRegister()
	{
		return UPointBubbleSpawning::StaticClass();
	}
	struct Z_Construct_UClass_UPointBubbleSpawning_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointBubbleSpawning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Project3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointBubbleSpawning_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointBubbleSpawning_RandomizeSpawnLocation, "RandomizeSpawnLocation" }, // 3425909013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointBubbleSpawning_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PointBubbleSpawning.h" },
		{ "ModuleRelativePath", "PointBubbleSpawning.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointBubbleSpawning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointBubbleSpawning>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointBubbleSpawning_Statics::ClassParams = {
		&UPointBubbleSpawning::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPointBubbleSpawning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointBubbleSpawning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointBubbleSpawning()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointBubbleSpawning_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointBubbleSpawning, 3186234876);
	template<> PROJECT3_API UClass* StaticClass<UPointBubbleSpawning>()
	{
		return UPointBubbleSpawning::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointBubbleSpawning(Z_Construct_UClass_UPointBubbleSpawning, &UPointBubbleSpawning::StaticClass, TEXT("/Script/Project3"), TEXT("UPointBubbleSpawning"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointBubbleSpawning);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
