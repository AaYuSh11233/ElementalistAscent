#include "SwordComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

USwordComponent::USwordComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void USwordComponent::Swing()
{
    FVector Start = GetOwner()->GetActorLocation();
    FVector Forward = GetOwner()->GetActorForwardVector();
    FVector End = Start + Forward * 150.0f;

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Pawn, Params))
    {
        if (AActor* HitActor = Hit.GetActor())
        {
            UGameplayStatics::ApplyDamage(HitActor, 20.0f, nullptr, GetOwner(), nullptr);
        }
    }

    DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1.0f, 0, 2.0f);
}