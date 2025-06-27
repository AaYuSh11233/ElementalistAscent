#include "InventoryComponent.h"

void UInventoryComponent::AddItem(FString Name, int32 Quantity)
{
    for (FInventoryItem& Item : Items)
    {
        if (Item.Name == Name)
        {
            Item.Quantity += Quantity;
            return;
        }
    }

    Items.Add({ Name, Quantity });
}

TArray<FInventoryItem> UInventoryComponent::GetItems() const
{
    return Items;
}