#pragma once

#include "ElementalTypes.generated.h"

UENUM(BlueprintType)
enum class EElementalPower : uint8
{
    None       UMETA(DisplayName = "None"),
    Earth      UMETA(DisplayName = "Earth"),
    Ice        UMETA(DisplayName = "Ice"),
    Fire       UMETA(DisplayName = "Fire"),
    Wind       UMETA(DisplayName = "Wind"),
    Shadow     UMETA(DisplayName = "Shadow")
};