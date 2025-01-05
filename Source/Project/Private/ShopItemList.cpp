#include "ShopItemList.h"

UShopItemList::UShopItemList() {
}

void UShopItemList::Sort(E_SHOP_ITEM_SORT_TYPE Type, bool bAscending) {
}

void UShopItemList::SetNewItemFlag(int32 Index, bool bNew) {
}

void UShopItemList::Reset() {
}

void UShopItemList::RemoveAt(int32 Index) {
}

void UShopItemList::Remove(const FShopItemData& Data) {
}

bool UShopItemList::IsExistNewIcon() {
    return false;
}

TArray<FShopItemData> UShopItemList::GetList() const {
    return TArray<FShopItemData>();
}

int32 UShopItemList::GetDataIndex(const FShopItemData& Data) {
    return 0;
}

FShopItemData UShopItemList::GetData(int32 Index) const {
    return FShopItemData{};
}

void UShopItemList::Empty() {
}

void UShopItemList::Add(const FShopItemData& Data) {
}


