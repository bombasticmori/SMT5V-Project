#include "LevelUpManager.h"
#include "UIStatusCtrlDataObjResult.h"

ULevelUpManager::ULevelUpManager() {
    this->m_CtrlData = CreateDefaultSubobject<UUIStatusCtrlDataObjResult>(TEXT("UICtrlData"));
}

void ULevelUpManager::UpdateSlotLookForSkillEvent() {
}

bool ULevelUpManager::TrySkillEventCreate() {
    return false;
}

bool ULevelUpManager::TryLvUpEventCreate_ForUnite(const int32 NkmIndex) {
    return false;
}

bool ULevelUpManager::TryGiftEventCreateAndGetGiftItem() {
    return false;
}

bool ULevelUpManager::TryExSkillEventCreate(const int32 addRank) {
    return false;
}

void ULevelUpManager::SkillDataOverride() {
}

void ULevelUpManager::SetTalkerName(UScriptMessageAsset* ScriptMessageAsset, const FName& MessageLabel, int32 DevilID) {
}

void ULevelUpManager::ReturnSkillDataToEventStart() {
}

void ULevelUpManager::PlayerPointUp(FAbilData& addParam) {
}

bool ULevelUpManager::LearnNextSkill(int32 destIndex) {
    return false;
}

bool ULevelUpManager::IsValidRelativeData(const int32 relativePosition) const {
    return false;
}

bool ULevelUpManager::IsSoulGiftAlreadyGot() const {
    return false;
}

bool ULevelUpManager::IsHeroEvent() {
    return false;
}

bool ULevelUpManager::IsGiftDevilSoul() const {
    return false;
}

bool ULevelUpManager::IsExistNextCharacter() {
    return false;
}

bool ULevelUpManager::IsExistEvent() {
    return false;
}

bool ULevelUpManager::IsEnableGardenSkillExEvent(int32 NkmIndex, int32 addRank) {
    return false;
}

void ULevelUpManager::InitShowUpParam() {
}

bool ULevelUpManager::InitGardenResult(const int32 NkmIndex, const FUIStatusDataUpParam& in_UpParam, const bool in_ExSkillEvent) {
    return false;
}

bool ULevelUpManager::GrowUpAndCreateEventDataForCamp(const int32 NkmIndex, const int32 upLv) {
    return false;
}

bool ULevelUpManager::GrowUpAndCreateEventData(const FResultData& ResultData) {
    return false;
}

bool ULevelUpManager::GotoNextCharacter() {
    return false;
}

int32 ULevelUpManager::GetUpLv() const {
    return 0;
}

int32 ULevelUpManager::GetSkillSlotIndex(int32 totalIndex) {
    return 0;
}

int32 ULevelUpManager::GetSkillID(int32 Index) const {
    return 0;
}

int32 ULevelUpManager::GetRemainingPoint() {
    return 0;
}

int32 ULevelUpManager::GetLearningSkillID() const {
    return 0;
}

int32 ULevelUpManager::GetLearnableSkillNum() {
    return 0;
}

int32 ULevelUpManager::GetHeroBonusPointMargin() {
    return 0;
}

int32 ULevelUpManager::GetGiftID() const {
    return 0;
}

int32 ULevelUpManager::GetExSkillID() const {
    return 0;
}

int32 ULevelUpManager::GetEmptySlotIndex() {
    return 0;
}

int32 ULevelUpManager::GetDevilIDRelative(const int32 relativePosition) const {
    return 0;
}

int32 ULevelUpManager::GetDevilID() {
    return 0;
}

UUIStatusCtrlDataObjResult* ULevelUpManager::GetDataObj() {
    return NULL;
}


