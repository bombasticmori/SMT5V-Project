#include "BPL_ItemData.h"

UBPL_ItemData::UBPL_ItemData() {
}

int32 UBPL_ItemData::UtsusemiItemIDToDevilID(int32 ItemId) {
    return 0;
}

int32 UBPL_ItemData::UtsusemiDevilIDToItemID(int32 DevilID) {
    return 0;
}

bool UBPL_ItemData::UseItemDataIsRecoveryType(const FUseItemData& Data) {
    return false;
}

bool UBPL_ItemData::UseItemDataIsRecome(const FUseItemData& Data) {
    return false;
}

uint8 UBPL_ItemData::UseItemDataGetValue_UseScene(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_SortId(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_SkillNo(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_SellingPrice(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_RecBst(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_NkmUseType(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_NameSortId(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_MpRecovery(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_MpRcvPercent(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_ItemID(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_ItemIcon(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_IsUseInfinite(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_IsNotRelease(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_IsNotBuy(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_HpRecovery(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_HpRcvPercent(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_HaveMax(const FUseItemData& Data) {
    return 0;
}

int32 UBPL_ItemData::UseItemDataGetValue_GetExp(const FUseItemData& Data) {
    return 0;
}

E_ITEM_KIND UBPL_ItemData::UseItemDataGetValue_EtcKind(const FUseItemData& Data) {
    return E_ITEM_KIND::E_ITEM_KIND_USE;
}

int32 UBPL_ItemData::UseItemDataGetValue_BuyingPrice(const FUseItemData& Data) {
    return 0;
}

uint8 UBPL_ItemData::UseItemDataGetValue_All(const FUseItemData& Data) {
    return 0;
}

bool UBPL_ItemData::SetUseInUtsusemiFlag(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::SetNewIconSawFlag(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::ResetUseInUtsusemiFlag(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::ResetNewIconSawFlag(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::ItemIsUseTargetPlayerFromData(const FUseItemData& Data) {
    return false;
}

bool UBPL_ItemData::ItemIsUseTargetPlayer(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsUseTargetNkmFromData(const FUseItemData& Data) {
    return false;
}

bool UBPL_ItemData::ItemIsUseTargetNkm(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsUseCamp(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsUseBattle(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsHaveAnyItems_Battle() {
    return false;
}

bool UBPL_ItemData::ItemIsHave(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsGotten(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIsFullHave(int32 ID) {
    return false;
}

bool UBPL_ItemData::ItemIDIsValid(int32 ID) {
    return false;
}

int32 UBPL_ItemData::ItemGetSellingPrice(int32 ID) {
    return 0;
}

int32 UBPL_ItemData::ItemGetPriority(int32 ID) {
    return 0;
}

int32 UBPL_ItemData::ItemGetNum(int32 ID) {
    return 0;
}

FText UBPL_ItemData::ItemGetName(int32 ID) {
    return FText::GetEmpty();
}

int32 UBPL_ItemData::ItemGetMaxNum(int32 ID) {
    return 0;
}

E_ITEM_KIND UBPL_ItemData::ItemGetKind(int32 ID) {
    return E_ITEM_KIND::E_ITEM_KIND_USE;
}

FText UBPL_ItemData::ItemGetHelpMess(int32 ID) {
    return FText::GetEmpty();
}

TArray<int32> UBPL_ItemData::ItemGetHaveItems_Battle(E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE sortType) {
    return TArray<int32>();
}

TArray<int32> UBPL_ItemData::ItemGetHaveItems() {
    return TArray<int32>();
}

FText UBPL_ItemData::ItemGetEffectName(int32 ID) {
    return FText::GetEmpty();
}

int32 UBPL_ItemData::ItemGetBuyingPrice(int32 ID) {
    return 0;
}

void UBPL_ItemData::ItemGet(int32 ID, int32 Num) {
}

void UBPL_ItemData::ItemErase_AllRelic() {
}

void UBPL_ItemData::ItemErase(int32 ID, int32 Num) {
}

void UBPL_ItemData::ItemDataClearOne(int32 ID) {
}

void UBPL_ItemData::ItemDataClearAllByRenewal() {
}

void UBPL_ItemData::ItemDataClearAllByReincarnation() {
}

void UBPL_ItemData::ItemDataClearAll() {
}

FUtsusemiItemData UBPL_ItemData::GetUtsusemiItemData(int32 ID) {
    return FUtsusemiItemData{};
}

FUseItemData UBPL_ItemData::GetUseItemData(int32 ID) {
    return FUseItemData{};
}

FSkillGetItemData UBPL_ItemData::GetSkillGetItemData(int32 ID) {
    return FSkillGetItemData{};
}

FRelicItemData UBPL_ItemData::GetRelicItemData(int32 ID) {
    return FRelicItemData{};
}

int32 UBPL_ItemData::GetNewIconPriority(int32 InItemId) {
    return 0;
}

int32 UBPL_ItemData::GetItemIconIdByItemId(int32 InItemId) {
    return 0;
}

FImportantItemData UBPL_ItemData::GetImportantItemData(int32 ID) {
    return FImportantItemData{};
}

int32 UBPL_ItemData::GetHaveItemNum_Reifu_Amulet() {
    return 0;
}

int32 UBPL_ItemData::GetHaveItemNum_Gofu_Amulet() {
    return 0;
}

int32 UBPL_ItemData::GetAllRelicSellingPrice() {
    return 0;
}

bool UBPL_ItemData::DidUseItemInUtsusemi(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::CanNewIconBeDisplayed(int32 InItemId) {
    return false;
}

bool UBPL_ItemData::CanbeEntryMagatsuhiSkillByPlayer(int32 InIndex) {
    return false;
}

bool UBPL_ItemData::CanbeEntryMagatsuhiSkillByGroupId(int32 InGroupId, int32 InIndex) {
    return false;
}


