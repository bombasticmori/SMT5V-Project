#include "BPL_FacilityShop.h"

UBPL_FacilityShop::UBPL_FacilityShop() {
}

void UBPL_FacilityShop::SetShopRelicEventFlag(bool sw) {
}

void UBPL_FacilityShop::SetShopNewItemFlag(int32 ItemId, bool sw) {
}

void UBPL_FacilityShop::SetShopMimanRewardFlag(int32 ID, bool sw) {
}

void UBPL_FacilityShop::SetShopFirstFlag(bool sw) {
}

int32 UBPL_FacilityShop::LotShopExitMessage(int32 Min, int32 Max) {
    return 0;
}

int32 UBPL_FacilityShop::LotShopEnterMessage(int32 Min, int32 Max) {
    return 0;
}

bool UBPL_FacilityShop::IsOpenShopMimanRewardMenu() {
    return false;
}

FShopSaveData UBPL_FacilityShop::GetShopSaveData() {
    return FShopSaveData{};
}

void UBPL_FacilityShop::ClearShopNewItemFlag() {
}

void UBPL_FacilityShop::ClearShopMimanRewardFlag() {
}

void UBPL_FacilityShop::ClearShopCommonFlag() {
}

bool UBPL_FacilityShop::CheckShopRelicEvent() {
    return false;
}

bool UBPL_FacilityShop::CheckShopNewItemFlag(int32 ItemId) {
    return false;
}

bool UBPL_FacilityShop::CheckShopMimanRewardFlag(int32 ID) {
    return false;
}

bool UBPL_FacilityShop::CheckShopFirstFlag() {
    return false;
}


