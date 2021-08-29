// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMesh3.h"
#include "GameFramework/Actor.h"
#include "DynamicMeshBaseActor.generated.h"

UCLASS(Abstract)
class MJ21_API ADynamicMeshBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADynamicMeshBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FDynamicMesh3 SourceMesh;
	/**
	 * Called when the SourceMesh has been modified. Subclasses override this function to
	 * update their respective Component with the new SourceMesh.
	 */
	virtual void OnMeshEditedInternal();
	/**
	 * Call EditMesh() to safely modify the SourceMesh owned by this Actor.
	 * Your EditFunc will be called with the Current SourceMesh as argument,
	 * and you are expected to pass back the new/modified version.
	 * (If you are generating an entirely new mesh, MoveTemp can be used to do this without a copy)
	 */
	virtual void EditMesh(TFunctionRef<void(FDynamicMesh3&)> EditFunc);
	void CopyFromMesh(ADynamicMeshBaseActor* OtherMesh, bool bRecomputeNormals);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
