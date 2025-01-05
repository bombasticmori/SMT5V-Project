#include "BattlePartySystemComponentBase.h"

UBattlePartySystemComponentBase::UBattlePartySystemComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NowActorPartyIndex = -1;
    this->m_NowActorPartyIndexCopy = -1;
    this->m_NowActorID = -1;
    this->m_OrderIndex = -1;
    this->m_GlobalActNum = 0;
    this->m_SaveHP = 0;
    this->m_GodSkillUpAidType = E_BTL_CNT::E_BTL_CNT_INVALID;
    this->m_GodSkillDownAidType = E_BTL_CNT::E_BTL_CNT_INVALID;
    this->m_TalkEntryDevilID = -1;
    this->const_PartyMax = 110;
    this->const_PlayerStart = 0;
    this->const_PlayerNum = 5;
    this->const_PlayerLoopMax = 4;
    this->const_EnemyStart = 5;
    this->const_EnemyNum = 49;
    this->const_EnemyLoopMax = 53;
    this->const_PartnerStart = 54;
    this->const_PartnerNum = 6;
    this->const_PartnerLoopMax = 59;
    this->const_StockStart = 70;
    this->const_StockNum = 40;
    this->const_StockLoopMax = 109;
    this->const_CycleNum = 4;
}

void UBattlePartySystemComponentBase::UpdateUseSkillArray() {
}

void UBattlePartySystemComponentBase::UpdateUnitAveLocation() {
}

void UBattlePartySystemComponentBase::UpdateSlipCycle() {
}

void UBattlePartySystemComponentBase::UpdateOrder() {
}

void UBattlePartySystemComponentBase::UpdateIsInFieldList(E_BTL_SIDE side) {
}

void UBattlePartySystemComponentBase::UpdateChkENTargetAllArray() {
}

bool UBattlePartySystemComponentBase::UpdateBossShareOpenAishou() {
    return false;
}

bool UBattlePartySystemComponentBase::UpdateBossAishouTurnStart() {
    return false;
}

bool UBattlePartySystemComponentBase::UpdateBossAishou() {
    return false;
}

void UBattlePartySystemComponentBase::UpdateBarrier(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::UpdateAidCycle() {
}

void UBattlePartySystemComponentBase::UpdateAid(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::UpdateActionAfter(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::UniqueSkill_SkillTekisei() {
}

void UBattlePartySystemComponentBase::UniqueSkill_ChangeTest(const int32& srcIndex, const int32& dstIndex) {
}

void UBattlePartySystemComponentBase::TakeOverDefenceAishou() {
}

void UBattlePartySystemComponentBase::SortOrder(int32 Start) {
}

void UBattlePartySystemComponentBase::SharedBossHPRatePartyIndex(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::SharedBossHPRate() {
}

void UBattlePartySystemComponentBase::SetUseSkill(int32 SkillId) {
}

void UBattlePartySystemComponentBase::SetUplifting(int32 partyIndex, bool Uplifting) {
}

void UBattlePartySystemComponentBase::SetUnit(int32 partyIndex, AActor* pActor) {
}

void UBattlePartySystemComponentBase::SetUniqueSkillParty(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::SetStealSkillTable(UDataTable* DataTable) {
}

void UBattlePartySystemComponentBase::SetReqCureBadStatus(int32 partyIndex, int32 status) {
}

void UBattlePartySystemComponentBase::SetPrevTurnInfoWeakDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) {
}

void UBattlePartySystemComponentBase::SetPrevTurnInfoRefAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) {
}

void UBattlePartySystemComponentBase::SetPrevTurnInfoBlockAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) {
}

void UBattlePartySystemComponentBase::SetPrevTurnInfoAttrDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) {
}

void UBattlePartySystemComponentBase::SetPrevTurnInfoAbsAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) {
}

void UBattlePartySystemComponentBase::SetPrevCommand(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::SetPoisonDamageRate(int32 partyIndex, float rate) {
}

void UBattlePartySystemComponentBase::SetOrder() {
}

void UBattlePartySystemComponentBase::SetNowCommandVarious(E_BTL_COMM_TYPE comm_type, int32 partyIndex, int32 n1, int32 n2) {
}

void UBattlePartySystemComponentBase::SetNowCommandTarget(int32 partyIndex, int32 target) {
}

void UBattlePartySystemComponentBase::SetNowCommandSetSkill(int32 partyIndex, int32 SkillId, int32 target) {
}

void UBattlePartySystemComponentBase::SetNowCommandSetAttack(int32 partyIndex, int32 target) {
}

void UBattlePartySystemComponentBase::SetNowCommand(int32 partyIndex, FBtlCommand Data) {
}

void UBattlePartySystemComponentBase::SetNextOrder() {
}

void UBattlePartySystemComponentBase::SetNewPartyIn(int32 oldPartyIndex, int32& retValue, int32& DevilID, int32& newEntryIndex) {
}

void UBattlePartySystemComponentBase::SetMitamaAnalyzeData(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::SetMagatsuhiDevilSkillTable(UDataTable* DataTable) {
}

void UBattlePartySystemComponentBase::SetMagatsuhiDevilParamRateTable(UDataTable* DataTable) {
}

void UBattlePartySystemComponentBase::SetMagatsuhiDevilParamRate(const FMagatsuhiDevilParamRateRow& MagatsuhiDevilParamRateRow) {
}

void UBattlePartySystemComponentBase::SetKuiStop(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::SetKuiLevel(int32 partyIndex, E_KUISHIBARI_LEVEL Level) {
}

void UBattlePartySystemComponentBase::SetHPUpValueUI(int32 partyIndex, int32 hpUpValue) {
}

void UBattlePartySystemComponentBase::SetHPUpValue(int32 partyIndex, int32 hpUpValue) {
}

void UBattlePartySystemComponentBase::SetHPMP(int32 partyIndex, int32 InValue, bool isHP) {
}

void UBattlePartySystemComponentBase::SetHomeTransform(int32 partyIndex, FTransform Transform) {
}

void UBattlePartySystemComponentBase::SetHitOffset(int32 partyIndex, float Offset) {
}

void UBattlePartySystemComponentBase::SetEnemyBattleIn(int32 targetIndex, int32 DevilID) {
}

void UBattlePartySystemComponentBase::SetElectrification(int32 partyIndex, bool Electrification) {
}

void UBattlePartySystemComponentBase::SetDown(int32 partyIndex, bool Down) {
}

void UBattlePartySystemComponentBase::SetDeadParam(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::SetCureMPValue(int32 partyIndex, int32 MPValue) {
}

void UBattlePartySystemComponentBase::SetCureHPValue(int32 partyIndex, int32 HPValue) {
}

void UBattlePartySystemComponentBase::SetCounterSkill(int32 partyIndex, int32 SkillId) {
}

void UBattlePartySystemComponentBase::SetCounterAutoSkill(int32 partyIndex, int32 SkillId) {
}

void UBattlePartySystemComponentBase::SetChkENTargetAllArray(bool isUse) {
}

void UBattlePartySystemComponentBase::SetCharmSkillID(const int32& partyIndex, const int32& SkillId) {
}

void UBattlePartySystemComponentBase::SetBAtkExtendValue(int32 partyIndex, float Value) {
}

void UBattlePartySystemComponentBase::SetBadStatusOne(int32 partyIndex, E_BAD_STATUS status, bool sw) {
}

void UBattlePartySystemComponentBase::SetBadStatus(int32 partyIndex, int32 status, bool sw) {
}

void UBattlePartySystemComponentBase::SetAidCounterMin(int32 partyIndex, E_BTL_CNT Type) {
}

void UBattlePartySystemComponentBase::SetAidCounterByGodParamterAid(int32 partyIndex, E_BTL_CNT Type, int32 Point) {
}

void UBattlePartySystemComponentBase::SetAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) {
}

void UBattlePartySystemComponentBase::SetActEndByBadStatus(int32 partyIndex, bool isActEnd, E_BAD_STATUS status) {
}

void UBattlePartySystemComponentBase::SaveUserHP(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::SaveNowHPAll() {
}

void UBattlePartySystemComponentBase::SaveNowHP(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ReturnEnemy() {
}

void UBattlePartySystemComponentBase::ResetSkillTekisei(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ReqCureBadStatusSide() {
}

void UBattlePartySystemComponentBase::ReqCureBadStatus(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::Replace(int32 partyIndexA, int32 partyIndexB, E_SUMMON_TYPE Type) {
}

bool UBattlePartySystemComponentBase::OverwriteCharge(int32 partyIndex, E_BTL_CNT aid_type) {
    return false;
}

void UBattlePartySystemComponentBase::OverwriteBadStatus(int32 partyIndex, int32 status) {
}

void UBattlePartySystemComponentBase::OpenAnalyze(const FBtlParty& party) {
}

int32 UBattlePartySystemComponentBase::OnBattleNkmNum() {
    return 0;
}

int32 UBattlePartySystemComponentBase::NkmStockIn(int32 partyIndex) {
    return 0;
}

bool UBattlePartySystemComponentBase::ModeChange(const int32 partyIndex, const int32 afterDevilID) {
    return false;
}

void UBattlePartySystemComponentBase::MaxSkillTekisei(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::MakeUpPlayerSideBattlePartyData() {
}

void UBattlePartySystemComponentBase::MakeUpEnemySideBattlePartyData(FBtlEncData Data) {
}

void UBattlePartySystemComponentBase::MakeUpCycle(E_BTL_CYCLE_TYPE cycleType) {
}

void UBattlePartySystemComponentBase::MakeUpBattlePartyPlayer(E_PLAYER_TYPE Type, int32 partyIndex) {
}

void UBattlePartySystemComponentBase::MakeUpBattlePartyNkm(int32 DevilID, int32 partyIndex) {
}

void UBattlePartySystemComponentBase::MakeUpBattlePartyEnemy(int32 enemyID, int32 partyIndex) {
}

void UBattlePartySystemComponentBase::LoopCycle(int32 addTime) {
}

bool UBattlePartySystemComponentBase::IsValidIndex(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsUplifting(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsPhisicsTaisei(const int32& partyIndex, const E_ATTRIBUTE_TYPE& attr) {
    return false;
}

bool UBattlePartySystemComponentBase::IsInField(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsHeroIndex(const int32& party_index) {
    return false;
}

bool UBattlePartySystemComponentBase::IsHaveAutoSkillExtraEffect(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value) {
    return false;
}

bool UBattlePartySystemComponentBase::IsGuest(const int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsExistInParty(int32 CharaID) {
    return false;
}

bool UBattlePartySystemComponentBase::IsExist(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsElectrification(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsDown(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsDead(int32 partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::IsCurrentCommandUseGodSkillSummon() {
    return false;
}

bool UBattlePartySystemComponentBase::IsBossRushChallengeModeEnemy(const int32& partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::HeroIsNahobino() {
    return false;
}

TArray<int32> UBattlePartySystemComponentBase::GetVirtualActOrder(int32 partyIndex) {
    return TArray<int32>();
}

FVector UBattlePartySystemComponentBase::GetUnitAveLocation(E_BTL_SIDE side, FName SocketName) {
    return FVector{};
}

AActor* UBattlePartySystemComponentBase::GetUnit(int32 partyIndex) {
    return NULL;
}

int32 UBattlePartySystemComponentBase::GetTekiseiValue(int32 partyIndex, E_SKILL_TEKISEI_CATEGORY categ) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetStealMagatsuhiSkill(const int32& partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetStartPartyIndexWhenPlayerTargetSelect(const int32& ActorPartyIndex, const int32& SkillId, const int32& ItemId) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetSlipDamage(int32 partyIndex) {
    return TArray<int32>();
}

int32 UBattlePartySystemComponentBase::GetSkillTekisei(const int32& partyIndex, const int32& SkillId) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetSkillCostCore(int32 partyIndex, int32 SkillId) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetSkillCost(int32 partyIndex, int32 SkillId) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetSideListDevilIDList(E_BTL_SIDE side) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideListCondition(E_BTL_SIDE side, bool NewIsInField, bool isHitTarget, bool isDmgChara) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideIsTargetList(E_BTL_SIDE side) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideIsStatList(E_BTL_SIDE side, E_BTL_PARTY_STAT stat) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideIsStat2List(E_BTL_SIDE side, E_BTL_PARTY_STAT2 stat) {
    return TArray<int32>();
}

TArray<FBtlParty> UBattlePartySystemComponentBase::GetSideIsInFieldPartyData(E_BTL_SIDE side) {
    return TArray<FBtlParty>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideIsInFieldList(E_BTL_SIDE side) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetSideIsBossFlagList(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag) {
    return TArray<int32>();
}

E_BTL_SIDE UBattlePartySystemComponentBase::GetSideFromIndex(int32 partyIndex) {
    return E_BTL_SIDE::E_BTL_SIDE_PLAYER;
}

TArray<int32> UBattlePartySystemComponentBase::GetSideActList_ToDie(E_BTL_SIDE side) {
    return TArray<int32>();
}

E_BTL_SIDE UBattlePartySystemComponentBase::GetSide(int32 partyIndex) {
    return E_BTL_SIDE::E_BTL_SIDE_PLAYER;
}

int32 UBattlePartySystemComponentBase::GetSavedUserHP() {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetReqCureBadStatus(int32 partyIndex) {
    return 0;
}

FBtlPrevTurnInfo UBattlePartySystemComponentBase::GetPrevTurnInfo(const int32& partyIndex, const int32 turnIndex) {
    return FBtlPrevTurnInfo{};
}

float UBattlePartySystemComponentBase::GetPrevHPRatio(const int32& partyIndex) {
    return 0.0f;
}

TArray<FBtlCommand> UBattlePartySystemComponentBase::GetPrevCommandTurn(int32 partyIndex, int32 Turn) {
    return TArray<FBtlCommand>();
}

FBtlCommand UBattlePartySystemComponentBase::GetPrevCommand(int32 partyIndex, int32 commandIndex) {
    return FBtlCommand{};
}

int32 UBattlePartySystemComponentBase::GetPlayerOrder(int32 PlayerIndex) {
    return 0;
}

FText UBattlePartySystemComponentBase::GetPartyName(const int32& partyIndex) {
    return FText::GetEmpty();
}

int32 UBattlePartySystemComponentBase::GetPartyBlankIndex(E_BTL_CHAR_TYPE Type, bool isStock, bool isReader) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetPartnerList() {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetOrderList() {
    return TArray<int32>();
}

int32 UBattlePartySystemComponentBase::GetNowMP(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetNowHP(int32 partyIndex) {
    return 0;
}

FBtlCommand UBattlePartySystemComponentBase::GetNowCommand(int32 partyIndex) {
    return FBtlCommand{};
}

int32 UBattlePartySystemComponentBase::GetNowActNum(int32 partyIndex) {
    return 0;
}

float UBattlePartySystemComponentBase::GetMPRatio(int32 partyIndex) {
    return 0.0f;
}

FAnalyzeData UBattlePartySystemComponentBase::GetMitamaAnalyzeData(const int32& partyIndex) {
    return FAnalyzeData{};
}

int32 UBattlePartySystemComponentBase::GetMaxMP(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetMaxHP(int32 partyIndex) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetMagatsuhiSkill(const int32& partyIndex, const bool checkMultiSkill) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetMagatsuhiDevilMagatsuhiSkill(const int32& partyIndex) {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetMagatsuhiDevilDropItemID(const int32& partyIndex) {
    return TArray<int32>();
}

FAnalyzeData UBattlePartySystemComponentBase::GetMagatsuhiDevilAnalyzeData(const int32& partyIndex) {
    return FAnalyzeData{};
}

int32 UBattlePartySystemComponentBase::GetLevel(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetKuishibariCureHP(int32 partyIndex, E_KUISHIBARI_LEVEL Level) {
    return 0;
}

E_KUISHIBARI_LEVEL UBattlePartySystemComponentBase::GetKuiLevel(int32 partyIndex) {
    return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;
}

E_BTL_SIDE UBattlePartySystemComponentBase::GetIndexSide(int32 partyIndex) {
    return E_BTL_SIDE::E_BTL_SIDE_PLAYER;
}

int32 UBattlePartySystemComponentBase::GetHPUpValueUI(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetHPUpValue(int32 partyIndex) {
    return 0;
}

float UBattlePartySystemComponentBase::GetHPRatio(int32 partyIndex) {
    return 0.0f;
}

FTransform UBattlePartySystemComponentBase::GetHomeTransform(int32 partyIndex) {
    return FTransform{};
}

FVector UBattlePartySystemComponentBase::GetHomeTargetLocation(int32 partyIndex) {
    return FVector{};
}

float UBattlePartySystemComponentBase::GetHitOffset(int32 partyIndex) {
    return 0.0f;
}

int32 UBattlePartySystemComponentBase::GetHeroIndex() {
    return 0;
}

FBtlParty UBattlePartySystemComponentBase::GetHeroData() {
    return FBtlParty{};
}

E_BTL_CNT UBattlePartySystemComponentBase::GetGodSkillUpAidType() {
    return E_BTL_CNT::E_BTL_CNT_DMG;
}

E_BTL_CNT UBattlePartySystemComponentBase::GetGodSkillDownAidType() {
    return E_BTL_CNT::E_BTL_CNT_DMG;
}

int32 UBattlePartySystemComponentBase::GetGlobalActNum() {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetEnemyUpliftingPartyIndex() {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetEnemyPartyIndexWithDevilIDOrRootID(int32 DevilID) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetEnemyPartyIndexWithDevilID(int32 DevilID) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetEnableFirstPartyIndex() {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetCureMPValue(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetCureHPValue(int32 partyIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetCounterSkill(int32 partyIndex, bool NewIsElectrification, bool isUniqueSkillCounter, bool isAvoidCounter) {
    return 0;
}

TArray<E_BTL_CNT> UBattlePartySystemComponentBase::GetConditonMapList(int32 partyIndex) {
    return TArray<E_BTL_CNT>();
}

int32 UBattlePartySystemComponentBase::GetCharmSkillID(const int32& partyIndex) {
    return 0;
}

E_BTL_CHAR_TYPE UBattlePartySystemComponentBase::GetCharaTypeDetail(int32 partyIndex) {
    return E_BTL_CHAR_TYPE::E_BTL_CHAR_EMPTY;
}

int32 UBattlePartySystemComponentBase::GetCharaID(int32 partyIndex) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetCanActList() {
    return TArray<int32>();
}

FBtlParty UBattlePartySystemComponentBase::GetBtlPartyData(int32 partyIndex) {
    return FBtlParty{};
}

FBtlCharData UBattlePartySystemComponentBase::GetBtlCharaData(int32 partyIndex) {
    return FBtlCharData{};
}

FAnalyzeData UBattlePartySystemComponentBase::GetBossRushChallengeModeAnalyzeData(const int32& partyIndex) {
    return FAnalyzeData{};
}

int32 UBattlePartySystemComponentBase::GetBattlePartyIndexByNkmIndex(int32 InNkmIndex, int32 InPlayerIndex, int32 InType) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetBattleEnemyPartyIndexByIndex(int32 InIndex) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetBattleEnemyNumber() {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetBarrierSkillIncludedDefenceAishou(const int32& partyIndex) {
    return TArray<int32>();
}

int32 UBattlePartySystemComponentBase::GetBadStatusMPDamage(int32 partyIndex, E_BAD_STATUS status) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetBadStatusDamage(int32 partyIndex, E_BAD_STATUS status) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetBadStatusCounter(int32 partyIndex, E_BAD_STATUS status) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetBadStatus(int32 partyIndex) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetAutoSkillIncludedDefenceAishou(const int32& partyIndex) {
    return TArray<int32>();
}

int32 UBattlePartySystemComponentBase::GetAutoSkillExtraEffectValue(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) {
    return 0;
}

float UBattlePartySystemComponentBase::GetAutoSkillExtraEffectRate(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) {
    return 0.0f;
}

TArray<AActor*> UBattlePartySystemComponentBase::GetAllOfBattleUnitList() {
    return TArray<AActor*>();
}

TArray<int32> UBattlePartySystemComponentBase::GetAllIsTargetList() {
    return TArray<int32>();
}

TArray<int32> UBattlePartySystemComponentBase::GetAllIsLogicList() {
    return TArray<int32>();
}

TArray<FBtlParty> UBattlePartySystemComponentBase::GetAllIsInFieldPartyData(bool isTargetOnly) {
    return TArray<FBtlParty>();
}

TArray<int32> UBattlePartySystemComponentBase::GetAllIsInFieldList() {
    return TArray<int32>();
}

int32 UBattlePartySystemComponentBase::GetAidCounter(int32 partyIndex, E_BTL_CNT Type) {
    return 0;
}

int32 UBattlePartySystemComponentBase::GetActPassNum(int32 partyIndex) {
    return 0;
}

TArray<int32> UBattlePartySystemComponentBase::GetActList() {
    return TArray<int32>();
}

E_BAD_STATUS UBattlePartySystemComponentBase::GetActEndByBadStatus(int32 partyIndex) {
    return E_BAD_STATUS::E_BAD_STATUS_NONE;
}

void UBattlePartySystemComponentBase::GetActCharmSkill(int32 partyIndex, int32& repair, TArray<uint8>& repairIndex, int32& aid, TArray<uint8>& aidIndex) {
}

void UBattlePartySystemComponentBase::ExpendActionCycle(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ExecuteActEnd(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::EscapeFailedForPlayer() {
}

void UBattlePartySystemComponentBase::DownRecovery(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::DelIsInFieldList(E_BTL_SIDE side, int32 partyIndex) {
}

void UBattlePartySystemComponentBase::DelFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::DelFlagAll(E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::DelFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::DelFlag2All(E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::DelFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::DelFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::DelBossFlagPartyList(TArray<E_BTL_BOSS_FLAG> flagArray) {
}

void UBattlePartySystemComponentBase::DelBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) {
}

void UBattlePartySystemComponentBase::DelBadStatusTurnCounter(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::DebugSetUniqueLevel(int32 partyIndex, int32 SkillId) {
}

void UBattlePartySystemComponentBase::DebugSetTekisei(int32 partyIndex, E_SKILL_TEKISEI_CATEGORY Tekisei, int32 InValue) {
}

void UBattlePartySystemComponentBase::DebugSetSkill(int32 partyIndex, int32 Slot, int32 SkillId) {
}

void UBattlePartySystemComponentBase::DebugSetParamter(int32 partyIndex, E_ABILITY_TYPE Type, int32 Value) {
}

void UBattlePartySystemComponentBase::DebugSetLevel(int32 partyIndex, int32 Level) {
}

void UBattlePartySystemComponentBase::DebugSetAutoSkill(int32 partyIndex, int32 Slot, int32 SkillId) {
}

void UBattlePartySystemComponentBase::DebugSetAishou(int32 partyIndex, E_ATTRIBUTE_TYPE attr, int32 InValue) {
}

void UBattlePartySystemComponentBase::CureHPMPAutoSkill(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::CopyMitamaAnalyzeData(const int32& partyIndex, const FAnalyzeData& AnalyzeData) {
}

void UBattlePartySystemComponentBase::ControlParameterBattleEndByStock() {
}

int32 UBattlePartySystemComponentBase::ConstStockStart() {
    return 0;
}

int32 UBattlePartySystemComponentBase::ConstStockNum() {
    return 0;
}

int32 UBattlePartySystemComponentBase::ConstPartyMax() {
    return 0;
}

void UBattlePartySystemComponentBase::ConditionMapUpdate(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ClearSlipDamage(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ClearSavedUserHP() {
}

void UBattlePartySystemComponentBase::ClearReqCureBadStatus(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ClearRenzokuSkillParam() {
}

void UBattlePartySystemComponentBase::ClearPrevTurnInfo(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearPartyData(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearParty(int32 targetIndex) {
}

void UBattlePartySystemComponentBase::ClearNowCommand(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ClearMitamaAnalyzeDataAll() {
}

void UBattlePartySystemComponentBase::ClearMitamaAnalyzeData(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearMagatsuhiSkillCounter(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearIsInFieldList(E_BTL_SIDE side) {
}

void UBattlePartySystemComponentBase::ClearEnemyPartyDataAll() {
}

void UBattlePartySystemComponentBase::ClearCounter(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearCharmSkillID(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearCharData(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::ClearBstCountAll() {
}

void UBattlePartySystemComponentBase::ClearBstCount(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ClearBarrierAidCounter(int32 partyIndex, const bool isKarnClear) {
}

void UBattlePartySystemComponentBase::ClearAidCounter(int32 partyIndex, E_BTL_CNT Type) {
}

void UBattlePartySystemComponentBase::ClearAid(int32 partyIndex, bool is_magatsuhi_skill) {
}

void UBattlePartySystemComponentBase::ClearActionParamAll() {
}

void UBattlePartySystemComponentBase::ClampHP(int32 partyIndex, bool battleAfter) {
}

bool UBattlePartySystemComponentBase::ChkUseSkill(int32 Turn, int32 SkillId) {
    return false;
}

bool UBattlePartySystemComponentBase::ChkENTargetAllArray(int32 Turn) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckUseMagatsuhiSkill(const int32& partyIndex, const int32& SkillId) {
    return false;
}

E_KUISHIBARI_LEVEL UBattlePartySystemComponentBase::CheckUseKuiSkill(int32 partyIndex) {
    return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;
}

bool UBattlePartySystemComponentBase::CheckUniqueSkillKantuu(const int32& srcIndex, const int32& dstIndex, bool isKantuu, bool isForceNormalAttack) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckReqCureBadStatus(int32 partyIndex, E_BAD_STATUS status) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckNowMagatsuhiSkill(const int32& partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckMitama(const int32& partyIndex) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckMagatsuhiDevil(const int32& partyIndex) {
    return false;
}

void UBattlePartySystemComponentBase::CheckHiddenTarget() {
}

bool UBattlePartySystemComponentBase::CheckFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckEnemyLoseBattleEnd() {
    return false;
}

bool UBattlePartySystemComponentBase::CheckBossFlagMember(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag) {
    return false;
}

bool UBattlePartySystemComponentBase::CheckBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) {
    return false;
}

int32 UBattlePartySystemComponentBase::CheckBadStatusNaturalyCure(int32 partyIndex) {
    return 0;
}

bool UBattlePartySystemComponentBase::CheckBadStatusAny(int32 partyIndex) {
    return false;
}

E_BAD_STATUS UBattlePartySystemComponentBase::CheckBadStatusActEnd(int32 partyIndex) {
    return E_BAD_STATUS::E_BAD_STATUS_NONE;
}

bool UBattlePartySystemComponentBase::CheckBadStatus(int32 partyIndex, E_BAD_STATUS status) {
    return false;
}

void UBattlePartySystemComponentBase::CalcMoonAgeTurn() {
}

E_ATTRIBUTE_TYPE UBattlePartySystemComponentBase::CalcAishouSuitableTargetSelect(const int32 srcPartyIndex, const int32 dstPartyIndex, const TArray<E_ATTRIBUTE_TYPE> aishouArray) {
    return E_ATTRIBUTE_TYPE::E_ATTRIBUTE_TYPE_PHISICS;
}

E_KUISHIBARI_LEVEL UBattlePartySystemComponentBase::BstDamageKuishibari(int32 partyIndex) {
    return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;
}

void UBattlePartySystemComponentBase::ApplySkillAidCounterCore(int32 partyIndex, FSkillBaseData Data, int32 srcPartyIndex) {
}

void UBattlePartySystemComponentBase::ApplySkillAidCounter(int32 partyIndex, int32 SkillId, int32 srcPartyIndex) {
}

void UBattlePartySystemComponentBase::ApplyRenzokuBattle() {
}

void UBattlePartySystemComponentBase::ApplyDamage(int32 partyIndex, int32 hpDamage, int32 mpDamage, int32 bst) {
}

void UBattlePartySystemComponentBase::ApplyCure(int32 partyIndex, int32 hpCure, int32 mpCure, int32 bst) {
}

void UBattlePartySystemComponentBase::ApplyBossFlag(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::ApplyBarrierSkillIncludedDefenceAishou(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::AddPrevTurnInfoMinusDamageNum(const int32& partyIndex) {
}

void UBattlePartySystemComponentBase::AddOrderArray(TArray<int32> partyIndexArray) {
}

void UBattlePartySystemComponentBase::AddOrder(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::AddMagatsuhiDevilSkillTable(const FMagatsuhiDevilSkillRow& MagatsuhiDevilSkillTableRow) {
}

void UBattlePartySystemComponentBase::AddIsInFieldList(E_BTL_SIDE side, int32 partyIndex) {
}

void UBattlePartySystemComponentBase::AddHPMP(int32 partyIndex, int32 InValue, bool isHP, bool isIgnoreDebugFlag) {
}

void UBattlePartySystemComponentBase::AddFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::AddFlagAll(E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::AddFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::AddFlag2All(E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::AddFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) {
}

void UBattlePartySystemComponentBase::AddFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) {
}

void UBattlePartySystemComponentBase::AddCureMPValue(int32 partyIndex, int32 addValue) {
}

void UBattlePartySystemComponentBase::AddCureHPValue(int32 partyIndex, int32 addValue) {
}

void UBattlePartySystemComponentBase::AddBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) {
}

void UBattlePartySystemComponentBase::AddBadStatusTurnCounter(int32 partyIndex) {
}

void UBattlePartySystemComponentBase::AddBadStatusRecCounter(int32 partyIndex, int32 status) {
}

void UBattlePartySystemComponentBase::AddAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) {
}


