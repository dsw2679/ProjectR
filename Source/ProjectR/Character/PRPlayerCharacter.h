// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PRCharacterBase.h"
#include "PRPlayerCharacter.generated.h"

UCLASS()
class PROJECTR_API APRPlayerCharacter : public APRCharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APRPlayerCharacter();

	// TODO: 구현
	bool IsCrouching() const {return false; }
	bool IsSprinting() const {return false; }
	bool IsAiming() const {return false;}
	float GetDesiredLookDirection() const {return 0.f;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
