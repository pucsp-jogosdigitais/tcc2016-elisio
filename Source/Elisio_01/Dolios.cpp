// Fill out your copyright notice in the Description page of Project Settings.

#include "Elisio_01.h"
#include "Dolios.h"


// Sets default values
ADolios::ADolios()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADolios::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADolios::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADolios::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

