// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicMeshBaseActor.h"

// Sets default values
ADynamicMeshBaseActor::ADynamicMeshBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADynamicMeshBaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADynamicMeshBaseActor::CopyFromMesh(ADynamicMeshBaseActor* OtherMesh, bool bRecomputeNormals)
{


}

// Called every frame
void ADynamicMeshBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

