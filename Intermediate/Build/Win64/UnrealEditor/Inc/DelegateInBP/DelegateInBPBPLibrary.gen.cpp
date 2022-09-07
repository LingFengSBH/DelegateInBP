// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DelegateInBP/Public/DelegateInBPBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateInBPBPLibrary() {}
// Cross Module References
	DELEGATEINBP_API UClass* Z_Construct_UClass_UDelegateInBPBPLibrary_NoRegister();
	DELEGATEINBP_API UClass* Z_Construct_UClass_UDelegateInBPBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DelegateInBP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DELEGATEINBP_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateVar();
// End Cross Module References
	DEFINE_FUNCTION(UDelegateInBPBPLibrary::execCreateDelegateByName)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDelegateVar*)Z_Param__Result=UDelegateInBPBPLibrary::CreateDelegateByName(Z_Param_Object,Z_Param_FunctionName,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDelegateInBPBPLibrary::execExecuteDelegate)
	{
		P_GET_STRUCT(FDelegateVar,Z_Param_DelegateVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDelegateInBPBPLibrary::ExecuteDelegate(Z_Param_DelegateVar);
		P_NATIVE_END;
	}
	void UDelegateInBPBPLibrary::StaticRegisterNativesUDelegateInBPBPLibrary()
	{
		UClass* Class = UDelegateInBPBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDelegateByName", &UDelegateInBPBPLibrary::execCreateDelegateByName },
			{ "ExecuteDelegate", &UDelegateInBPBPLibrary::execExecuteDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics
	{
		struct DelegateInBPBPLibrary_eventCreateDelegateByName_Parms
		{
			UObject* Object;
			FName FunctionName;
			bool Success;
			FDelegateVar ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateInBPBPLibrary_eventCreateDelegateByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateInBPBPLibrary_eventCreateDelegateByName_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((DelegateInBPBPLibrary_eventCreateDelegateByName_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DelegateInBPBPLibrary_eventCreateDelegateByName_Parms), &Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateInBPBPLibrary_eventCreateDelegateByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FDelegateVar, METADATA_PARAMS(nullptr, 0) }; // 3928432521
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DelegateInBP" },
		{ "DisplayName", "Create Delegate by Name" },
		{ "ModuleRelativePath", "Public/DelegateInBPBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelegateInBPBPLibrary, nullptr, "CreateDelegateByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::DelegateInBPBPLibrary_eventCreateDelegateByName_Parms), Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics
	{
		struct DelegateInBPBPLibrary_eventExecuteDelegate_Parms
		{
			FDelegateVar DelegateVar;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelegateVar;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_DelegateVar = { "DelegateVar", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateInBPBPLibrary_eventExecuteDelegate_Parms, DelegateVar), Z_Construct_UScriptStruct_FDelegateVar, METADATA_PARAMS(nullptr, 0) }; // 3928432521
	void Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DelegateInBPBPLibrary_eventExecuteDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DelegateInBPBPLibrary_eventExecuteDelegate_Parms), &Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_DelegateVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DelegateInBP" },
		{ "DisplayName", "Execute Delegate" },
		{ "ModuleRelativePath", "Public/DelegateInBPBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelegateInBPBPLibrary, nullptr, "ExecuteDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::DelegateInBPBPLibrary_eventExecuteDelegate_Parms), Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelegateInBPBPLibrary);
	UClass* Z_Construct_UClass_UDelegateInBPBPLibrary_NoRegister()
	{
		return UDelegateInBPBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDelegateInBPBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DelegateInBP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDelegateInBPBPLibrary_CreateDelegateByName, "CreateDelegateByName" }, // 3920293334
		{ &Z_Construct_UFunction_UDelegateInBPBPLibrary_ExecuteDelegate, "ExecuteDelegate" }, // 3727843971
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "DelegateInBPBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DelegateInBPBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateInBPBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::ClassParams = {
		&UDelegateInBPBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDelegateInBPBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDelegateInBPBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelegateInBPBPLibrary.OuterSingleton, Z_Construct_UClass_UDelegateInBPBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDelegateInBPBPLibrary.OuterSingleton;
	}
	template<> DELEGATEINBP_API UClass* StaticClass<UDelegateInBPBPLibrary>()
	{
		return UDelegateInBPBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateInBPBPLibrary);
	struct Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateInBPBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateInBPBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDelegateInBPBPLibrary, UDelegateInBPBPLibrary::StaticClass, TEXT("UDelegateInBPBPLibrary"), &Z_Registration_Info_UClass_UDelegateInBPBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelegateInBPBPLibrary), 3991056367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateInBPBPLibrary_h_1309856045(TEXT("/Script/DelegateInBP"),
		Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateInBPBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateInBPBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
