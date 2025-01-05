#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AbilData.h"
#include "AddGetSkill.h"
#include "CharData.h"
#include "E_ABILITYNAME_TYPE.h"
#include "E_ABILITY_TYPE.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_BAD_STATUS.h"
#include "E_HERO_KIND.h"
#include "E_HERO_STAT.h"
#include "E_LEARN_SKILL_TYPE.h"
#include "E_NKM_INIT_TYPE.h"
#include "E_PARAM_TYPE.h"
#include "E_PARTNER_ID.h"
#include "E_PLAYER_TYPE.h"
#include "E_SHISEIJO.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "NkmData.h"
#include "PartnerData.h"
#include "BPL_PartyData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_PartyData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_PartyData();

    UFUNCTION(BlueprintCallable)
    static void UpdatePlayerParam(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateNkmParam(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateBtlNkmIndexArray();
    
    UFUNCTION(BlueprintCallable)
    static bool SummonBattleNkm(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SortEntryNkmList();
    
    UFUNCTION(BlueprintCallable)
    static bool SetStockNkmIndex(int32 InIndex, int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStockMax(int32 InStockMax);
    
    UFUNCTION(BlueprintCallable)
    static void setSotrWindowOrder(uint8 sprtType, uint8 order);
    
    UFUNCTION(BlueprintCallable)
    static void setSotrWindowIndex(uint8 Type, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetShiseijoWinCount(const E_SHISEIJO& shiseijo, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerUnionLevel(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerSkill(E_PLAYER_TYPE playerType, int32 skillSlot, int32 SkillId, E_LEARN_SKILL_TYPE learnType);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerPanelPositionInBattle(int32 args32Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerName(E_PLAYER_TYPE playerType, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerMAGGaugeStockNum(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerMAGGauge(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerHPMP(E_PLAYER_TYPE playerType, int32 Hp, int32 Mp);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerDevilIndexAfterBattle(int32 args32Index, int32 args32NakamaIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerDevilBuildSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerDeffenceAishou(E_PLAYER_TYPE playerType, E_ATTRIBUTE_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerBuildSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerBst(E_PLAYER_TYPE playerType, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerAbility(E_PLAYER_TYPE playerType, E_PARAM_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyMakka(int32 Makka);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartnerBattleUnit(E_PARTNER_ID partnerID, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetNkmSkillTekisei(int32 NkmIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNkmSkill(int32 NkmIndex, int32 skillSlot, int32 SkillId, E_LEARN_SKILL_TYPE learnType);
    
    UFUNCTION(BlueprintCallable)
    static void SetNkmHPMP(int32 NkmIndex, int32 Hp, int32 Mp);
    
    UFUNCTION(BlueprintCallable)
    static void SetNkmDeffenceAishou(int32 NkmIndex, E_ATTRIBUTE_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNkmBst(int32 NkmIndex, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNkmBattleUnitBlank(int32 NkmIndex, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNkmBattleUnit(int32 NkmIndex, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainHero(E_HERO_KIND mainHero);
    
    UFUNCTION(BlueprintCallable)
    static void SaveShiseijoParameterAll();
    
    UFUNCTION(BlueprintCallable)
    static void SaveGuestParameterbyNkmData(const FNkmData& NkmData);
    
    UFUNCTION(BlueprintCallable)
    static void SaveGuestParameter(const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool ReturnStockNkm(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSetPlayerDevilIndexAfterBattle(int32 args32Index, int32 args32NakamaIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayerGrowUp_Param();
    
    UFUNCTION(BlueprintCallable)
    static void ResetPartyUniqueSkill();
    
    UFUNCTION(BlueprintCallable)
    static bool ResetGlobalEntryId();
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveNkmInCamp(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNkmFixedBattleIndex(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNkmByDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNkm(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool ReBuildGlobalEntryId();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerSkillGet(E_PLAYER_TYPE playerType, int32 SkillId, E_LEARN_SKILL_TYPE learnType);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerSetLevelOne(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerParamPointUp(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerParamBuildUp(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerLevelExpSync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayerIsUseableSkill(E_PLAYER_TYPE playerType, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerIsHaveSkill(E_PLAYER_TYPE playerType, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerGrowUp_Param(E_PLAYER_TYPE playerType, const FAbilData& addAbil);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerGrowUp(E_PLAYER_TYPE playerType, int32 lvUp, bool isAutoParamUp);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayerGetAbilityBlankNoApply(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayerGetAbilityBlank(E_PLAYER_TYPE playerType, E_ABILITY_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void PayerForceSpecifiedLevel(E_PLAYER_TYPE playerType, int32 Level, bool isAutoParamUp);
    
    UFUNCTION(BlueprintCallable)
    static void PartyAllCure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PartnerIsBattleUnit(E_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable)
    static void PartnerDataSetGlobalFlag(E_PARTNER_ID partnerID, uint8 Value, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void OffsetGuestLevel(FNkmData& NkmData, const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool NkmSkillGet(int32 NkmIndex, int32 SkillId, E_LEARN_SKILL_TYPE learnType);
    
    UFUNCTION(BlueprintCallable)
    static void NkmSetFriendshipLv(int32 NkmIndex, uint8 Level);
    
    UFUNCTION(BlueprintCallable)
    static void NkmSetBtlEntryCnt(int32 NkmIndex, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    static bool NkmParamBuildUp(int32 NkmIndex, E_ABILITY_TYPE Type, int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NkmIsUseableSkill(int32 NkmIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool NkmIsHaveSkill(int32 NkmIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NkmIsBattleUnit(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NkmIndexIsValid(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void NkmGrowUp(int32 NkmIndex, int32 lvUp);
    
    UFUNCTION(BlueprintCallable)
    static int32 NkmGetAbilityBlankNoApply(int32 NkmIndex, E_ABILITY_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 NkmGetAbilityBlank(int32 NkmIndex, E_ABILITY_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void NkmDataSetGlobalFlag(int32 NkmIndex, uint8 Value, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void NkmDataInit(int32 NkmIndex, int32 DevilID, E_NKM_INIT_TYPE initType, bool isOriginalSummon);
    
    UFUNCTION(BlueprintCallable)
    static void NkmDataClearAll();
    
    UFUNCTION(BlueprintCallable)
    static void NkmAddBtlEntryCnt(int32 NkmIndex, uint8 Add);
    
    UFUNCTION(BlueprintCallable)
    static void MakeupPartnerData();
    
    UFUNCTION(BlueprintCallable)
    static bool LoadGuestParameter(const int32 DevilID, FNkmData& outGuestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidNkmEntryList(int32 entryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShiseijyoYokoByNkmIndex(const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShiseijyoYoko(const int32 InDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShiseijyoTaoByNkmIndex(const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShiseijyoTao(const int32 InDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScenarioSkillSlotNkm(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScenarioSkillSlotDevil(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNahobino();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuest(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistShiseijoBackupData(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEntryNkm(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableMultiMagatsuhiSkillByPartyData(int32 SkillId, int32 useDevilId, bool checkDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableMultiMagatsuhiSkillByDevilIdList(int32 SkillId, const TArray<int32>& devilIdList, int32 useDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDouble();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBoyExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBonusDevil(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAogamiExist();
    
    UFUNCTION(BlueprintCallable)
    static void IncShiseijoWinCount(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpliftingGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniquSkillInfoReductionRelicCollectionTime(int32& OutCharaNum, int32& OutSkillValue);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetStockNkmIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStockMaxEnum();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStockMax();
    
    UFUNCTION(BlueprintCallable)
    static uint8 getSotrWindowOrder(uint8 sortType);
    
    UFUNCTION(BlueprintCallable)
    static int32 getSotrWindowIndex(uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkillTekiseiParameter(const TArray<int32>& SkillTekisei, int32 SkillId, E_SKILL_TEKISEI_CATEGORY eCategory, int32 eEftType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSkillTekiseiLimitByCategory(E_SKILL_TEKISEI_CATEGORY InCategory, int32 InLimitType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiseijyoNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiseijoWinCount(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetScenarioDevilSkillSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetReassignablePlayerParamPoint();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPriorityOfDefenceAishou(int32 InDevilId, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerUpLevel(E_PLAYER_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerUniqueSkillId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetPlayerUnionLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerSkillValidNum(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerSkillTekisei(E_SKILL_TEKISEI_CATEGORY Type, int32 InKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerSkillSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerSkillSlot(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerSkillCost(E_PLAYER_TYPE playerType, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerPanelPositionInBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerNextExp_Level(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerNextExp(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerMP(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMAGGaugeStockNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMAGGaugeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMAGGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerLevel(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerHP(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerDevilSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 InKind);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetPlayerDevilIndexAfterBattle(int32 args32Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerDevilBuildSkillTekiseiMax(int32 InNkmIndex, int32 InType, E_SKILL_TEKISEI_CATEGORY Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharData GetPlayerData(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerBuildSkillTekiseiMax(int32 InType, E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerAutoSkillSlot(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FAddGetSkill> GetPlayerAddGetSkillArray(E_PLAYER_TYPE playerType, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerAddGetSkill(E_PLAYER_TYPE playerType, int32 playerLevel);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerAbilityDataByAbilityName(E_ABILITYNAME_TYPE InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartySkillSource();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPartyMakkaMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyMakka();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPartnerData GetPartnerData(E_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<E_PARTNER_ID> GetPartnerBattleUnitList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmUniqueSkillId(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmSkillValidNum(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmSkillTekisei(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmSkillSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmSkillSlot(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmSkillList(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmSkillCost_NkmIndex(int32 NkmIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmNextExp_Level(int32 NkmIndex, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmNextExp(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmMP(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNkmLevel(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmIndexByEntryList(int32 entryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmIndexByDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmIndexByAttrTypeArray(uint8 Attr1, uint8 Attr2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmIndexByAttrType(uint8 Attr1, uint8 Attr2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmHP(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmFriendshipLv(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetNkmEntryListArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmdUpLevel(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmDefenceAishou(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNkmData GetNkmData(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmBtlEntryCnt(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmBattleUnitNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetNkmBattleUnitList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmAutoSkillSlot(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmAutoSkillList(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetNkmAllSkillList(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNkmAddGetSkill(int32 NkmIndex, int32 nkmLevel);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNkmAbilityDataByAbilityName(int32 InNkmIndex, E_ABILITYNAME_TYPE InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAbilData GetNkmAbility(const FNkmData& Data, bool NewIsNahobino);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetMultiMagatsuhiSkillUsageNkmIndexArray(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMultiMagatsuhiSkillList(TArray<int32>& OutSkillList, int32 InDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_HERO_KIND GetMainHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLevelMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHeroStatFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGuestSkillSlotNum(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGuestNum();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalEntryId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEntryNkmNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEntryNkmMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetBtlNkmIndexArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBonusDevilSkillSlotNum();
    
    UFUNCTION(BlueprintCallable)
    static int32 EntryNkmBlankForFusion(int32 DevilID, bool bOpenAnalyze, bool isOriginalSummon);
    
    UFUNCTION(BlueprintCallable)
    static int32 EntryNkmBlank(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static int32 EntryMaouBlank(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void DelHeroStatFlag(E_HERO_STAT stat);
    
    UFUNCTION(BlueprintCallable)
    static void DeletePlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable)
    static void DeletePlayerBst(E_PLAYER_TYPE playerType, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteNkmBst(int32 NkmIndex, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugPlayerSetLevel(E_PLAYER_TYPE plyType, int32 Level, bool takeOver_skill, bool takeOver_tekisei, bool takeOver_param);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugNkmSetParameter(int32 NkmIndex, E_ABILITY_TYPE Type, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugNkmSetLevel(int32 NkmIndex, int32 Level, bool takeOver_skill, bool takeOver_tekisei, bool takeOver_param);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugNkmSetBonusDevilFlag(int32 NkmIndex, int32 Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Const_GetNkmEntryMax();
    
    UFUNCTION(BlueprintCallable)
    static bool ClearStockNkmIndex();
    
    UFUNCTION(BlueprintCallable)
    static void ClearShiseijoBackupData(const E_SHISEIJO& shiseijo);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPlayerSkill(E_PLAYER_TYPE playerType, int32 skillSlot);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNkmBattleUnit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckPrimeMinisterNahobino();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckPlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckPlayerBst(E_PLAYER_TYPE playerType, int32 bst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckPartyAllCure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CheckNkmSkillSlotNum(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNkmBst(int32 NkmIndex, int32 bst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckHeroStatFlag(E_HERO_STAT stat);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeNkmIndexArray(TArray<uint8> indexArray);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeBtlNkmIndexArray(TArray<uint8> indexArray);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeCorrectedSkillTekiseiForPlayerDevil(int32 InNkmIndex, E_SKILL_TEKISEI_CATEGORY InType, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeCorrectedSkillTekiseiForPlayer(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlayerDevilBuildSkillTekisei(int32 nakamaIndex, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPlayerBuildSkillTekisei(E_PLAYER_TYPE playerType, E_SKILL_TEKISEI_CATEGORY Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUpliftingGauge(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerMP(E_PLAYER_TYPE playerType, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerMAGGauge(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerHP(E_PLAYER_TYPE playerType, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerExp(E_PLAYER_TYPE playerType, int32 getExp);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerDeffenceAishou(E_PLAYER_TYPE playerType, E_ATTRIBUTE_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerBstOne(E_PLAYER_TYPE playerType, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerBst(E_PLAYER_TYPE playerType, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerAbility(E_PLAYER_TYPE playerType, E_PARAM_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddPartySkillSource(int32 Source);
    
    UFUNCTION(BlueprintCallable)
    static void AddPartyMakka(int32 Makka);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmMP(int32 NkmIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmHP(int32 NkmIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmExp(int32 NkmIndex, int32 getExp);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmDeffenceAishou(int32 NkmIndex, E_ATTRIBUTE_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmBstOne(int32 NkmIndex, E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable)
    static void AddNkmBst(int32 NkmIndex, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    static void AddHeroStatFlag(E_HERO_STAT stat);
    
};

