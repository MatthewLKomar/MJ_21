// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMeshBaseActor.h"
#include "ADynamicSDMCActor.generated.h"

/**
 * 
 */
UCLASS()
class MJ21_API AADynamicSDMCActor : public ADynamicMeshBaseActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	USimpleDynamicMeshComponent* MeshComponent = nullptr;
};
