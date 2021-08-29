// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMeshBaseActor.h"
#include "DynamicSMCActor.generated.h"

/**
 * 
 */
UCLASS()
class MJ21_API ADynamicSMCActor : public ADynamicMeshBaseActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent = nullptr;
};
