// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DelegateInBP/Public/DelegateVar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateVar() {}
// Cross Module References
	DELEGATEINBP_API UFunction* Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DelegateInBP();
	DELEGATEINBP_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateVar();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelegateVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DelegateInBP, nullptr, "VARDELEGATE__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelegateVar;
class UScriptStruct* FDelegateVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelegateVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelegateVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateVar, Z_Construct_UPackage__Script_DelegateInBP(), TEXT("DelegateVar"));
	}
	return Z_Registration_Info_UScriptStruct_DelegateVar.OuterSingleton;
}
template<> DELEGATEINBP_API UScriptStruct* StaticStruct<FDelegateVar>()
{
	return FDelegateVar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDelegateVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateVar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DelegateVar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateVar>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateVar_Statics::NewProp_Delegate_MetaData[] = {
		{ "Category", "DelegateVar" },
		{ "ModuleRelativePath", "Public/DelegateVar.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDelegateVar_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateVar, Delegate), Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateVar_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateVar_Statics::NewProp_Delegate_MetaData)) }; // 167595116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateVar_Statics::NewProp_Delegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DelegateInBP,
		nullptr,
		&NewStructOps,
		"DelegateVar",
		sizeof(FDelegateVar),
		alignof(FDelegateVar),
		Z_Construct_UScriptStruct_FDelegateVar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateVar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateVar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateVar()
	{
		if (!Z_Registration_Info_UScriptStruct_DelegateVar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelegateVar.InnerSingleton, Z_Construct_UScriptStruct_FDelegateVar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DelegateVar.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_Statics::ScriptStructInfo[] = {
		{ FDelegateVar::StaticStruct, Z_Construct_UScriptStruct_FDelegateVar_Statics::NewStructOps, TEXT("DelegateVar"), &Z_Registration_Info_UScriptStruct_DelegateVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelegateVar), 3928432521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_559543995(TEXT("/Script/DelegateInBP"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
