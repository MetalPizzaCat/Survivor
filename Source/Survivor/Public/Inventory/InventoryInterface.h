// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Survivor/Public/Inventory/ItemData.h"
#include "InventoryInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SURVIVOR_API IInventoryInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void OwnerNotify_ItemAdded(FItemInfo info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void OwnerNotify_ItemRemoved(FItemInfo info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void OwnerNotify_ItemDropped(FItemInfo info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AddItem(FItemInfo info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void RemoveItem(FItemInfo info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DropItem(FItemInfo info);
};
