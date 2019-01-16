// Copyright (c) While False Studios 2019. Released under the MIT license. See LICENSE for more details.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WhileFalsePhysicsStatics.h"
#include "PhysicalSoundImpl.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPhysicalSoundImpl : public UInterface
{
	GENERATED_BODY()
};

/**
 * Physical material that provides an implementation of a sound engine.
 */
class WHILEFALSEPHYSICS_API IPhysicalSoundImpl
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/**
	Plays a physics sound. Audio backend independant.
	@param WorldContextObject World context
	@param SoundContext The type of sound that should play
	@param Hit The hit that triggered this sound.
	*/
	UFUNCTION()
	virtual void PlaySound(UObject* WorldContextObject, EPhysicalSoundContext SoundContext, const FHitResult& Hit) = 0;
};
