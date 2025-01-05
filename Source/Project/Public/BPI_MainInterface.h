#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BtlDescData.h"
#include "BtlGardenPointData.h"
#include "BtlParty.h"
#include "BtlSummonData.h"
#include "EAchievementFlag.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "E_BTL_AI_TAR.h"
#include "E_BTL_REFLECT_RES_TYPE.h"
#include "E_BTL_SIDE.h"
#include "E_BTL_STAT.h"
#include "E_BTL_STATE_DEBUG.h"
#include "E_BTL_STATE_DEBUG_2.h"
#include "E_BTL_STAT_2.h"
#include "E_BTL_STEP.h"
#include "E_BTL_TUTORIAL.h"
#include "E_BTL_TUTORIAL_TYPE.h"
#include "E_SKILL_ICON.h"
#include "SkillBaseData.h"
#include "BPI_MainInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_MainInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_MainInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void BI_UpdateMagatsuhiTalkFailedBlock() PURE_VIRTUAL(BI_UpdateMagatsuhiTalkFailedBlock,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_UniqueSkill_GetMagatsuhiGauge() PURE_VIRTUAL(BI_UniqueSkill_GetMagatsuhiGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_UniqueSkill_EqualCheckTurnEnd(const E_AUTO_SKILL_EXTRA_EFFECT& uniqueSkillEffect) PURE_VIRTUAL(BI_UniqueSkill_EqualCheckTurnEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_AddPressIconNextTurn(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) PURE_VIRTUAL(BI_UniqueSkill_AddPressIconNextTurn,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_UniqueSkill_AddPressIconHalfNextTurn(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) PURE_VIRTUAL(BI_UniqueSkill_AddPressIconHalfNextTurn,);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBtlSummonData> BI_ShuffleSummonData(TArray<FBtlSummonData> summonData) PURE_VIRTUAL(BI_ShuffleSummonData, return TArray<FBtlSummonData>(););
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetUniqueSkillEfficacy_forInfo(int32 partyIndex, UPARAM(Ref) TArray<E_AUTO_SKILL_EXTRA_EFFECT>& uniqueSkillType) PURE_VIRTUAL(BI_SetUniqueSkillEfficacy_forInfo,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetTutorialDoneFlag(const E_BTL_TUTORIAL_TYPE Type) PURE_VIRTUAL(BI_SetTutorialDoneFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SettingEnemyMaxLevel(const int32 Level) PURE_VIRTUAL(BI_SettingEnemyMaxLevel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SettingEnemyListMaxLevel() PURE_VIRTUAL(BI_SettingEnemyListMaxLevel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPressIconIncDec(int32 Num, E_BTL_SIDE side) PURE_VIRTUAL(BI_SetPressIconIncDec,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPressIconDel(bool isDel, E_BTL_SIDE side) PURE_VIRTUAL(BI_SetPressIconDel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetPressIconAddNum(int32 Num, E_BTL_SIDE side) PURE_VIRTUAL(BI_SetPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_WinRenzoku(UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_WinRenzoku,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_WeakCount(const int32& srcPartyIndex, const bool& isWeak, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_WeakCount,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_UseMagatsuhiSkillCount(const int32& srcPartyIndex, const FSkillBaseData& useSkillData, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_UseMagatsuhiSkillCount,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_MissBlockRefAbsCount(const int32& dstPartyIndex, const E_BTL_REFLECT_RES_TYPE& resType, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_MissBlockRefAbsCount,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_Kill(const int32& srcPartyIndex, const int32& dstPartyIndex, const bool& IsDead, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_Kill,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SetAchievements_Damage(const int32& srcPartyIndex, const int32& Damage, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) PURE_VIRTUAL(BI_SetAchievements_Damage,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_SaveTsukuyomiHP() PURE_VIRTUAL(BI_SaveTsukuyomiHP,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_RetrieveUniqueSkillEfficacy_forInfo(int32 partyIndex, UPARAM(Ref) TArray<E_AUTO_SKILL_EXTRA_EFFECT>& uniqueSkillType) PURE_VIRTUAL(BI_RetrieveUniqueSkillEfficacy_forInfo, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_OpenAnalyzeDeadWithBoss(int32 dstIndex) PURE_VIRTUAL(BI_OpenAnalyzeDeadWithBoss,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_MakeupTutorialData(const E_BTL_TUTORIAL_TYPE Type) PURE_VIRTUAL(BI_MakeupTutorialData,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsMagatsuhiTalkFailedBlock() PURE_VIRTUAL(BI_IsMagatsuhiTalkFailedBlock, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_IsBossRushChallengeMode() PURE_VIRTUAL(BI_IsBossRushChallengeMode, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual E_BTL_STEP BI_GetStep() PURE_VIRTUAL(BI_GetStep, return E_BTL_STEP::E_BTL_STEP_NONE;);
    
    UFUNCTION(BlueprintCallable)
    virtual float BI_GetRenzokuEncountResultBonus() PURE_VIRTUAL(BI_GetRenzokuEncountResultBonus, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetOverwriteSkillInfoID(const int32 SkillId) PURE_VIRTUAL(BI_GetOverwriteSkillInfoID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBtlGardenPointData BI_GetGardenPointData() PURE_VIRTUAL(BI_GetGardenPointData, return FBtlGardenPointData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<E_SKILL_ICON> BI_GetDebugSkillSelectIconArray() PURE_VIRTUAL(BI_GetDebugSkillSelectIconArray, return TArray<E_SKILL_ICON>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<int32> BI_GetDebugSkillList() PURE_VIRTUAL(BI_GetDebugSkillList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_GetBossRushEventEncountID() PURE_VIRTUAL(BI_GetBossRushEventEncountID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_EncountIsRoomBoss() PURE_VIRTUAL(BI_EncountIsRoomBoss, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_EncountIsNotEscape() PURE_VIRTUAL(BI_EncountIsNotEscape, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_EncountIsMagatsukaSpawn() PURE_VIRTUAL(BI_EncountIsMagatsukaSpawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 BI_EncountIsEvent() PURE_VIRTUAL(BI_EncountIsEvent, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBattleFlag2(E_BTL_STAT_2 Value) PURE_VIRTUAL(BI_DelBattleFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBattleFlag(E_BTL_STAT Value) PURE_VIRTUAL(BI_DelBattleFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) PURE_VIRTUAL(BI_DelBattleDebugFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBattleDebugFlag(E_BTL_STATE_DEBUG Value) PURE_VIRTUAL(BI_DelBattleDebugFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearUniqueSkillEfficacy_forInfo(int32 partyIndex) PURE_VIRTUAL(BI_ClearUniqueSkillEfficacy_forInfo,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearSavedTsukuyomiHP() PURE_VIRTUAL(BI_ClearSavedTsukuyomiHP,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearPressIconAddNum(E_BTL_SIDE side) PURE_VIRTUAL(BI_ClearPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_ClearActionPreParam(bool is_counter) PURE_VIRTUAL(BI_ClearActionPreParam,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CleanupTutorialData() PURE_VIRTUAL(BI_CleanupTutorialData,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckTutorial(const E_BTL_TUTORIAL tutorial) PURE_VIRTUAL(BI_CheckTutorial, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_CheckEnemyAttackType() PURE_VIRTUAL(BI_CheckEnemyAttackType,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckDebugSkillSelectIcon() PURE_VIRTUAL(BI_CheckDebugSkillSelectIcon, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBattleFlag2(E_BTL_STAT_2 Value) PURE_VIRTUAL(BI_CheckBattleFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBattleFlag(E_BTL_STAT Value) PURE_VIRTUAL(BI_CheckBattleFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) PURE_VIRTUAL(BI_CheckBattleDebugFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBattleDebugFlag(E_BTL_STATE_DEBUG Value) PURE_VIRTUAL(BI_CheckBattleDebugFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_BattleSeqStart(FBtlDescData Desc) PURE_VIRTUAL(BI_BattleSeqStart,);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<uint8> BI_AIBaseTar_SetTargetSelfSideOther(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 selfIndex) PURE_VIRTUAL(BI_AIBaseTar_SetTargetSelfSideOther, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<uint8> BI_AIBaseTar_SetTargetSelf(const FBtlParty& Actor) PURE_VIRTUAL(BI_AIBaseTar_SetTargetSelf, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<uint8> BI_AIBaseTar_Common(int32 actorIndex, E_BTL_AI_TAR Type, int32 Value, int32 Value2) PURE_VIRTUAL(BI_AIBaseTar_Common, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddPressIconAddNum(int32 Num, E_BTL_SIDE side) PURE_VIRTUAL(BI_AddPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBattleFlag2(E_BTL_STAT_2 Value) PURE_VIRTUAL(BI_AddBattleFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBattleFlag(E_BTL_STAT Value) PURE_VIRTUAL(BI_AddBattleFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) PURE_VIRTUAL(BI_AddBattleDebugFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBattleDebugFlag(E_BTL_STATE_DEBUG Value) PURE_VIRTUAL(BI_AddBattleDebugFlag,);
    
};

