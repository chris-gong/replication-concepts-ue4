// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplicationConceptsAnimInstance.h"

UReplicationConceptsAnimInstance::UReplicationConceptsAnimInstance()
{
	Speed = 0.0;
}

void UReplicationConceptsAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);
	AActor* OwningActor = GetOwningActor();

	if (OwningActor != nullptr) {
		Speed = OwningActor->GetVelocity().Size();
	}
}
