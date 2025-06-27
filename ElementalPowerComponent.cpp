#include "ElementalPowerComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

void UElementalPowerComponent::UnlockPower(EElementalPower Power)
{
    UnlockedPowers.Add(Power);
}

bool UElementalPowerComponent::HasPower(EElementalPower Power) const
{
    return UnlockedPowers.Contains(Power);
}

void UElementalPowerComponent::ActivatePower(EElementalPower Power)
{
    if (!UnlockedPowers.Contains(Power)) return;

    FVector Location = GetOwner()->GetActorLocation();
    FString DebugMsg = FString::Printf(TEXT("Activated Power: %d"), static_cast<int32>(Power));
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, DebugMsg);
}