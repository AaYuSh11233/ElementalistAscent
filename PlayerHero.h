#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ElementalTypes.h"
#include "PlayerHero.generated.h"

UCLASS()
class ELEMENTALASCENT_API APlayerHero : public ACharacter
{
    GENERATED_BODY()

public:
    APlayerHero();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void MoveForward(float Value);
    void MoveRight(float Value);
    void TurnAtRate(float Rate);
    void LookUpAtRate(float Rate);
    void Attack();
    void GainXP(int32 Amount);
    void LevelUp();
    void UseElementalPower(EElementalPower Power);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UInventoryComponent* Inventory;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UElementalPowerComponent* ElementalPowers;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class USwordComponent* Sword;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentXP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentLevel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 XPToNextLevel;
};