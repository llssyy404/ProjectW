// Fill out your copyright notice in the Description page of Project Settings.

#include "PWCharacter.h"


// Sets default values
APWCharacter::APWCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APWCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APWCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

