// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplicationConceptsAnimInstance.h"
#include "ReplicationConceptsCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UReplicationConceptsAnimInstance::UReplicationConceptsAnimInstance()
{
	Speed = 0.0;
	IsInAir = false;
}

void UReplicationConceptsAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);
	AActor* OwningActor = GetOwningActor();

	if (OwningActor != nullptr) {
		Speed = OwningActor->GetVelocity().Size();
		AReplicationConceptsCharacter* OwningCharacter = Cast<AReplicationConceptsCharacter>(OwningActor);
		if (OwningCharacter != nullptr) {
			IsInAir = OwningCharacter->GetCharacterMovement()->IsFalling();
		}
	}
}
