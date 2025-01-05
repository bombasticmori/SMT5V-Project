#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BtlCharData.h"
#include "BtlCommand.h"
#include "BtlParty.h"
#include "BtlPrevTurnInfo.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "E_BTL_CHAR_TYPE.h"
#include "E_BTL_CNT.h"
#include "E_BTL_COMM_TYPE.h"
#include "E_BTL_SIDE.h"
#include "E_KUISHIBARI_LEVEL.h"
#include "BPI_PTMemDataInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_PTMemDataInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_PTMemDataInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void BI_UpdateAbsKuishibari(const int32& partyIndex) PURE_VIRTUAL(BI_UpdateAbsKuishibari,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_SetAddInfo(const int32& srcIndex, const int32& dstIndex, const E_AUTO_SKILL_EXTRA_EFFECT& SkillExtraEffect) PURE_VIRTUAL(BI_UniqueSkill_SetAddInfo,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_GetCureTurnStart(const int32& partyIndex, int32& outCureHP, int32& outCureMP, int32& outCureBst) PURE_VIRTUAL(BI_UniqueSkill_GetCureTurnStart,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_GetCureTurnEnd(const int32& partyIndex, int32& outCureHP, int32& outCureMP, int32& outCureBst) PURE_VIRTUAL(BI_UniqueSkill_GetCureTurnEnd,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_UniqueSkill_GetCureMPMagatsuhiGaugeMax(const int32& partyIndex) PURE_VIRTUAL(BI_UniqueSkill_GetCureMPMagatsuhiGaugeMax, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_GetCureActionEnd(const int32& partyIndex, int32 reserveDeadPartyIndex, bool isAllAction, bool isDeadOnly, int32& out_CureHP, int32& outCureMP, int32& outCureBst) PURE_VIRTUAL(BI_UniqueSkill_GetCureActionEnd,);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_UniqueSkill_GetCheatingRate(const E_BTL_SIDE& side) PURE_VIRTUAL(BI_UniqueSkill_GetCheatingRate, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UniqueSkill_CheckChaosRuler(const int32& partyIndex) PURE_VIRTUAL(BI_UniqueSkill_CheckChaosRuler, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetUplifting(int32 partyIndex, bool Uplifting) PURE_VIRTUAL(BI_SetUplifting,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetUniqueSkillParty(const int32& partyIndex) PURE_VIRTUAL(BI_SetUniqueSkillParty,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevTurnInfoWeakDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) PURE_VIRTUAL(BI_SetPrevTurnInfoWeakDamaged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevTurnInfoRefAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) PURE_VIRTUAL(BI_SetPrevTurnInfoRefAttr,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevTurnInfoBlockAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) PURE_VIRTUAL(BI_SetPrevTurnInfoBlockAttr,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevTurnInfoAttrDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) PURE_VIRTUAL(BI_SetPrevTurnInfoAttrDamaged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevTurnInfoAbsAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) PURE_VIRTUAL(BI_SetPrevTurnInfoAbsAttr,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevCommand(int32 partyIndex) PURE_VIRTUAL(BI_SetPrevCommand,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPoisonDamageRate(int32 partyIndex, float rate) PURE_VIRTUAL(BI_SetPoisonDamageRate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetNowCommandVarious(E_BTL_COMM_TYPE comm_type, int32 partyIndex, int32 n1, int32 n2) PURE_VIRTUAL(BI_SetNowCommandVarious,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetNowCommandSetSkill(int32 partyIndex, int32 SkillId, int32 target) PURE_VIRTUAL(BI_SetNowCommandSetSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetNowCommandSetAttack(int32 partyIndex, int32 target) PURE_VIRTUAL(BI_SetNowCommandSetAttack,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetNowCommand(int32 partyIndex, FBtlCommand Data) PURE_VIRTUAL(BI_SetNowCommand,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetKuiLevel(int32 partyIndex, E_KUISHIBARI_LEVEL Level) PURE_VIRTUAL(BI_SetKuiLevel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetHPUpValueUI(int32 partyIndex, int32 hpUpValue) PURE_VIRTUAL(BI_SetHPUpValueUI,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetHPUpValue(int32 partyIndex, int32 hpUpValue) PURE_VIRTUAL(BI_SetHPUpValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetHomeTransform(int32 partyIndex, FTransform Transform) PURE_VIRTUAL(BI_SetHomeTransform,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetHitOffset(int32 partyIndex, float Offset) PURE_VIRTUAL(BI_SetHitOffset,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetElectrification(int32 partyIndex, bool Electrification) PURE_VIRTUAL(BI_SetElectrification,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetDown(int32 partyIndex, bool Down) PURE_VIRTUAL(BI_SetDown,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetCureMPValue(int32 partyIndex, int32 MPValue) PURE_VIRTUAL(BI_SetCureMPValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetCureHPValue(int32 partyIndex, int32 HPValue) PURE_VIRTUAL(BI_SetCureHPValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetCounterSkill(int32 partyIndex, int32 SkillId) PURE_VIRTUAL(BI_SetCounterSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetCounterAutoSkill(int32 partyIndex, int32 SkillId) PURE_VIRTUAL(BI_SetCounterAutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetCharmSkillID(const int32& partyIndex, const int32& SkillId) PURE_VIRTUAL(BI_SetCharmSkillID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetBossFlagDeadEffectOff(const int32& dstPartyIndex) PURE_VIRTUAL(BI_SetBossFlagDeadEffectOff,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAidCounterMin(int32 partyIndex, E_BTL_CNT Type) PURE_VIRTUAL(BI_SetAidCounterMin,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) PURE_VIRTUAL(BI_SetAidCounter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SaveNowHPAll() PURE_VIRTUAL(BI_SaveNowHPAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SaveNowHP(const int32& partyIndex) PURE_VIRTUAL(BI_SaveNowHP,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ResetSkillTekisei(const int32& partyIndex) PURE_VIRTUAL(BI_ResetSkillTekisei,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_ModeChange(const int32 partyIndex, const int32 afterDevilID) PURE_VIRTUAL(BI_ModeChange, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_MaxSkillTekisei(const int32& partyIndex) PURE_VIRTUAL(BI_MaxSkillTekisei,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsUplifting(int32 partyIndex) PURE_VIRTUAL(BI_IsUplifting, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsInField(int32 partyIndex) PURE_VIRTUAL(BI_IsInField, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsHeroIndex(const int32& party_index) PURE_VIRTUAL(BI_IsHeroIndex, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsHaveAutoSkillExtraEffect(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value) PURE_VIRTUAL(BI_IsHaveAutoSkillExtraEffect, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsGuest(const int32 partyIndex) PURE_VIRTUAL(BI_IsGuest, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsExist(int32 partyIndex) PURE_VIRTUAL(BI_IsExist, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsElectrification(int32 partyIndex) PURE_VIRTUAL(BI_IsElectrification, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsDown(int32 partyIndex) PURE_VIRTUAL(BI_IsDown, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsDead(int32 partyIndex) PURE_VIRTUAL(BI_IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsCurrentCommandUseGodSkillSummon() PURE_VIRTUAL(BI_IsCurrentCommandUseGodSkillSummon, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_IncDeadNum(const E_BTL_SIDE& side) PURE_VIRTUAL(BI_IncDeadNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetStartPartyIndexWhenPlayerTargetSelect(const int32& ActorPartyIndex, const int32& SkillId, const int32& ItemId) PURE_VIRTUAL(BI_GetStartPartyIndexWhenPlayerTargetSelect, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetSkillTekisei(const int32& partyIndex, const int32& SkillId) PURE_VIRTUAL(BI_GetSkillTekisei, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetSkillCostCore(int32 partyIndex, int32 SkillId) PURE_VIRTUAL(BI_GetSkillCostCore, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetSkillCost(int32 partyIndex, int32 SkillId) PURE_VIRTUAL(BI_GetSkillCost, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_SIDE BI_GetSide(int32 partyIndex) PURE_VIRTUAL(BI_GetSide, return E_BTL_SIDE::E_BTL_SIDE_PLAYER;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlPrevTurnInfo BI_GetPrevTurnInfo(const int32& partyIndex, const int32 turnIndex) PURE_VIRTUAL(BI_GetPrevTurnInfo, return FBtlPrevTurnInfo{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetPrevHPRatio(const int32& partyIndex) PURE_VIRTUAL(BI_GetPrevHPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBtlCommand> BI_GetPrevCommandTurn(int32 partyIndex, int32 Turn) PURE_VIRTUAL(BI_GetPrevCommandTurn, return TArray<FBtlCommand>(););
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlCommand BI_GetPrevCommand(int32 partyIndex, int32 commandIndex) PURE_VIRTUAL(BI_GetPrevCommand, return FBtlCommand{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FText BI_GetPartyName(const int32& partyIndex) PURE_VIRTUAL(BI_GetPartyName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlParty BI_GetPartyData(int32 partyIndex) PURE_VIRTUAL(BI_GetPartyData, return FBtlParty{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetNowHP(int32 partyIndex) PURE_VIRTUAL(BI_GetNowHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlCommand BI_GetNowCommand(int32 partyIndex) PURE_VIRTUAL(BI_GetNowCommand, return FBtlCommand{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetMPRatio(int32 partyIndex) PURE_VIRTUAL(BI_GetMPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetMaxHP(int32 partyIndex) PURE_VIRTUAL(BI_GetMaxHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetMagatsuhiSkill(const int32& partyIndex, const bool checkMultiSkill) PURE_VIRTUAL(BI_GetMagatsuhiSkill, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetKuishibariCureHP(int32 partyIndex, E_KUISHIBARI_LEVEL Level) PURE_VIRTUAL(BI_GetKuishibariCureHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_KUISHIBARI_LEVEL BI_GetKuiLevel(int32 partyIndex) PURE_VIRTUAL(BI_GetKuiLevel, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetKuiDeadStockPartyIndex() PURE_VIRTUAL(BI_GetKuiDeadStockPartyIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetHPUpValueUI(int32 partyIndex) PURE_VIRTUAL(BI_GetHPUpValueUI, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetHPUpValue(int32 partyIndex) PURE_VIRTUAL(BI_GetHPUpValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetHPRatio(int32 partyIndex) PURE_VIRTUAL(BI_GetHPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform BI_GetHomeTransform(int32 partyIndex) PURE_VIRTUAL(BI_GetHomeTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetHitOffset(int32 partyIndex) PURE_VIRTUAL(BI_GetHitOffset, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetHeroIndex() PURE_VIRTUAL(BI_GetHeroIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlParty BI_GetHeroData() PURE_VIRTUAL(BI_GetHeroData, return FBtlParty{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetEnemyUpliftingPartyIndex() PURE_VIRTUAL(BI_GetEnemyUpliftingPartyIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetCureMPValue(int32 partyIndex) PURE_VIRTUAL(BI_GetCureMPValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetCureHPValue(int32 partyIndex) PURE_VIRTUAL(BI_GetCureHPValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetCounterSkill(int32 partyIndex, bool IsElectrification, bool isUniqueSkillCounter, bool isAvoidCounter) PURE_VIRTUAL(BI_GetCounterSkill, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<E_BTL_CNT> BI_GetCondtionMapList(int32 partyIndex) PURE_VIRTUAL(BI_GetCondtionMapList, return TArray<E_BTL_CNT>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetCharmSkillID(const int32& partyIndex) PURE_VIRTUAL(BI_GetCharmSkillID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_CHAR_TYPE BI_GetCharaTypeDetail(int32 partyIndex) PURE_VIRTUAL(BI_GetCharaTypeDetail, return E_BTL_CHAR_TYPE::E_BTL_CHAR_EMPTY;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetCharaID(int32 partyIndex) PURE_VIRTUAL(BI_GetCharaID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlCharData BI_GetBtlCharaData(int32 partyIndex) PURE_VIRTUAL(BI_GetBtlCharaData, return FBtlCharData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetAutoSkillIncludedDefenceAishou(const int32& partyIndex) PURE_VIRTUAL(BI_GetAutoSkillIncludedDefenceAishou, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetAutoSkillExtraEffectValue(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) PURE_VIRTUAL(BI_GetAutoSkillExtraEffectValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetAutoSkillExtraEffectRate(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) PURE_VIRTUAL(BI_GetAutoSkillExtraEffectRate, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetAidCounter(int32 partyIndex, E_BTL_CNT Type) PURE_VIRTUAL(BI_GetAidCounter, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CureHPMPAutoSkill(int32 partyIndex) PURE_VIRTUAL(BI_CureHPMPAutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ConditionMapUpdate(int32 partyIndex) PURE_VIRTUAL(BI_ConditionMapUpdate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearNowCommand(int32 partyIndex) PURE_VIRTUAL(BI_ClearNowCommand,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearDeadNum() PURE_VIRTUAL(BI_ClearDeadNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearDeadCharaID() PURE_VIRTUAL(BI_ClearDeadCharaID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearCounter(const int32& partyIndex) PURE_VIRTUAL(BI_ClearCounter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearCharmSkillID(const int32& partyIndex) PURE_VIRTUAL(BI_ClearCharmSkillID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearBarrierAidCounter(int32 partyIndex) PURE_VIRTUAL(BI_ClearBarrierAidCounter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClampHP(int32 partyIndex, bool battleAfter) PURE_VIRTUAL(BI_ClampHP,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckUseMagatsuhiSkill(const int32& partyIndex, const int32& SkillId) PURE_VIRTUAL(BI_CheckUseMagatsuhiSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_KUISHIBARI_LEVEL BI_CheckUseKuiSkill(int32 partyIndex) PURE_VIRTUAL(BI_CheckUseKuiSkill, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBossFlagDeadEffect(const int32& dstPartyIndex) PURE_VIRTUAL(BI_CheckBossFlagDeadEffect, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_KUISHIBARI_LEVEL BI_BstDamageKuishibari(int32 partyIndex) PURE_VIRTUAL(BI_BstDamageKuishibari, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddPrevTurnInfoMinusDamageNum(const int32& partyIndex) PURE_VIRTUAL(BI_AddPrevTurnInfoMinusDamageNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddHPMP(int32 partyIndex, int32 InValue, bool isHP, bool isIgnoreDebugFlag) PURE_VIRTUAL(BI_AddHPMP,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddDeadCharID(const E_BTL_SIDE& side, const int32& partyIndex) PURE_VIRTUAL(BI_AddDeadCharID,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddCureMPValue(int32 partyIndex, int32 addValue) PURE_VIRTUAL(BI_AddCureMPValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddCureHPValue(int32 partyIndex, int32 addValue) PURE_VIRTUAL(BI_AddCureHPValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) PURE_VIRTUAL(BI_AddAidCounter,);
    
};

