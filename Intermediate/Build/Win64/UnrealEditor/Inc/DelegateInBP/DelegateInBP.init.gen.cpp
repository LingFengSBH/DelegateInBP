// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateInBP_init() {}
	DELEGATEINBP_API UFunction* Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DelegateInBP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DelegateInBP()
	{
		if (!Z_Registration_Info_UPackage__Script_DelegateInBP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DelegateInBP_VARDELEGATE__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DelegateInBP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6E175E20,
				0xFA6DCA16,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DelegateInBP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DelegateInBP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DelegateInBP(Z_Construct_UPackage__Script_DelegateInBP, TEXT("/Script/DelegateInBP"), Z_Registration_Info_UPackage__Script_DelegateInBP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6E175E20, 0xFA6DCA16));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
