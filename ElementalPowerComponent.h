#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ElementalTypes.h"
#include "ElementalPowerComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ELEMENTALASCENT_API UElementalPowerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    void UnlockPower(EElementalPower Power);
    bool HasPower(EElementalPower Power) const;
    void ActivatePower(EElementalPower Power);

private:
    TSet<EElementalPower> UnlockedPowers;
};