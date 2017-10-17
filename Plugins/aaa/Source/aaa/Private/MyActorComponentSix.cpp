// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActorComponentSix.h"
#include "Engine.h"


// Sets default values for this component's properties
UMyActorComponentSix::UMyActorComponentSix()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyActorComponentSix::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyActorComponentSix::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyActorComponentSix::test()
{
	GEngine->AddOnScreenDebugMessage(-1,3.0f,FColor::Red,TEXT("Plugins"));
}

