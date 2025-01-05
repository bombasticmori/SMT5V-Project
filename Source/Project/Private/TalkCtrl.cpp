#include "TalkCtrl.h"

ATalkCtrl::ATalkCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_DevilID = 0;
    this->m_DevilLevel = 0;
    this->m_DevilGroup = 0;
    this->m_DevilAttr1 = 0;
    this->m_DevilCharacterNameIndex = 0;
    this->m_MoonTemperData = E_TALK_MOON_TEMPER_DATA::NONE;
    this->m_MoonTemperStatus = E_TALK_MOON_TEMPER_STATUS::INVALID;
    this->m_QuestionPart = E_TALK_QUESTION_PART::QUESTION_PART_NONE;
    this->m_QuestionId = 0;
    this->m_JudgeParam = E_TALK_JUDGE_PARAM::JUDGE_NONE;
    this->m_ReactionDebugIndex = -1;
    this->m_WantKind = E_TALK_WANT_KIND::WANT_NONE;
    this->m_WantKindPrev = E_TALK_WANT_KIND::WANT_NONE;
    this->m_WantRepeatCount = 0;
    this->m_WantYesCount = 0;
    this->m_WantOtherCount = 0;
    this->m_WantNotHaveCount = 0;
    this->m_WantAc = E_TALK_WANT_AC::WANT_AC_INVALID;
    this->m_WantReac = E_TALK_WANT_REAC::WANT_REAC_INVALID;
    this->m_MoneyPaid = false;
    this->m_WantItemId = 0;
    this->m_WantItemNum = 0;
    this->m_WantItemRank = 0;
    this->m_WantMoney = 0;
    this->m_WantHP = 0;
    this->m_WantMP = 0;
    this->m_WantHPMPRank = 0;
    this->m_WantReduceItemId = 0;
    this->m_WantReduceItemNum = 0;
    this->m_WantReduceMoney = 0;
    this->m_WantReduceHP = 0;
    this->m_WantReduceMP = 0;
    this->m_WantReduceHPMPRank = 0;
    this->m_bWantReduce = false;
    this->m_WantReduceUniqueDevilId = 0;
    this->m_FundCount = 0;
    this->m_FundMoney = 0;
    this->m_FundTotalMoney = 0;
    this->m_UtsusemiItemId = 0;
    this->m_UtsusemiHide = false;
    this->m_MercyRepeatCount = 0;
    this->m_NkmUnconditionalMode = false;
    this->m_MythId = 0;
    this->m_MythFriendId = 0;
    this->m_MythEnemyId = 0;
    this->m_MythNextMessageIndex = 0;
    this->m_MythItemId = 0;
    this->m_bQuizMode = false;
    this->m_QuizDevilId = 0;
    this->m_IsQuizSuccess = false;
    this->m_pTalkToneTable = NULL;
    this->m_pBattleMain = NULL;
}

void ATalkCtrl::UpdateStartInfo(UObject* pBattleMain) {
}

void ATalkCtrl::SubWant() {
}

void ATalkCtrl::SetWantAction(E_TALK_WANT_AC ac) {
}

void ATalkCtrl::SetTalkResultTargetStatus(E_TALK_RESULT_TARGET_STATUS targetStatus) {
}

void ATalkCtrl::SetTalkResultEndType(E_TALK_END_TYPE endType) {
}

void ATalkCtrl::SetStockWaitFlag(bool flag) {
}

void ATalkCtrl::SetSafetyHappened(E_TALK_SAFETY_TYPE safetyType) {
}

void ATalkCtrl::SetQuizSuccess(bool IsSuccess) {
}

void ATalkCtrl::SetMercyRepeatCount(int32 mercyRepeatCount) {
}

void ATalkCtrl::SetLevelWaitFlag(bool flag) {
}

void ATalkCtrl::SetCharaNameByLabel(UScriptMessageAsset* ScriptMessageAsset, FName MessageLabel) {
}

void ATalkCtrl::SetCharaNameByIdAndDevil(UScriptMessageAsset* ScriptMessageAsset, int32 MessageID, int32 DevilID) {
}

void ATalkCtrl::SetCharaNameByID(UScriptMessageAsset* ScriptMessageAsset, int32 MessageID) {
}

void ATalkCtrl::SetApologyWaitFlag(bool flag) {
}

void ATalkCtrl::SafetyRepeatWant() {
}

void ATalkCtrl::ReturnToAPart() {
}

void ATalkCtrl::ResetWaitFlag() {
}

void ATalkCtrl::PlayDevilVoice(AActor* Talker, EDevilTalkVoice DevilTalkVoice, FName Socket, bool bDontAttachToTalker) {
}

void ATalkCtrl::MythSetInfo(int32 mythId) {
}

void ATalkCtrl::MythSetHappenedFlag(int32 mythId) {
}

FTalkMythProcess ATalkCtrl::MythGetProcessData(int32 MessageID) const {
    return FTalkMythProcess{};
}

int32 ATalkCtrl::MythGetProcessCount() const {
    return 0;
}

int32 ATalkCtrl::MythFindMatch() {
    return 0;
}

void ATalkCtrl::MakeUpTalkToneTable_Object(UObject* pObject) {
}

void ATalkCtrl::MakeUpTalkToneTable(UMMIAsset* pAsset) {
}

void ATalkCtrl::MakeUpMythProcessTable(UObject* pObject) {
}

bool ATalkCtrl::LotWantReduceUniqueSkill() {
    return false;
}

E_TALK_WANT_REAC ATalkCtrl::LotWantReaction() {
    return E_TALK_WANT_REAC::WANT_REAC_INVALID;
}

E_TALK_WANT_KIND ATalkCtrl::LotWantKind() {
    return E_TALK_WANT_KIND::WANT_NONE;
}

bool ATalkCtrl::LotSafetyProc() {
    return false;
}

void ATalkCtrl::LotQuiz() {
}

void ATalkCtrl::LotQuestionReaction(int32 choiceIndex) {
}

int32 ATalkCtrl::LotQuestionGiftMoney() {
    return 0;
}

void ATalkCtrl::LotQuestionGiftItem(int32& outItemID, int32& outItemNum) {
}

void ATalkCtrl::LotQuestionB() {
}

void ATalkCtrl::LotQuestionA() {
}

bool ATalkCtrl::LotNkmUnconditionalProc() {
    return false;
}

bool ATalkCtrl::LotMercyRepeat(int32 mercyRepeatCount) {
    return false;
}

E_TALK_HERO_BST_TYPE ATalkCtrl::LotHeroBadStatus() {
    return E_TALK_HERO_BST_TYPE::E_NONE;
}

bool ATalkCtrl::LotFriendTalkHeal() {
    return false;
}

void ATalkCtrl::LotFriendTalkGift(int32& outItemID, int32& outMoney) {
}

void ATalkCtrl::LotBegLifeIncenseItem(int32& outItemID, int32& outItemNum) {
}

bool ATalkCtrl::LotApologyWaitFlag() {
    return false;
}

bool ATalkCtrl::IsStockWaitFlag() {
    return false;
}

bool ATalkCtrl::IsScoutSuccessAchieved() {
    return false;
}

bool ATalkCtrl::IsQuestionNoChoice() {
    return false;
}

bool ATalkCtrl::IsMoneyPaidTotalAchieved() {
    return false;
}

bool ATalkCtrl::IsLevelWaitFlag() {
    return false;
}

bool ATalkCtrl::IsEasyMode() {
    return false;
}

bool ATalkCtrl::IsApologyWaitFlag() {
    return false;
}

bool ATalkCtrl::HaveGodParam(ETalkGodParam godParam) {
    return false;
}

int32 ATalkCtrl::GetWantReduceUniqueDevil() {
    return 0;
}

int32 ATalkCtrl::GetTalkWantMoneyTable(int32 Level) {
    return 0;
}

TArray<FText> ATalkCtrl::GetTalkSelectLineText(FText Text) {
    return TArray<FText>();
}

int32 ATalkCtrl::GetTalkSelectLineNum(FText Text) {
    return 0;
}

int32 ATalkCtrl::GetTalkScoutTableMax() {
    return 0;
}

bool ATalkCtrl::GetTalkScoutTable(int32 talkId, FTalkScoutTable& Table) {
    return false;
}

FTalkResultInfo ATalkCtrl::GetTalkResult() {
    return FTalkResultInfo{};
}

E_TALK_NG_TYPE ATalkCtrl::GetTalkNGType(bool MagatsukaDiscovery) {
    return E_TALK_NG_TYPE::E_NONE;
}

int32 ATalkCtrl::GetSafetyProcUniqueDevil() {
    return 0;
}

E_TALK_SAFETY_TYPE ATalkCtrl::GetSafetyProcType() {
    return E_TALK_SAFETY_TYPE::E_NONE;
}

TArray<int32> ATalkCtrl::GetQuizChoices() {
    return TArray<int32>();
}

FTalkMoonTemperTable ATalkCtrl::GetMoonTemperData() {
    return FTalkMoonTemperTable{};
}

int32 ATalkCtrl::GetFundAngryRate() {
    return 0;
}

void ATalkCtrl::FriendTalkHealProc() {
}

void ATalkCtrl::EntryDevil(int32 DevilID) {
}

void ATalkCtrl::DestroyTalkToneTable() {
}

void ATalkCtrl::ChooseReactionByJudgeParam(E_TALK_JUDGE_PARAM judgeParam) {
}

bool ATalkCtrl::CheckWantItem() {
    return false;
}

bool ATalkCtrl::CheckTutorial() {
    return false;
}

bool ATalkCtrl::CheckStockEnough() {
    return false;
}

bool ATalkCtrl::CheckNotHaveDevil() {
    return false;
}

bool ATalkCtrl::CheckNotEscapeBattle() {
    return false;
}

bool ATalkCtrl::CheckLevelEnough() {
    return false;
}

bool ATalkCtrl::CheckHeroUplifting() {
    return false;
}

bool ATalkCtrl::CheckHaveWant() {
    return false;
}

E_TALK_FRIEND_TALK ATalkCtrl::CheckFriendTalk() {
    return E_TALK_FRIEND_TALK::NONE;
}

void ATalkCtrl::CalcWantMP() {
}

void ATalkCtrl::CalcWantMoney() {
}

void ATalkCtrl::CalcWantMaseki() {
}

void ATalkCtrl::CalcWantItem() {
}

void ATalkCtrl::CalcWantHP() {
}

void ATalkCtrl::CalcUniqueSkillDevilTransform(UDataTable* DataTable, int32 DevilID, FVector& OutLocation, FVector& OutRotation) {
}

void ATalkCtrl::CalcQuestionJudgeParam() {
}

void ATalkCtrl::CalcMercyMoney(int32 mercyRepeatCount, int32& outMoney, bool& outIsAll) {
}

void ATalkCtrl::CalcFundMoney() {
}

bool ATalkCtrl::CalcFundAngry() {
    return false;
}

void ATalkCtrl::AddScoutSuccessCount() {
}

void ATalkCtrl::AddMoneyPaidTotal(int32 money) {
}

void ATalkCtrl::AddFundCount() {
}


