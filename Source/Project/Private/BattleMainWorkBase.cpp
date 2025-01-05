#include "BattleMainWorkBase.h"

ABattleMainWorkBase::ABattleMainWorkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Step = E_BTL_STEP::E_BTL_STEP_NONE;
    this->m_PrevStep = E_BTL_STEP::E_BTL_STEP_NONE;
    this->m_NextStep = E_BTL_STEP::E_BTL_STEP_NONE;
    this->m_LocalStep = 0;
    this->m_ActionStackCnt = 0;
    this->m_EndType = E_BTL_END::E_BTL_END_NONE;
    this->m_BtlFlag = 0;
    this->m_BtlFlag2 = 0;
    this->m_DbgState = 0;
    this->m_DbgState2 = 0;
    this->m_AIFlag = 0;
    this->m_SaveTargetIndex = -1;
    this->m_SeqState = E_BTL_SEQ::E_BTL_SEQ_IDLE;
    this->m_StepCnt = 0;
    this->m_EncCnt = 0;
    this->m_EscCnt = 0;
    this->m_pBattleField = NULL;
    this->m_pMapCameraActor = NULL;
    this->m_RealTurn = 0;
    this->m_PressType = E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;
    this->m_BackupPressType = E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;
    this->m_Kantuu = 0;
    this->m_UpliftingPartyIndex = -1;
    this->m_IsContinueUpdate = false;
}

bool ABattleMainWorkBase::UpdateMoonAgeCount() {
    return false;
}

void ABattleMainWorkBase::UpdateMagatsuhiTalkFailedBlock() {
}

TArray<FBtlSummonData> ABattleMainWorkBase::ShuffleSummonData(TArray<FBtlSummonData>& summonData) {
    return TArray<FBtlSummonData>();
}

void ABattleMainWorkBase::SetUpliftingPartyIndex(int32 party_index) {
}

void ABattleMainWorkBase::SetUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) {
}

void ABattleMainWorkBase::SetTutorialDoneFlag(const E_BTL_TUTORIAL_TYPE Type) {
}

void ABattleMainWorkBase::SetRenzouEncountReader(FBtlDescData& DescData) {
}

void ABattleMainWorkBase::SetPressType(E_BTL_PRESS_TYPE pressType) {
}

void ABattleMainWorkBase::SetPressIcon(const FPressIcon& press_icon) {
}

void ABattleMainWorkBase::SetNextStep(E_BTL_STEP nextStep) {
}

void ABattleMainWorkBase::SetKuiUserList(int32 partyIndex, E_KUISHIBARI_LEVEL Level) {
}

void ABattleMainWorkBase::SetKantuu(int32 Value) {
}

void ABattleMainWorkBase::SetDebugSkillSelectIcon(E_SKILL_ICON icon, bool sw) {
}

void ABattleMainWorkBase::SetCurrentBGMID(int32 ID) {
}

void ABattleMainWorkBase::SetAddEnemyKilledPressIcon(const int32 EnemyKilledNum) {
}

void ABattleMainWorkBase::SetAchievements_WinRenzoku(TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SetAchievements_WeakCount(const int32& srcPartyIndex, const bool& isWeak, TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SetAchievements_UseMagatsuhiSkillCount(const int32& srcPartyIndex, const FSkillBaseData& useSkillData, TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SetAchievements_MissBlockRefAbsCount(const int32& dstPartyIndex, const E_BTL_REFLECT_RES_TYPE& resType, TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SetAchievements_Kill(const int32& srcPartyIndex, const int32& dstPartyIndex, const bool& IsDead, TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SetAchievements_Damage(const int32& srcPartyIndex, const int32& Damage, TArray<EAchievementFlag>& outAchievements) {
}

void ABattleMainWorkBase::SaveTsukuyomiHP() {
}

void ABattleMainWorkBase::ResetMoonAge() {
}


void ABattleMainWorkBase::MakeupTutorialData(const E_BTL_TUTORIAL_TYPE Type) {
}

void ABattleMainWorkBase::MakeUpEncountData() {
}

bool ABattleMainWorkBase::IsPressIcon() {
    return false;
}

bool ABattleMainWorkBase::IsMagatsuhiTalkFailedBlock() {
    return false;
}

bool ABattleMainWorkBase::IsBossRushChallengeMode() {
    return false;
}

void ABattleMainWorkBase::InitializeUniqueSkillEfficacy_forInfo() {
}

void ABattleMainWorkBase::IncRealTurn() {
}

int32 ABattleMainWorkBase::GetUpliftingPartyIndex() {
    return 0;
}

float ABattleMainWorkBase::GetRenzokuEncountResultBonus() {
    return 0.0f;
}

E_BTL_PRESS_TYPE ABattleMainWorkBase::GetPressType() {
    return E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;
}

FPressIcon ABattleMainWorkBase::GetPressIcon() {
    return FPressIcon{};
}

int32 ABattleMainWorkBase::GetOverwriteSkillInfoID(const int32 SkillId) {
    return 0;
}

int32 ABattleMainWorkBase::GetKantuu() {
    return 0;
}

FPressIcon ABattleMainWorkBase::GetInitialPressIcon() {
    return FPressIcon{};
}

FBtlGardenPointData ABattleMainWorkBase::GetGardenPointData() {
    return FBtlGardenPointData{};
}

int32 ABattleMainWorkBase::GetEscapeCnt() {
    return 0;
}

int32 ABattleMainWorkBase::GetCurrentBGMID() {
    return 0;
}

E_BTL_END ABattleMainWorkBase::GetBtlEnd() {
    return E_BTL_END::E_BTL_END_NONE;
}

bool ABattleMainWorkBase::EncountIsRoomBoss() {
    return false;
}

bool ABattleMainWorkBase::EncountIsNotEscape() {
    return false;
}

int32 ABattleMainWorkBase::EncountIsEvent() {
    return 0;
}

void ABattleMainWorkBase::DelPressIcon(FPressIcon& PressIcon) {
}

void ABattleMainWorkBase::DeleteKuiUserList(bool isPlayer) {
}

void ABattleMainWorkBase::DelBattleFlag2(E_BTL_STAT_2 Value) {
}

void ABattleMainWorkBase::DelBattleFlag(E_BTL_STAT Value) {
}

void ABattleMainWorkBase::DelBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) {
}

void ABattleMainWorkBase::DelBattleDebugFlag(E_BTL_STATE_DEBUG Value) {
}

void ABattleMainWorkBase::ClearUpliftingPartyIndex() {
}

void ABattleMainWorkBase::ClearUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) {
}

void ABattleMainWorkBase::ClearSavedTsukuyomiHP() {
}

void ABattleMainWorkBase::ClearBackupPressIconAdded() {
}

void ABattleMainWorkBase::ClearAllUniqueSkillEfficacy_forInfo(int32 partyIndex) {
}

void ABattleMainWorkBase::ClearAddEnemyKilledPressIcon() {
}

void ABattleMainWorkBase::ClearActionPreParam(bool is_counter) {
}

void ABattleMainWorkBase::CleanupTutorialDataAll() {
}

void ABattleMainWorkBase::CleanupTutorialData() {
}

bool ABattleMainWorkBase::CheckUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) {
    return false;
}

bool ABattleMainWorkBase::CheckTutorial(const E_BTL_TUTORIAL tutorial) {
    return false;
}

bool ABattleMainWorkBase::CheckTimeAttackBattle(FBtlDescData& DescData) {
    return false;
}

bool ABattleMainWorkBase::CheckThisBattleEntryNkm(const int32 partyIndex) {
    return false;
}

bool ABattleMainWorkBase::CheckRenzokuEncountMagatsuhiDevil(const int32& encountID) {
    return false;
}

int32 ABattleMainWorkBase::CheckRenzokuEncount(UDataTable* DataTable) {
    return 0;
}

void ABattleMainWorkBase::CheckMercyTalk(bool& OutIsMercyTalk, FTalkStartInfo& OutStartInfo) {
}

bool ABattleMainWorkBase::CheckKuiUserList(int32 partyIndex, E_KUISHIBARI_LEVEL Level) {
    return false;
}

bool ABattleMainWorkBase::CheckInochigoi() {
    return false;
}

void ABattleMainWorkBase::CheckEnemyAttackType() {
}

bool ABattleMainWorkBase::CheckBattleFlag2(E_BTL_STAT_2 Value) {
    return false;
}

bool ABattleMainWorkBase::CheckBattleFlag(E_BTL_STAT Value) {
    return false;
}

bool ABattleMainWorkBase::CheckBattleEndLeaderDead() {
    return false;
}

bool ABattleMainWorkBase::CheckBattleEndEnemyHPRate() {
    return false;
}

bool ABattleMainWorkBase::CheckBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) {
    return false;
}

bool ABattleMainWorkBase::CheckBattleDebugFlag(E_BTL_STATE_DEBUG Value) {
    return false;
}

bool ABattleMainWorkBase::CheckAddBossRushEventEncountID() {
    return false;
}






























































void ABattleMainWorkBase::BossRush_Reset() {
}

E_BTL_STEP ABattleMainWorkBase::BI_GetStep() {
    return E_BTL_STEP::E_BTL_STEP_NONE;
}

void ABattleMainWorkBase::BattleUpdate(float DeltaTime) {
}

void ABattleMainWorkBase::BattleSeqStart(FBtlDescData Desc) {
}

E_BTL_PRESS_TYPE ABattleMainWorkBase::AddPressIconTypeGodParam() {
    return E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;
}

void ABattleMainWorkBase::AddEscapeCnt() {
}

void ABattleMainWorkBase::AddBattleFlag2(E_BTL_STAT_2 Value) {
}

void ABattleMainWorkBase::AddBattleFlag(E_BTL_STAT Value) {
}

void ABattleMainWorkBase::AddBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) {
}

void ABattleMainWorkBase::AddBattleDebugFlag(E_BTL_STATE_DEBUG Value) {
}


