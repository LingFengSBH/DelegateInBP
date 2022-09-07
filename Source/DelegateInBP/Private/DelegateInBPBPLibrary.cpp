// Copyright Epic Games, Inc. All Rights Reserved.

#include "DelegateInBPBPLibrary.h"
#include "DelegateInBP.h"

UDelegateInBPBPLibrary::UDelegateInBPBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UDelegateInBPBPLibrary::ExecuteDelegate(FDelegateVar DelegateVar)
{
	const FVARDELEGATE DelegateToExecute =DelegateVar.Delegate;
	if (!DelegateToExecute.IsBound())
	{
		return false;
	}
	if (DelegateToExecute.GetUObject()->FindFunction(DelegateToExecute.GetFunctionName())->NumParms>0)
	{
		return false;
	}
	DelegateToExecute.Execute();
	return true;
}

FDelegateVar UDelegateInBPBPLibrary::CreateDelegateByName(UObject* Object, FName FunctionName,bool& Success)
{
	FDelegateVar OutDelegateVar;
	UFunction* Function= Object->FindFunction(FunctionName);
	if (Function&&Function->NumParms>0)
	{
		Success=false;
		return OutDelegateVar;
	}
	OutDelegateVar.Delegate.BindUFunction(Object,FunctionName);
	Success=OutDelegateVar.Delegate.IsBound();
	return OutDelegateVar;
}
