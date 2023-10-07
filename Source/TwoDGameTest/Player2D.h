// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Player2D.generated.h"

/**
 * 
 */
UCLASS()
class TWODGAMETEST_API APlayer2D : public APaperCharacter
{
	GENERATED_BODY()

public:
	APlayer2D();

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;


public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int speed{ 400 };

	FVector2D screen_size{ FVector2D(0,0) };

	
};
