#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "BtlParty.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_BAD_STATUS.h"
#include "E_BTL_AI_AREA.h"
#include "E_BTL_AI_TAR.h"
#include "E_BTL_CNT.h"
#include "E_BTL_SIDE.h"
#include "E_EFFICACY_BD.h"
#include "E_SKILL_TARGET.h"
#include "E_SKILL_TYPE.h"
#include "BattleAICommandBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattleAICommandBase : public UActorComponent {
    GENERATED_BODY()
public:
    UBattleAICommandBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool OptUpLifting_TurnEnd(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetEmptyPosSummonDevilId(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, bool isExclusionLeader);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetElectrificationNum();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Chk_SummonPositionDevilID(int32 summonIndex, int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    bool Chk_BattleEventFlag2();
    
    UFUNCTION(BlueprintCallable)
    bool Chk_BattleEventFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayerSidePartyData(const FBtlParty& party, const E_BTL_SIDE& targetSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExistPartyData(const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnemySidePartyData(const FBtlParty& party, const E_BTL_SIDE& targetSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouPlus(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouNotPlus(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouNotMinus(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouNotFlat(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouMinus(int32 targetAishou);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAishouFlat(int32 targetAishou);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetValidSkill(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarTetra(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarNotTetra(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarNotMaka(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarNotGuard(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarMaka(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarGuard(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetWeak(int32 actorIndex, const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetSmart(int32 actorIndex, const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetSelfSideOther(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 selfIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetSelf(const FBtlParty& Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetRecCritical(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetRecCounter(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetRandom(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetPartyIndex(const TArray<FBtlParty>& partyArray, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetNotPartyIndex(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetNotID(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetNotCritical(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetNotBadStatus2(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 bst, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetNotBadStatus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetID(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPRatioMIN(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPRatioMAX(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPPerc(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPMIN(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPMAXn(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHPMAX(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHojoMIN(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 efficacy);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHojoMAX(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 efficacy);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetHojoAI(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetBadStatus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouReflection(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouPlus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouNotReflection(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouNotPlus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouNotMinus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouNotFlat(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouMinus(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAishouFlat(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 aishou);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTargetAI(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAutoBattle(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAllEnemy();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAishouNotBlock(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAishouNotAbsorption(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAishouBlock(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetTarAishouAbsorption(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetRenzokuSkill(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_SetProvoke(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseTar_Provoke(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide);
    
    UFUNCTION(BlueprintCallable)
    void AIBaseTar_GetTargetSideArea(E_BTL_SIDE actorSide, E_SKILL_TARGET SkillTarget, E_BTL_SIDE& targetSide, E_BTL_AI_AREA& Area);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AIBaseTar_Common(int32 actorIndex, E_BTL_AI_TAR Type, int32 Value, int32 Value2);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_CNT AIBaseGetEfficacyToBtlCnt(E_EFFICACY_BD efficacy);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_CNT AIBaseGetBadStatusToBtlCnt(E_BAD_STATUS bst);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_UpliftRate(bool isEnemySurpriseTurn);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_TarPLChohatsu_ENAnalyze();
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_SkillIDBySkillType(int32 myPartyIndex, E_SKILL_TYPE skillType);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLValidSkillNum(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLValidAttrNum(E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLShieldNum(E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLPrvoke();
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLNumValidSkillENAnalyze2(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLNumValidSkillENAnalyze(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLNumValidAttrENAnalyze2(E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLNumValidAttrENAnalyze(E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouReflection(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouPlus(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouMinus(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouFlat(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouBlock(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PLAishouAbsorption(E_ATTRIBUTE_TYPE N);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_PhysicalChargeEffectiveSkillID(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_MyDmgAishouMinusBefTurn(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_MagicChargeEffectiveSkillID(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_MagatsuhiDevilNum();
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_HPHealSkillID(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_HojoSkillValidTarget(int32 myPartyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_HojoSkillIDNotCharge(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_ChargeSkillID(int32 myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AIBaseGet_AttackSkillID(int32 myPartyIndex, bool isAll);
    
    UFUNCTION(BlueprintCallable)
    TArray<E_ATTRIBUTE_TYPE> AIBaseGet_AishouChangeThisTurn(const int32& myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<E_ATTRIBUTE_TYPE> AIBaseGet_AishouChangeAll(const int32& myPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_VailSkillDevilID_ENAnalyze2(int32 DevilID, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_VailSkillDevilID_ENAnalyze(int32 DevilID, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_VailAttrDevilID_ENAnalyze2(int32 DevilID, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_VailAttrDevilID_ENAnalyze(int32 DevilID, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLValidSkillID(int32 DevilID, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLValidAttr(int32 DevilID, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLTetra();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLNotTetra();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLNotMakra();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLNotGuard();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLMakra();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLGuard();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLChohatsu();
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLAishouReflection(int32 N);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLAishouBlock(int32 N);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_PLAishouAbsorption(int32 N);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_MyUsedSkillIDTurn(int32 myPartyIndex, int32 SkillId, int32 Turn);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_MyDmgAishouBefTurn(int32 myPartyIndex, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_MyAtcReflectionBefTurn(int32 myPartyIndex, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_MyAtcBlockBefTurn(int32 myPartyIndex, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_MyAtcAbsorptionBefTurn(int32 myPartyIndex, E_ATTRIBUTE_TYPE attr);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_ENUsedSkillIDTurn(int32 SkillId, int32 Turn);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_ENTetraID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    bool AIBaseChk_ENMakraID(int32 DevilID);
    
};

