#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Quantity;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ELEMENTALASCENT_API UInventoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    void AddItem(FString Name, int32 Quantity);
    TArray<FInventoryItem> GetItems() const;

private:
    TArray<FInventoryItem> Items;
};