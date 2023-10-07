// Fill out your copyright notice in the Description page of Project Settings.


#include "Player2D.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Engine/World.h"

APlayer2D::APlayer2D()
{
	PrimaryActorTick.bCanEverTick = true;


}

void APlayer2D::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(GetWorld())) return;
	screen_size = UWidgetLayoutLibrary::GetViewportSize( GetWorld() );


}

void APlayer2D::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

void APlayer2D::Tick(float DeltaTime)
{

}


