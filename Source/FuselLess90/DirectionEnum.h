// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "DirectionEnum.generated.h"

/**
 * 
 */
UCLASS()
class FUSELLESS90_API UDirectionEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
public:
	enum Direction{ Up = 1, Down = -1};
};
