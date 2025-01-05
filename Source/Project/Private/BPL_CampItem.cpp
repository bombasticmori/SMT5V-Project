#include "BPL_CampItem.h"

UBPL_CampItem::UBPL_CampItem() {
}

bool UBPL_CampItem::IsTraportLocked() {
    return false;
}

bool UBPL_CampItem::HaveTraportItem() {
    return false;
}

FCampItemResult UBPL_CampItem::GetItemUseCountPlayerDevil(int32 ItemId, int32 InNkmIndex) {
    return FCampItemResult{};
}

FCampItemResult UBPL_CampItem::GetItemUseCountPlayer(int32 ItemId) {
    return FCampItemResult{};
}

bool UBPL_CampItem::CanBeUseItemByScene(int32 InItemId) {
    return false;
}

bool UBPL_CampItem::CampItem_UseAll(int32 ItemId, bool isCheck, int32 Param1) {
    return false;
}

FCampItemResult UBPL_CampItem::CampItem_Use(int32 ItemId, int32 tarNkmIndex, E_PLAYER_TYPE plyType, bool isAll, bool isCheck, int32 Param1) {
    return FCampItemResult{};
}

bool UBPL_CampItem::CampItem_IsUse(int32 ItemId) {
    return false;
}

bool UBPL_CampItem::CampItem_IsPartySel(int32 ItemId) {
    return false;
}

bool UBPL_CampItem::CampItem_IsCureItem(int32 ItemId) {
    return false;
}

bool UBPL_CampItem::CampItem_IsAllEffect(int32 ItemId) {
    return false;
}

TArray<FCampCommonCharaData> UBPL_CampItem::CampItem_GetUsedCharData(int32 ItemId) {
    return TArray<FCampCommonCharaData>();
}

int32 UBPL_CampItem::CampItem_GetTabKindMax() {
    return 0;
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveUtsusemiItemId() {
    return TArray<int32>();
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveUseItemId() {
    return TArray<int32>();
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveSkillGetItemId() {
    return TArray<int32>();
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveRelicItemId() {
    return TArray<int32>();
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveNormalItemId() {
    return TArray<int32>();
}

TArray<int32> UBPL_CampItem::CampItem_GetHaveImportantItemId() {
    return TArray<int32>();
}


