#include "BPL_ShopTableFunction.h"

UBPL_ShopTableFunction::UBPL_ShopTableFunction() {
}

bool UBPL_ShopTableFunction::IsExistItemInShop(int32 ItemId) {
    return false;
}

int32 UBPL_ShopTableFunction::GetShopMimanItemTableMax() {
    return 0;
}

FShopMimanItemTable UBPL_ShopTableFunction::GetShopMimanItemTable(int32 Index) {
    return FShopMimanItemTable{};
}

int32 UBPL_ShopTableFunction::GetShopBuyTableMax() {
    return 0;
}

FShopBuyTable UBPL_ShopTableFunction::GetShopBuyTable_BySortID(int32 InSortID) {
    return FShopBuyTable{};
}

FShopBuyTable UBPL_ShopTableFunction::GetShopBuyTable(int32 Index) {
    return FShopBuyTable{};
}


