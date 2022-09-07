// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DELEGATEINBP_DelegateVar_generated_h
#error "DelegateVar.generated.h already included, missing '#pragma once' in DelegateVar.h"
#endif
#define DELEGATEINBP_DelegateVar_generated_h

#define FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_7_DELEGATE \
static inline void FVARDELEGATE_DelegateWrapper(const FScriptDelegate& VARDELEGATE) \
{ \
	VARDELEGATE.ProcessDelegate<UObject>(NULL); \
}


#define FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateVar_Statics; \
	DELEGATEINBP_API static class UScriptStruct* StaticStruct();


template<> DELEGATEINBP_API UScriptStruct* StaticStruct<struct FDelegateVar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Plugins_DelegateInBP_Source_DelegateInBP_Public_DelegateVar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
