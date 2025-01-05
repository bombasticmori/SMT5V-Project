#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnalyzeData.h"
#include "BtlParty.h"
#include "E_BAD_STATUS.h"
#include "E_BTL_BOSS_FLAG.h"
#include "E_BTL_CNT.h"
#include "E_BTL_PARTY_STAT.h"
#include "E_BTL_PARTY_STAT2.h"
#include "E_BTL_PRESS_TYPE.h"
#include "E_BTL_SIDE.h"
#include "E_BTL_UPLIFTING_TYPE.h"
#include "MagatsuhiDevilParamRate.h"
#include "PressIcon.h"
#include "BPI_PTUtilInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_PTUtilInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_PTUtilInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UseUpliftingGauge(E_BTL_SIDE side) PURE_VIRTUAL(BI_UseUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UpdateUseSkillArray() PURE_VIRTUAL(BI_UpdateUseSkillArray,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UpdateIsInFieldList(E_BTL_SIDE side) PURE_VIRTUAL(BI_UpdateIsInFieldList,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UpdateBossShareOpenAishou() PURE_VIRTUAL(BI_UpdateBossShareOpenAishou, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UpdateBossAishouTurnStart() PURE_VIRTUAL(BI_UpdateBossAishouTurnStart, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UpdateBossAishou() PURE_VIRTUAL(BI_UpdateBossAishou, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_TakeOverDefenceAishou() PURE_VIRTUAL(BI_TakeOverDefenceAishou,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SharedBossHPRate() PURE_VIRTUAL(BI_SharedBossHPRate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetUseSkill(int32 SkillId) PURE_VIRTUAL(BI_SetUseSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetUpliftingGauge(E_BTL_SIDE side, int32 Value) PURE_VIRTUAL(BI_SetUpliftingGauge,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPrevUpliftingGauge(const int32& Value) PURE_VIRTUAL(BI_SetPrevUpliftingGauge,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPressType(E_BTL_PRESS_TYPE pressType) PURE_VIRTUAL(BI_SetPressType,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetMitamaAnalyzeData(const int32& partyIndex) PURE_VIRTUAL(BI_SetMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetEnemyBattleIn(int32 targetIndex, int32 DevilID) PURE_VIRTUAL(BI_SetEnemyBattleIn,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetDeadParam(int32 partyIndex) PURE_VIRTUAL(BI_SetDeadParam,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetChkENTargetAllArray(bool isUse) PURE_VIRTUAL(BI_SetChkENTargetAllArray,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ReturnEnemy() PURE_VIRTUAL(BI_ReturnEnemy,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_OpenAnalyze_AutoSkill(const int32& partyIndex, const int32& SkillId) PURE_VIRTUAL(BI_OpenAnalyze_AutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_OpenAnalyze(const FBtlParty& party) PURE_VIRTUAL(BI_OpenAnalyze,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsUseUpliftingGauge(E_BTL_SIDE side) PURE_VIRTUAL(BI_IsUseUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsPressIcon() PURE_VIRTUAL(BI_IsPressIcon, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsCharge(const int32& partyIndex) PURE_VIRTUAL(BI_IsCharge, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetVirtualActOrder(int32 partyIndex) PURE_VIRTUAL(BI_GetVirtualActOrder, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetUpliftingGauge(E_BTL_SIDE side) PURE_VIRTUAL(BI_GetUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector BI_GetUnitAveLocation(E_BTL_SIDE side, FName SocketName) PURE_VIRTUAL(BI_GetUnitAveLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetSkillCureMPValueExpected(const int32 SkillId, const int32 UserIndex, const int32 targetIndex) PURE_VIRTUAL(BI_GetSkillCureMPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetSkillCureHPValueExpected(const int32 SkillId, const int32 UserIndex, const int32 targetIndex) PURE_VIRTUAL(BI_GetSkillCureHPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideListDevilIDList(E_BTL_SIDE side) PURE_VIRTUAL(BI_GetSideListDevilIDList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideListCondition(E_BTL_SIDE side, bool IsInField, bool isHitTarget, bool isDmgChara) PURE_VIRTUAL(BI_GetSideListCondition, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideIsTargetList(E_BTL_SIDE side) PURE_VIRTUAL(BI_GetSideIsTargetList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideIsStatList(E_BTL_SIDE side, E_BTL_PARTY_STAT stat) PURE_VIRTUAL(BI_GetSideIsStatList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideIsStat2List(E_BTL_SIDE side, E_BTL_PARTY_STAT2 stat) PURE_VIRTUAL(BI_GetSideIsStat2List, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBtlParty> BI_GetSideIsInFieldPartyData(E_BTL_SIDE side) PURE_VIRTUAL(BI_GetSideIsInFieldPartyData, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideIsInFieldList(E_BTL_SIDE side) PURE_VIRTUAL(BI_GetSideIsInFieldList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetSideIsBossFlagList(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag) PURE_VIRTUAL(BI_GetSideIsBossFlagList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetPrevUpliftingGauge() PURE_VIRTUAL(BI_GetPrevUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_PRESS_TYPE BI_GetPressType() PURE_VIRTUAL(BI_GetPressType, return E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FPressIcon BI_GetPressIcon() PURE_VIRTUAL(BI_GetPressIcon, return FPressIcon{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBtlParty> BI_GetPartyDataAll() PURE_VIRTUAL(BI_GetPartyDataAll, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetPartnerList() PURE_VIRTUAL(BI_GetPartnerList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetNowActNum(int32 partyIndex) PURE_VIRTUAL(BI_GetNowActNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FAnalyzeData BI_GetMitamaAnalyzeData(const int32& partyIndex) PURE_VIRTUAL(BI_GetMitamaAnalyzeData, return FAnalyzeData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FMagatsuhiDevilParamRate BI_GetMagatsuhiDevilParamRate() PURE_VIRTUAL(BI_GetMagatsuhiDevilParamRate, return FMagatsuhiDevilParamRate{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetItemlCureMPValueExpected(const int32 ItemId, const int32 UserIndex, const int32 targetIndex) PURE_VIRTUAL(BI_GetItemlCureMPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetItemlCureHPValueExpected(const int32 ItemId, const int32 UserIndex, const int32 targetIndex) PURE_VIRTUAL(BI_GetItemlCureHPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_SIDE BI_GetIndexSide(int32 partyIndex) PURE_VIRTUAL(BI_GetIndexSide, return E_BTL_SIDE::E_BTL_SIDE_PLAYER;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_CNT BI_GetGodSkillUpAidType() PURE_VIRTUAL(BI_GetGodSkillUpAidType, return E_BTL_CNT::E_BTL_CNT_DMG;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_CNT BI_GetGodSkillDownAidType() PURE_VIRTUAL(BI_GetGodSkillDownAidType, return E_BTL_CNT::E_BTL_CNT_DMG;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetGlobalActNum() PURE_VIRTUAL(BI_GetGlobalActNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetExistNum(const E_BTL_SIDE& side) PURE_VIRTUAL(BI_GetExistNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetEnemyPartyIndexWithDevilIDOrRootID(int32 DevilID) PURE_VIRTUAL(BI_GetEnemyPartyIndexWithDevilIDOrRootID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetEnemyPartyIndexWithDevilID(int32 DevilID) PURE_VIRTUAL(BI_GetEnemyPartyIndexWithDevilID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetBstNum(int32 partyIndex, E_BAD_STATUS bst) PURE_VIRTUAL(BI_GetBstNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetBattlePartyIndexByNkmIndex(int32 InNkmIndex, int32 InPlayerIndex, int32 InType) PURE_VIRTUAL(BI_GetBattlePartyIndexByNkmIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBtlParty> BI_GetAllIsInFieldPartyData(bool isTargetOnly) PURE_VIRTUAL(BI_GetAllIsInFieldPartyData, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetAllIsInFieldList() PURE_VIRTUAL(BI_GetAllIsInFieldList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetActPassNum(int32 partyIndex) PURE_VIRTUAL(BI_GetActPassNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_GetActCharmSkill(int32 partyIndex, int32& repair, TArray<uint8>& repairIndex, int32& aid, TArray<uint8>& aidIndex) PURE_VIRTUAL(BI_GetActCharmSkill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ExeMitamaAnalyzeData(const int32& partyIndex, const int32& useSkillId) PURE_VIRTUAL(BI_ExeMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_EscapeFailedForPlayer() PURE_VIRTUAL(BI_EscapeFailedForPlayer,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBossFlagPartyList(TArray<E_BTL_BOSS_FLAG> flagArray) PURE_VIRTUAL(BI_DelBossFlagPartyList,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CopyMitamaAnalyzeData(const int32& partyIndex, const FAnalyzeData& AnalyzeData) PURE_VIRTUAL(BI_CopyMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_ConstStockStart() PURE_VIRTUAL(BI_ConstStockStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_ConstStockNum() PURE_VIRTUAL(BI_ConstStockNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_ConstPartyMax() PURE_VIRTUAL(BI_ConstPartyMax, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_ConstEnemyStart() PURE_VIRTUAL(BI_ConstEnemyStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_ConstEnemyNum() PURE_VIRTUAL(BI_ConstEnemyNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearMitamaAnalyzeDataAll() PURE_VIRTUAL(BI_ClearMitamaAnalyzeDataAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearMitamaAnalyzeData(const int32& partyIndex) PURE_VIRTUAL(BI_ClearMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearActionParamAll() PURE_VIRTUAL(BI_ClearActionParamAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_ChkUseSkill(int32 Turn, int32 SkillId) PURE_VIRTUAL(BI_ChkUseSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_ChkENTargetAllArray(int32 Turn) PURE_VIRTUAL(BI_ChkENTargetAllArray, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckMitama(const int32& partyIndex) PURE_VIRTUAL(BI_CheckMitama, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckMaxUpliftingGauge(E_BTL_SIDE side) PURE_VIRTUAL(BI_CheckMaxUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckMagatsuhiDevil(const int32& partyIndex) PURE_VIRTUAL(BI_CheckMagatsuhiDevil, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckHaveSkill(const int32& partyIndex, const int32& SkillId) PURE_VIRTUAL(BI_CheckHaveSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckEnemyLoseBattleEnd() PURE_VIRTUAL(BI_CheckEnemyLoseBattleEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_CalcUpliftingGauge(E_BTL_UPLIFTING_TYPE Type) PURE_VIRTUAL(BI_CalcUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CalcMoonAgeTurn() PURE_VIRTUAL(BI_CalcMoonAgeTurn,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CalcAndApplyPressIcon(E_BTL_PRESS_TYPE press_type) PURE_VIRTUAL(BI_CalcAndApplyPressIcon,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddUpliftingGauge(E_BTL_SIDE side, int32 Value) PURE_VIRTUAL(BI_AddUpliftingGauge,);
    
};

