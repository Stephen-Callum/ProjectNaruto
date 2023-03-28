// Fill out your copyright notice in the Description page of Project Settings.


#include "PNAssetManager.h"
#include "AbilitySystemGlobals.h"


UPNAssetManager& UPNAssetManager::Get()
{
	UPNAssetManager* Singleton = Cast<UPNAssetManager>(GEngine->AssetManager);

	if (Singleton)
	{
		return *Singleton;
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be GDAssetManager!"));
		return *NewObject<UPNAssetManager>();	 // never calls this
	}
}

void UPNAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
}