#include "BPL_PartyData.h"

UBPL_PartyData::UBPL_PartyData() {
}

void UBPL_PartyData::UpdatePlayerParam(E_PLAYER_TYPE playerType) {
}

void UBPL_PartyData::UpdateNkmParam(int32 NkmIndex) {
}

void UBPL_PartyData::UpdateBtlNkmIndexArray() {
}

bool UBPL_PartyData::SummonBattleNkm(int32 InNkmIndex) {
    return false;
}

void UBPL_PartyData::SortEntryNkmList() {
}

bool UBPL_PartyData::SetStockNkmIndex(int32 InIndex, int32 InNkmIndex) {
    return false;
}

bool UBPL_PartyData::SetStockMax(int32 InStockMax) {
    return false;
}

void UBPL_PartyData::setSotrWindowOrder(uint8 sprtType, uint8 order) {
}

void UBPL_PartyData::setSotrWindowIndex(uint8 Type, int32 Index) {
}

void UBPL_PartyData::SetShiseijoWinCount(const E_SHISEIJO& shiseijo, const int32& Value) {
}

void UBPL_PartyData::SetPlayerUnionLevel(uint8 Value) {
}

void UBPL_PartyData::SetPlayerSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::SetPlayerSkill(E_PLAYER_TYPE playerType, int32 skillSlot, int32 SkillId, E_LEARN_SKILL_TYPE learnType) {
}

void UBPL_PartyData::SetPlayerPanelPositionInBattle(int32 args32Index) {
}

void UBPL_PartyData::SetPlayerName(E_PLAYER_TYPE playerType, const FString& Name) {
}

void UBPL_PartyData::SetPlayerMAGGaugeStockNum(int32 Value) {
}

void UBPL_PartyData::SetPlayerMAGGauge(int32 Value) {
}

void UBPL_PartyData::SetPlayerHPMP(E_PLAYER_TYPE playerType, int32 Hp, int32 Mp) {
}

void UBPL_PartyData::SetPlayerDevilIndexAfterBattle(int32 args32Index, int32 args32NakamaIndex) {
}

void UBPL_PartyData::SetPlayerDevilBuildSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::SetPlayerDeffenceAishou(E_PLAYER_TYPE playerType, E_ATTRIBUTE_TYPE Type, int32 Value) {
}

void UBPL_PartyData::SetPlayerBuildSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::SetPlayerBst(E_PLAYER_TYPE playerType, int32 bst) {
}

void UBPL_PartyData::SetPlayerAbility(E_PLAYER_TYPE playerType, E_PARAM_TYPE Type, int32 Value) {
}

void UBPL_PartyData::SetPartyMakka(int32 Makka) {
}

void UBPL_PartyData::SetPartnerBattleUnit(E_PARTNER_ID partnerID, bool sw) {
}

void UBPL_PartyData::SetNkmSkillTekisei(int32 NkmIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::SetNkmSkill(int32 NkmIndex, int32 skillSlot, int32 SkillId, E_LEARN_SKILL_TYPE learnType) {
}

void UBPL_PartyData::SetNkmHPMP(int32 NkmIndex, int32 Hp, int32 Mp) {
}

void UBPL_PartyData::SetNkmDeffenceAishou(int32 NkmIndex, E_ATTRIBUTE_TYPE Type, int32 Value) {
}

void UBPL_PartyData::SetNkmBst(int32 NkmIndex, int32 bst) {
}

bool UBPL_PartyData::SetNkmBattleUnitBlank(int32 NkmIndex, bool sw) {
    return false;
}

bool UBPL_PartyData::SetNkmBattleUnit(int32 NkmIndex, bool sw) {
    return false;
}

void UBPL_PartyData::SetMainHero(E_HERO_KIND mainHero) {
}

void UBPL_PartyData::SaveShiseijoParameterAll() {
}

void UBPL_PartyData::SaveGuestParameterbyNkmData(const FNkmData& NkmData) {
}

void UBPL_PartyData::SaveGuestParameter(const int32 NkmIndex) {
}

bool UBPL_PartyData::ReturnStockNkm(int32 InNkmIndex) {
    return false;
}

void UBPL_PartyData::ResetSetPlayerDevilIndexAfterBattle(int32 args32Index, int32 args32NakamaIndex) {
}

void UBPL_PartyData::ResetPlayerGrowUp_Param() {
}

void UBPL_PartyData::ResetPartyUniqueSkill() {
}

bool UBPL_PartyData::ResetGlobalEntryId() {
    return false;
}

bool UBPL_PartyData::RemoveNkmInCamp(int32 NkmIndex) {
    return false;
}

void UBPL_PartyData::RemoveNkmFixedBattleIndex(int32 NkmIndex) {
}

void UBPL_PartyData::RemoveNkmByDevilID(int32 DevilID) {
}

void UBPL_PartyData::RemoveNkm(int32 NkmIndex) {
}

bool UBPL_PartyData::ReBuildGlobalEntryId() {
    return false;
}

bool UBPL_PartyData::PlayerSkillGet(E_PLAYER_TYPE playerType, int32 SkillId, E_LEARN_SKILL_TYPE learnType) {
    return false;
}

void UBPL_PartyData::PlayerSetLevelOne(E_PLAYER_TYPE playerType) {
}

bool UBPL_PartyData::PlayerParamPointUp(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type, int32 Point) {
    return false;
}

bool UBPL_PartyData::PlayerParamBuildUp(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type, int32 Point) {
    return false;
}

void UBPL_PartyData::PlayerLevelExpSync() {
}

bool UBPL_PartyData::PlayerIsUseableSkill(E_PLAYER_TYPE playerType, int32 SkillId) {
    return false;
}

bool UBPL_PartyData::PlayerIsHaveSkill(E_PLAYER_TYPE playerType, int32 SkillId) {
    return false;
}

void UBPL_PartyData::PlayerGrowUp_Param(E_PLAYER_TYPE playerType, const FAbilData& addAbil) {
}

void UBPL_PartyData::PlayerGrowUp(E_PLAYER_TYPE playerType, int32 lvUp, bool isAutoParamUp) {
}

int32 UBPL_PartyData::PlayerGetAbilityBlankNoApply(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type) {
    return 0;
}

int32 UBPL_PartyData::PlayerGetAbilityBlank(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type) {
    return 0;
}

void UBPL_PartyData::PayerForceSpecifiedLevel(E_PLAYER_TYPE playerType, int32 Level, bool isAutoParamUp) {
}

void UBPL_PartyData::PartyAllCure() {
}

bool UBPL_PartyData::PartnerIsBattleUnit(E_PARTNER_ID partnerID) {
    return false;
}

void UBPL_PartyData::PartnerDataSetGlobalFlag(E_PARTNER_ID partnerID, uint8 Value, bool sw) {
}

void UBPL_PartyData::OffsetGuestLevel(FNkmData& NkmData, const int32 NkmIndex) {
}

bool UBPL_PartyData::NkmSkillGet(int32 NkmIndex, int32 SkillId, E_LEARN_SKILL_TYPE learnType) {
    return false;
}

void UBPL_PartyData::NkmSetFriendshipLv(int32 NkmIndex, uint8 Level) {
}

void UBPL_PartyData::NkmSetBtlEntryCnt(int32 NkmIndex, uint8 Val) {
}

bool UBPL_PartyData::NkmParamBuildUp(int32 NkmIndex, E_ABILITY_TYPE Type, int32 Point) {
    return false;
}

bool UBPL_PartyData::NkmIsUseableSkill(int32 NkmIndex, int32 SkillId) {
    return false;
}

bool UBPL_PartyData::NkmIsHaveSkill(int32 NkmIndex, int32 SkillId) {
    return false;
}

bool UBPL_PartyData::NkmIsBattleUnit(int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::NkmIndexIsValid(int32 NkmIndex) {
    return false;
}

void UBPL_PartyData::NkmGrowUp(int32 NkmIndex, int32 lvUp) {
}

int32 UBPL_PartyData::NkmGetAbilityBlankNoApply(int32 NkmIndex, E_ABILITY_TYPE Type) {
    return 0;
}

int32 UBPL_PartyData::NkmGetAbilityBlank(int32 NkmIndex, E_ABILITY_TYPE Type) {
    return 0;
}

void UBPL_PartyData::NkmDataSetGlobalFlag(int32 NkmIndex, uint8 Value, bool sw) {
}

void UBPL_PartyData::NkmDataInit(int32 NkmIndex, int32 DevilID, E_NKM_INIT_TYPE initType, bool isOriginalSummon) {
}

void UBPL_PartyData::NkmDataClearAll() {
}

void UBPL_PartyData::NkmAddBtlEntryCnt(int32 NkmIndex, uint8 Add) {
}

void UBPL_PartyData::MakeupPartnerData() {
}

bool UBPL_PartyData::LoadGuestParameter(const int32 DevilID, FNkmData& outGuestData) {
    return false;
}

bool UBPL_PartyData::IsValidNkmEntryList(int32 entryIndex) {
    return false;
}

bool UBPL_PartyData::IsShiseijyoYokoByNkmIndex(const int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::IsShiseijyoYoko(const int32 InDevilId) {
    return false;
}

bool UBPL_PartyData::IsShiseijyoTaoByNkmIndex(const int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::IsShiseijyoTao(const int32 InDevilId) {
    return false;
}

bool UBPL_PartyData::IsScenarioSkillSlotNkm(int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::IsScenarioSkillSlotDevil(int32 DevilID) {
    return false;
}

bool UBPL_PartyData::IsNahobino() {
    return false;
}

bool UBPL_PartyData::IsGuest(int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::IsExistShiseijoBackupData(const E_SHISEIJO& shiseijo) {
    return false;
}

bool UBPL_PartyData::IsEntryNkm(int32 DevilID) {
    return false;
}

bool UBPL_PartyData::IsEnableMultiMagatsuhiSkillByPartyData(int32 SkillId, int32 useDevilId, bool checkDead) {
    return false;
}

bool UBPL_PartyData::IsEnableMultiMagatsuhiSkillByDevilIdList(int32 SkillId, const TArray<int32>& devilIdList, int32 useDevilId) {
    return false;
}

bool UBPL_PartyData::IsDouble() {
    return false;
}

bool UBPL_PartyData::IsBoyExist() {
    return false;
}

bool UBPL_PartyData::IsBonusDevil(int32 NkmIndex) {
    return false;
}

bool UBPL_PartyData::IsAogamiExist() {
    return false;
}

void UBPL_PartyData::IncShiseijoWinCount(const E_SHISEIJO& shiseijo) {
}

int32 UBPL_PartyData::GetUpliftingGauge() {
    return 0;
}

void UBPL_PartyData::GetUniquSkillInfoReductionRelicCollectionTime(int32& OutCharaNum, int32& OutSkillValue) {
}

uint8 UBPL_PartyData::GetStockNkmIndex(int32 InIndex) {
    return 0;
}

int32 UBPL_PartyData::GetStockMaxEnum() {
    return 0;
}

int32 UBPL_PartyData::GetStockMax() {
    return 0;
}

uint8 UBPL_PartyData::getSotrWindowOrder(uint8 sortType) {
    return 0;
}

int32 UBPL_PartyData::getSotrWindowIndex(uint8 Type) {
    return 0;
}

int32 UBPL_PartyData::GetSkillTekiseiParameter(const TArray<int32>& SkillTekisei, int32 SkillId, E_SKILL_TEKISEI_CATEGORY eCategory, int32 eEftType) {
    return 0;
}

int32 UBPL_PartyData::GetSkillTekiseiLimitByCategory(E_SKILL_TEKISEI_CATEGORY InCategory, int32 InLimitType) {
    return 0;
}

int32 UBPL_PartyData::GetShiseijyoNum() {
    return 0;
}

int32 UBPL_PartyData::GetShiseijoWinCount(const E_SHISEIJO& shiseijo) {
    return 0;
}

int32 UBPL_PartyData::GetScenarioDevilSkillSlotNum() {
    return 0;
}

int32 UBPL_PartyData::GetReassignablePlayerParamPoint() {
    return 0;
}

int32 UBPL_PartyData::GetPriorityOfDefenceAishou(int32 InDevilId, int32 InType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerUpLevel(E_PLAYER_TYPE Type) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerUniqueSkillId() {
    return 0;
}

uint8 UBPL_PartyData::GetPlayerUnionLevel() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerSkillValidNum(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerSkillTekisei(E_SKILL_TEKISEI_CATEGORY Type, int32 InKind) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerSkillSlotNum() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerSkillSlot(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerSkillCost(E_PLAYER_TYPE playerType, int32 SkillId) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerPanelPositionInBattle() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerNextExp_Level(int32 Level) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerNextExp(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerMP(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerMAGGaugeStockNum() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerMAGGaugeMax() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerMAGGauge() {
    return 0;
}

int32 UBPL_PartyData::GetPlayerLevel(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerHP(E_PLAYER_TYPE playerType) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerDevilSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 InKind) {
    return 0;
}

uint8 UBPL_PartyData::GetPlayerDevilIndexAfterBattle(int32 args32Index) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerDevilBuildSkillTekiseiMax(int32 InNkmIndex, int32 InType, E_SKILL_TEKISEI_CATEGORY Type) {
    return 0;
}

FCharData UBPL_PartyData::GetPlayerData(E_PLAYER_TYPE playerType) {
    return FCharData{};
}

int32 UBPL_PartyData::GetPlayerBuildSkillTekiseiMax(int32 InType, E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerAutoSkillSlot(E_PLAYER_TYPE playerType) {
    return 0;
}

TArray<FAddGetSkill> UBPL_PartyData::GetPlayerAddGetSkillArray(E_PLAYER_TYPE playerType, int32 Level) {
    return TArray<FAddGetSkill>();
}

int32 UBPL_PartyData::GetPlayerAddGetSkill(E_PLAYER_TYPE playerType, int32 playerLevel) {
    return 0;
}

int32 UBPL_PartyData::GetPlayerAbilityDataByAbilityName(E_ABILITYNAME_TYPE InType) {
    return 0;
}

int32 UBPL_PartyData::GetPartySkillSource() {
    return 0;
}

int32 UBPL_PartyData::GetPartyMakkaMax() {
    return 0;
}

int32 UBPL_PartyData::GetPartyMakka() {
    return 0;
}

FPartnerData UBPL_PartyData::GetPartnerData(E_PARTNER_ID partnerID) {
    return FPartnerData{};
}

TArray<E_PARTNER_ID> UBPL_PartyData::GetPartnerBattleUnitList() {
    return TArray<E_PARTNER_ID>();
}

int32 UBPL_PartyData::GetNkmUniqueSkillId(int32 InNkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmSkillValidNum(int32 NkmIndex) {
    return 0;
}

TArray<int32> UBPL_PartyData::GetNkmSkillTekisei(const FNkmData& Data, bool NewIsNahobino) {
    return TArray<int32>();
}

int32 UBPL_PartyData::GetNkmSkillSlotNum() {
    return 0;
}

int32 UBPL_PartyData::GetNkmSkillSlot(int32 NkmIndex) {
    return 0;
}

TArray<int32> UBPL_PartyData::GetNkmSkillList(const FNkmData& Data, bool NewIsNahobino) {
    return TArray<int32>();
}

int32 UBPL_PartyData::GetNkmSkillCost_NkmIndex(int32 NkmIndex, int32 SkillId) {
    return 0;
}

int32 UBPL_PartyData::GetNkmNextExp_Level(int32 NkmIndex, int32 Level) {
    return 0;
}

int32 UBPL_PartyData::GetNkmNextExp(int32 NkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmMP(int32 NkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmLevel(int32 NkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmIndexByEntryList(int32 entryIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmIndexByDevilID(int32 DevilID) {
    return 0;
}

TArray<int32> UBPL_PartyData::GetNkmIndexByAttrTypeArray(uint8 Attr1, uint8 Attr2) {
    return TArray<int32>();
}

int32 UBPL_PartyData::GetNkmIndexByAttrType(uint8 Attr1, uint8 Attr2) {
    return 0;
}

int32 UBPL_PartyData::GetNkmHP(int32 NkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmFriendshipLv(int32 NkmIndex) {
    return 0;
}

TArray<uint8> UBPL_PartyData::GetNkmEntryListArray() {
    return TArray<uint8>();
}

int32 UBPL_PartyData::GetNkmdUpLevel(int32 NkmIndex) {
    return 0;
}

TArray<int32> UBPL_PartyData::GetNkmDefenceAishou(const FNkmData& Data, bool NewIsNahobino) {
    return TArray<int32>();
}

FNkmData UBPL_PartyData::GetNkmData(int32 NkmIndex) {
    return FNkmData{};
}

int32 UBPL_PartyData::GetNkmBtlEntryCnt(int32 NkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetNkmBattleUnitNum() {
    return 0;
}

TArray<uint8> UBPL_PartyData::GetNkmBattleUnitList() {
    return TArray<uint8>();
}

int32 UBPL_PartyData::GetNkmAutoSkillSlot(int32 NkmIndex) {
    return 0;
}

TArray<int32> UBPL_PartyData::GetNkmAutoSkillList(const FNkmData& Data, bool NewIsNahobino) {
    return TArray<int32>();
}

TArray<int32> UBPL_PartyData::GetNkmAllSkillList(const FNkmData& Data, bool NewIsNahobino) {
    return TArray<int32>();
}

int32 UBPL_PartyData::GetNkmAddGetSkill(int32 NkmIndex, int32 nkmLevel) {
    return 0;
}

int32 UBPL_PartyData::GetNkmAbilityDataByAbilityName(int32 InNkmIndex, E_ABILITYNAME_TYPE InType) {
    return 0;
}

FAbilData UBPL_PartyData::GetNkmAbility(const FNkmData& Data, bool NewIsNahobino) {
    return FAbilData{};
}

TArray<int32> UBPL_PartyData::GetMultiMagatsuhiSkillUsageNkmIndexArray(int32 SkillId) {
    return TArray<int32>();
}

bool UBPL_PartyData::GetMultiMagatsuhiSkillList(TArray<int32>& OutSkillList, int32 InDevilId) {
    return false;
}

E_HERO_KIND UBPL_PartyData::GetMainHero() {
    return E_HERO_KIND::E_HERO_KIND_BOY;
}

int32 UBPL_PartyData::GetLevelMax() {
    return 0;
}

int32 UBPL_PartyData::GetHeroStatFlag() {
    return 0;
}

int32 UBPL_PartyData::GetGuestSkillSlotNum(int32 InNkmIndex) {
    return 0;
}

int32 UBPL_PartyData::GetGuestNum() {
    return 0;
}

int32 UBPL_PartyData::GetGlobalEntryId() {
    return 0;
}

int32 UBPL_PartyData::GetEntryNkmNum() {
    return 0;
}

int32 UBPL_PartyData::GetEntryNkmMax() {
    return 0;
}

TArray<uint8> UBPL_PartyData::GetBtlNkmIndexArray() {
    return TArray<uint8>();
}

int32 UBPL_PartyData::GetBonusDevilSkillSlotNum() {
    return 0;
}

int32 UBPL_PartyData::EntryNkmBlankForFusion(int32 DevilID, bool bOpenAnalyze, bool isOriginalSummon) {
    return 0;
}

int32 UBPL_PartyData::EntryNkmBlank(int32 DevilID) {
    return 0;
}

int32 UBPL_PartyData::EntryMaouBlank(int32 DevilID) {
    return 0;
}

void UBPL_PartyData::DelHeroStatFlag(E_HERO_STAT stat) {
}

void UBPL_PartyData::DeletePlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst) {
}

void UBPL_PartyData::DeletePlayerBst(E_PLAYER_TYPE playerType, int32 bst) {
}

void UBPL_PartyData::DeleteNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst) {
}

void UBPL_PartyData::DeleteNkmBst(int32 NkmIndex, int32 bst) {
}

bool UBPL_PartyData::DebugPlayerSetLevel(E_PLAYER_TYPE plyType, int32 Level, bool takeOver_skill, bool takeOver_tekisei, bool takeOver_param) {
    return false;
}

bool UBPL_PartyData::DebugNkmSetParameter(int32 NkmIndex, E_ABILITY_TYPE Type, int32 Val) {
    return false;
}

bool UBPL_PartyData::DebugNkmSetLevel(int32 NkmIndex, int32 Level, bool takeOver_skill, bool takeOver_tekisei, bool takeOver_param) {
    return false;
}

bool UBPL_PartyData::DebugNkmSetBonusDevilFlag(int32 NkmIndex, int32 Val) {
    return false;
}

int32 UBPL_PartyData::Const_GetNkmEntryMax() {
    return 0;
}

bool UBPL_PartyData::ClearStockNkmIndex() {
    return false;
}

void UBPL_PartyData::ClearShiseijoBackupData(const E_SHISEIJO& shiseijo) {
}

void UBPL_PartyData::ClearPlayerSkill(E_PLAYER_TYPE playerType, int32 skillSlot) {
}

void UBPL_PartyData::ClearNkmBattleUnit() {
}

bool UBPL_PartyData::CheckPrimeMinisterNahobino() {
    return false;
}

bool UBPL_PartyData::CheckPlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst) {
    return false;
}

bool UBPL_PartyData::CheckPlayerBst(E_PLAYER_TYPE playerType, int32 bst) {
    return false;
}

bool UBPL_PartyData::CheckPartyAllCure() {
    return false;
}

int32 UBPL_PartyData::CheckNkmSkillSlotNum(int32 InNkmIndex) {
    return 0;
}

bool UBPL_PartyData::CheckNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst) {
    return false;
}

bool UBPL_PartyData::CheckNkmBst(int32 NkmIndex, int32 bst) {
    return false;
}

bool UBPL_PartyData::CheckHeroStatFlag(E_HERO_STAT stat) {
    return false;
}

void UBPL_PartyData::ChangeNkmIndexArray(TArray<uint8> indexArray) {
}

void UBPL_PartyData::ChangeBtlNkmIndexArray(TArray<uint8> indexArray) {
}

bool UBPL_PartyData::CanBeCorrectedSkillTekiseiForPlayerDevil(int32 InNkmIndex, E_SKILL_TEKISEI_CATEGORY InType, int32 InValue) {
    return false;
}

bool UBPL_PartyData::CanBeCorrectedSkillTekiseiForPlayer(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
    return false;
}

void UBPL_PartyData::CalcPlayerDevilBuildSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::CalcPlayerBuildSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value) {
}

void UBPL_PartyData::AddUpliftingGauge(int32 Add) {
}

void UBPL_PartyData::AddPlayerMP(E_PLAYER_TYPE playerType, int32 Value) {
}

void UBPL_PartyData::AddPlayerMAGGauge(int32 Value) {
}

void UBPL_PartyData::AddPlayerHP(E_PLAYER_TYPE playerType, int32 Value) {
}

void UBPL_PartyData::AddPlayerExp(E_PLAYER_TYPE playerType, int32 getExp) {
}

void UBPL_PartyData::AddPlayerDeffenceAishou(E_PLAYER_TYPE playerType, E_ATTRIBUTE_TYPE Type, int32 Value) {
}

void UBPL_PartyData::AddPlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst) {
}

void UBPL_PartyData::AddPlayerBst(E_PLAYER_TYPE playerType, int32 bst) {
}

void UBPL_PartyData::AddPlayerAbility(E_PLAYER_TYPE playerType, E_PARAM_TYPE Type, int32 Value) {
}

void UBPL_PartyData::AddPartySkillSource(int32 Source) {
}

void UBPL_PartyData::AddPartyMakka(int32 Makka) {
}

void UBPL_PartyData::AddNkmMP(int32 NkmIndex, int32 Value) {
}

void UBPL_PartyData::AddNkmHP(int32 NkmIndex, int32 Value) {
}

void UBPL_PartyData::AddNkmExp(int32 NkmIndex, int32 getExp) {
}

void UBPL_PartyData::AddNkmDeffenceAishou(int32 NkmIndex, E_ATTRIBUTE_TYPE Type, int32 Value) {
}

void UBPL_PartyData::AddNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst) {
}

void UBPL_PartyData::AddNkmBst(int32 NkmIndex, int32 bst) {
}

void UBPL_PartyData::AddHeroStatFlag(E_HERO_STAT stat) {
}


