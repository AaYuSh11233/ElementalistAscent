#include "AnimalActor.h"
#include "PlayerHero.h"
#include "Kismet/GameplayStatics.h"

AAnimalActor::AAnimalActor()
{
    PrimaryActorTick.bCanEverTick = true;
    MaxHealth = 50.0f;
    CurrentHealth = MaxHealth;
}

void AAnimalActor::ReceiveHit(float Damage)
{
    CurrentHealth -= Damage;
    if (CurrentHealth <= 0)
    {
        if (APlayerHero* Player = Cast<APlayerHero>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
        {
            Player->Inventory->AddItem("Meat", 1);
            Player->GainXP(20);
        }
        Destroy();
    }
}