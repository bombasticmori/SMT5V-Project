#include "BattleCharaActionBase.h"

ABattleCharaActionBase::ABattleCharaActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ActorIndex = 0;
    this->m_AddMPCost = 0;
    this->m_MissByBadStatus = E_BAD_STATUS::E_BAD_STATUS_NONE;
    this->m_SelectList.AddDefaulted(110);
    this->m_NewPressType = E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;
    this->m_NewUpliftingTypeArray.AddDefaulted(2);
    this->m_CounterIndex = -1;
    this->m_PlayerDeadNum = 0;
    this->m_EnemyDeadNum = 0;
    this->m_IsContinueUpdate = false;
}

TArray<int32> ABattleCharaActionBase::UpdateDelElectrification() {
    return TArray<int32>();
}

bool ABattleCharaActionBase::UniqueSkill_CheckChargeDead(const int32& partyIndex) {
    return false;
}

void ABattleCharaActionBase::SupportTsukuyomiSummon() {
}

void ABattleCharaActionBase::SetWeakAutoBattleCommandAndTargetSelect() {
}

void ABattleCharaActionBase::SetUpliftingOffFlag(const int32 srcPartyIndex, const int32 dstPartyIndex) {
}

void ABattleCharaActionBase::SetSkillFunc() {
}

void ABattleCharaActionBase::SetRenzokuSkillCommand(int32 partyIndex) {
}

void ABattleCharaActionBase::SetReadyFunc() {
}

void ABattleCharaActionBase::SetNewUpliftingType(int32 partyIndex, E_BTL_UPLIFTING_TYPE Type) {
}

void ABattleCharaActionBase::SetNewPress(E_BTL_PRESS_TYPE press_type) {
}

void ABattleCharaActionBase::SetHPRefList() {
}

bool ABattleCharaActionBase::SetFlagCharmOrConfuse(int32 partyIndex) {
    return false;
}

void ABattleCharaActionBase::SetCounterTargetList() {
}

bool ABattleCharaActionBase::SetCounterCommand(int32 partyIndex) {
    return false;
}

void ABattleCharaActionBase::SetAutoBattleSkillCommandAndTargetSelect(int32 SkillId) {
}

void ABattleCharaActionBase::SetAutoBattleCommandAndTargetSelect() {
}

void ABattleCharaActionBase::SeqSkillFunc() {
}

void ABattleCharaActionBase::SeqReadytFunc() {
}

void ABattleCharaActionBase::SelectPressAndGauge(E_BTL_REFLECT_RES_TYPE resType, E_BTL_DAMAGE_HIT_TYPE DamageType, int32 srcIndex, int32 dstIndex) {
}

void ABattleCharaActionBase::RemoveCounterIndex() {
}

TArray<int32> ABattleCharaActionBase::MakeSummonAfterDevilList(TArray<int32> nowList, TArray<int32> summonList, TArray<int32> returnList) {
    return TArray<int32>();
}

void ABattleCharaActionBase::MakeSkillReflectList() {
}

bool ABattleCharaActionBase::IsEscapeSkill() {
    return false;
}

TArray<int32> ABattleCharaActionBase::GetReflectCharaList() {
    return TArray<int32>();
}

int32 ABattleCharaActionBase::GetHPRefListHP(int32 partyIndex) {
    return 0;
}

int32 ABattleCharaActionBase::GetCounterIndex() {
    return 0;
}

void ABattleCharaActionBase::EndSelectorLabelCtrl() {
}

void ABattleCharaActionBase::DelStatus(E_BTL_ACT_STAT InValue) {
}

void ABattleCharaActionBase::ClearCounter(const int32& partyIndex) {
}

bool ABattleCharaActionBase::CheckStatus(E_BTL_ACT_STAT InValue) {
    return false;
}

bool ABattleCharaActionBase::CheckNoRenzokuEncountByTalkEnd(const FTalkResultInfo& TalkResultInfo) {
    return false;
}

bool ABattleCharaActionBase::CheckHPRefListDead(int32 partyIndex) {
    return false;
}


void ABattleCharaActionBase::BeginSelectorLabelCtrl(int32 BattleTempo) {
}

void ABattleCharaActionBase::ApplySummonAfterPos(TMap<int32, FTransform> afterList, TArray<int32> summonList, TArray<int32> returnList) {
}

void ABattleCharaActionBase::AddStatus(E_BTL_ACT_STAT InValue) {
}

void ABattleCharaActionBase::AddRenzokuSkillCount(const int32& srcIndex) {
}

void ABattleCharaActionBase::AddHPRefList(int32 partyIndex, int32 Value) {
}


