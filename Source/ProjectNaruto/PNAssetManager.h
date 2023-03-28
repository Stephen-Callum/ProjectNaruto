// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "PNAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTNARUTO_API UPNAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:

	static UPNAssetManager& Get();

	/** Starts initial load, gets called from InitializeObjectReferences */
	virtual void StartInitialLoading() override;
};
