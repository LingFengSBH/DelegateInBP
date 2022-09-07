// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "DelegateVar.generated.h"

DECLARE_DYNAMIC_DELEGATE(FVARDELEGATE);
USTRUCT(BlueprintType)
struct FDelegateVar
{
 GENERATED_USTRUCT_BODY()
public:
 UPROPERTY(BlueprintReadWrite)
 FVARDELEGATE Delegate;
};
