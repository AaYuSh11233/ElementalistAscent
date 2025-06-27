#include "PlayerHero.h"
#include "InventoryComponent.h"
#include "ElementalPowerComponent.h"
#include "SwordComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"

APlayerHero::APlayerHero()
{
    PrimaryActorTick.bCanEverTick = true;

    Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    ElementalPowers = CreateDefaultSubobject<UElementalPowerComponent>(TEXT("ElementalPowers"));
    Sword = CreateDefaultSubobject<USwordComponent>(TEXT("Sword"));

    CurrentLevel = 1;
    CurrentXP = 0;
    XPToNextLevel = 100;
}

void APlayerHero::BeginPlay()
{
    Super::BeginPlay();
}

void APlayerHero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APlayerHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    check(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &APlayerHero::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &APlayerHero::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &APlayerHero::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &APlayerHero::AddControllerPitchInput);

    PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayerHero::Attack);
}

void APlayerHero::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
        AddMovementInput(GetActorForwardVector(), Value);
}

void APlayerHero::MoveRight(float Value)
{
    if (Controller && Value != 0.0f)
        AddMovementInput(GetActorRightVector(), Value);
}

void APlayerHero::Attack()
{
    if (Sword) Sword->Swing();
}

void APlayerHero::GainXP(int32 Amount)
{
    CurrentXP += Amount;
    if (CurrentXP >= XPToNextLevel)
    {
        CurrentXP -= XPToNextLevel;
        LevelUp();
    }
}

void APlayerHero::LevelUp()
{
    CurrentLevel++;
    XPToNextLevel += CurrentLevel * 100;
}

void APlayerHero::UseElementalPower(EElementalPower Power)
{
    if (ElementalPowers && ElementalPowers->HasPower(Power))
    {
        ElementalPowers->ActivatePower(Power);
    }
}