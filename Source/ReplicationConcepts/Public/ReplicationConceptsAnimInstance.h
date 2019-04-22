// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "ReplicationConceptsAnimInstance.generated.h"
/**
 * 
 */
UCLASS(transient, Blueprintable, hideCategories=AnimInstance, BlueprintType)
class UReplicationConceptsAnimInstance: public UAnimInstance
{
	GENERATED_BODY()

public:
	UReplicationConceptsAnimInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generic")
	float Speed;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
