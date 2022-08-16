// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectClockwork/BPFL_FileIO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFL_FileIO() {}
// Cross Module References
	PROJECTCLOCKWORK_API UClass* Z_Construct_UClass_UBPFL_FileIO_NoRegister();
	PROJECTCLOCKWORK_API UClass* Z_Construct_UClass_UBPFL_FileIO();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ProjectClockwork();
// End Cross Module References
	DEFINE_FUNCTION(UBPFL_FileIO::execLoadFileToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFL_FileIO::LoadFileToString(Z_Param_Filename);
		P_NATIVE_END;
	}
	void UBPFL_FileIO::StaticRegisterNativesUBPFL_FileIO()
	{
		UClass* Class = UBPFL_FileIO::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileToString", &UBPFL_FileIO::execLoadFileToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics
	{
		struct BPFL_FileIO_eventLoadFileToString_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "BPFL_FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL_FileIO, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(BPFL_FileIO_eventLoadFileToString_Parms), Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPFL_FileIO_NoRegister()
	{
		return UBPFL_FileIO::StaticClass();
	}
	struct Z_Construct_UClass_UBPFL_FileIO_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFL_FileIO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectClockwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFL_FileIO_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString, "LoadFileToString" }, // 880144985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPFL_FileIO.h" },
		{ "ModuleRelativePath", "BPFL_FileIO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFL_FileIO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFL_FileIO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPFL_FileIO_Statics::ClassParams = {
		&UBPFL_FileIO::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFL_FileIO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPFL_FileIO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPFL_FileIO, 12792277);
	template<> PROJECTCLOCKWORK_API UClass* StaticClass<UBPFL_FileIO>()
	{
		return UBPFL_FileIO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPFL_FileIO(Z_Construct_UClass_UBPFL_FileIO, &UBPFL_FileIO::StaticClass, TEXT("/Script/ProjectClockwork"), TEXT("UBPFL_FileIO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFL_FileIO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
