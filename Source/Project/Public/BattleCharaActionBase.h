#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BtlActionStack.h"
#include "E_BAD_STATUS.h"
#include "E_BTL_ACT_STAT.h"
#include "E_BTL_DAMAGE_HIT_TYPE.h"
#include "E_BTL_PRESS_TYPE.h"
#include "E_BTL_REFLECT_RES_TYPE.h"
#include "E_BTL_UPLIFTING_TYPE.h"
#include "SkillActionDesc.h"
#include "TalkResultInfo.h"
#include "BattleCharaActionBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ABattleCharaActionBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlActionStack m_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillActionDesc m_SkillActionDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddMPCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BAD_STATUS m_MissByBadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_SelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_PRESS_TYPE m_NewPressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_BTL_UPLIFTING_TYPE> m_NewUpliftingTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CounterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_CounterIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PlayerDeadNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EnemyDeadNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsContinueUpdate;
    
    ABattleCharaActionBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<int32> UpdateDelElectrification();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UniqueSkill_CheckChargeDead(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SupportTsukuyomiSummon();
    
    UFUNCTION(BlueprintCallable)
    void SetWeakAutoBattleCommandAndTargetSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetUpliftingOffFlag(const int32 srcPartyIndex, const int32 dstPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillFunc();
    
    UFUNCTION(BlueprintCallable)
    void SetRenzokuSkillCommand(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyFunc();
    
    UFUNCTION(BlueprintCallable)
    void SetNewUpliftingType(int32 partyIndex, E_BTL_UPLIFTING_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    void SetNewPress(E_BTL_PRESS_TYPE press_type);
    
    UFUNCTION(BlueprintCallable)
    void SetHPRefList();
    
    UFUNCTION(BlueprintCallable)
    bool SetFlagCharmOrConfuse(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterTargetList();
    
    UFUNCTION(BlueprintCallable)
    bool SetCounterCommand(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleSkillCommandAndTargetSelect(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleCommandAndTargetSelect();
    
    UFUNCTION(BlueprintCallable)
    void SeqSkillFunc();
    
    UFUNCTION(BlueprintCallable)
    void SeqReadytFunc();
    
    UFUNCTION(BlueprintCallable)
    void SelectPressAndGauge(E_BTL_REFLECT_RES_TYPE resType, E_BTL_DAMAGE_HIT_TYPE DamageType, int32 srcIndex, int32 dstIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCounterIndex();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> MakeSummonAfterDevilList(TArray<int32> nowList, TArray<int32> summonList, TArray<int32> returnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeSkillReflectList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEscapeSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetReflectCharaList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHPRefListHP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCounterIndex();
    
    UFUNCTION(BlueprintCallable)
    void EndSelectorLabelCtrl();
    
    UFUNCTION(BlueprintCallable)
    void DelStatus(E_BTL_ACT_STAT InValue);
    
    UFUNCTION(BlueprintCallable)
    void ClearCounter(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckStatus(E_BTL_ACT_STAT InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNoRenzokuEncountByTalkEnd(const FTalkResultInfo& TalkResultInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHPRefListDead(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSummonTask(int32 targetIndex);
    
    UFUNCTION(BlueprintCallable)
    void BeginSelectorLabelCtrl(int32 BattleTempo);
    
    UFUNCTION(BlueprintCallable)
    void ApplySummonAfterPos(TMap<int32, FTransform> afterList, TArray<int32> summonList, TArray<int32> returnList);
    
    UFUNCTION(BlueprintCallable)
    void AddStatus(E_BTL_ACT_STAT InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddRenzokuSkillCount(const int32& srcIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddHPRefList(int32 partyIndex, int32 Value);
    
};

