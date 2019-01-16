// Copyright (c) While False Studios 2019. Released under the MIT license. See LICENSE for more details.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WhileFalsePhysicsStatics.generated.h"

UENUM()
enum class EPhysicalSoundContext : uint8
{
	Footstep,
	DamageImpact,
	Scrape,
	PhysicsImpact
};

/**
 * 
 */
UCLASS()
class WHILEFALSEPHYSICS_API UWhileFalsePhysicsStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
