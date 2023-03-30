// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectionEnum.h"
#include "JumpActor.generated.h"


UCLASS()
class FUSELLESS90_API AJumpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJumpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere);
	UStaticMeshComponent* JumpMesh;

	UPROPERTY(EditAnywhere);
	float JumpHeight;

	UPROPERTY(EditAnywhere);
	float JumpSpeed;

private:
	UDirectionEnum::Direction _currentDirection = UDirectionEnum::Direction::Up;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};