// Copyright (c) While False Studios 2019. Released under the MIT license. See LICENSE for more details.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

class APawn;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 Allows for generic interaction between pawns and actors in the game world.
 This could represent behaviour such as pushing a button, turning a wheel etc.
 Actors implementing this interface can receive events for when pawns perform interaction queries on the object.
 */
class WHILEFALSECORE_API IInteractable
{
	GENERATED_BODY()

public:

	/**
	Determines whether the specified pawn is allowed to interact with this object.
	@param User The pawn that wants to interact with this object.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	bool CanInteract(APawn* User);

	/**
	Event triggered when a pawn begins interacting with this object.
	@param User The pawn that began this interaction.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void BeginPerformInteraction(APawn* User);

	/**
	Event triggered when a pawn stops interacting with this object.
	@param User The pawn that has just stopped interacting.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void EndPerformInteraction(APawn* User);

	/**
	Event triggered when a pawn 'hovers on' or begins expressing interest in interacting with this object.
	@param User The pawn that may want to interact with this object.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void BeginInteractHover(APawn* User);

	/**
	Event triggered when a pawns stops expressing interest in interacting with this object.
	@param User The pawn that no longer wishes to interact with this object.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void EndInteractHover(APawn* User);
};
