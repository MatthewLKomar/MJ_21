// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMeshBaseActor.h"
#include "DynamicPMCActor.generated.h"

/**
 * 
 */
UCLASS()
class MJ21_API ADynamicPMCActor : public ADynamicMeshBaseActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* MeshComponent = nullptr;
};
