#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnalyzeData.h"
#include "BattleActorComponentBase.h"
#include "BtlCharData.h"
#include "BtlCommand.h"
#include "BtlCycle.h"
#include "BtlEncData.h"
#include "BtlParty.h"
#include "BtlPrevTurnInfo.h"
#include "E_ABILITY_TYPE.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "E_BAD_STATUS.h"
#include "E_BTL_BOSS_FLAG.h"
#include "E_BTL_CHAR_TYPE.h"
#include "E_BTL_CNT.h"
#include "E_BTL_COMM_TYPE.h"
#include "E_BTL_CYCLE_TYPE.h"
#include "E_BTL_PARTY_STAT.h"
#include "E_BTL_PARTY_STAT2.h"
#include "E_BTL_SIDE.h"
#include "E_KUISHIBARI_LEVEL.h"
#include "E_PLAYER_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "E_SUMMON_TYPE.h"
#include "MagatsuhiDevilParamRate.h"
#include "MagatsuhiDevilParamRateRow.h"
#include "MagatsuhiDevilSkillRow.h"
#include "MitamaAnalyzeData.h"
#include "PrevSkillArray.h"
#include "SkillBaseData.h"
#include "StealSkillRateTable.h"
#include "BattlePartySystemComponentBase.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattlePartySystemComponentBase : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBtlParty> m_PartyDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_InFieldPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_InFieldEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_InFieldPartnerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NowActorPartyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NowActorPartyIndexCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NowActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_OrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OrderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> m_PlayerSideAveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> m_EnemySideAveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_PlayerSideHomeLocationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_EnemySideHomeLocationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PlayerSideHomeAveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EnemySideHomeAveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GlobalActNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlCycle> m_CycleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AveLocationSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CommandAveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_ChkENTargetAllArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrevSkillArray> m_ChkENPrevSkillArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SaveHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_CNT m_GodSkillUpAidType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_CNT m_GodSkillDownAidType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TalkEntryDevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMitamaAnalyzeData> m_MitamaAnalyzeDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnalyzeData m_DummyAnalyzeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagatsuhiDevilParamRate m_MagatsuhiDevilParamRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MagatsuhiDevilSkillTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStealSkillRateTable> m_StealSkillRateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PartyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PlayerLoopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_EnemyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_EnemyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_EnemyLoopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PartnerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PartnerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_PartnerLoopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_StockStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_StockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_StockLoopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_CycleNum;
    
    UBattlePartySystemComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateUseSkillArray();
    
    UFUNCTION(BlueprintCallable)
    void UpdateUnitAveLocation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSlipCycle();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOrder();
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsInFieldList(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChkENTargetAllArray();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBossShareOpenAishou();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBossAishouTurnStart();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBossAishou();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBarrier(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAidCycle();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAid(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionAfter(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void UniqueSkill_SkillTekisei();
    
    UFUNCTION(BlueprintCallable)
    void UniqueSkill_ChangeTest(const int32& srcIndex, const int32& dstIndex);
    
    UFUNCTION(BlueprintCallable)
    void TakeOverDefenceAishou();
    
    UFUNCTION(BlueprintCallable)
    void SortOrder(int32 Start);
    
    UFUNCTION(BlueprintCallable)
    void SharedBossHPRatePartyIndex(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SharedBossHPRate();
    
    UFUNCTION(BlueprintCallable)
    void SetUseSkill(int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetUplifting(int32 partyIndex, bool Uplifting);
    
    UFUNCTION(BlueprintCallable)
    void SetUnit(int32 partyIndex, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void SetUniqueSkillParty(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStealSkillTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetReqCureBadStatus(int32 partyIndex, int32 status);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevTurnInfoWeakDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevTurnInfoRefAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevTurnInfoBlockAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevTurnInfoAttrDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevTurnInfoAbsAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevCommand(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPoisonDamageRate(int32 partyIndex, float rate);
    
    UFUNCTION(BlueprintCallable)
    void SetOrder();
    
    UFUNCTION(BlueprintCallable)
    void SetNowCommandVarious(E_BTL_COMM_TYPE comm_type, int32 partyIndex, int32 n1, int32 n2);
    
    UFUNCTION(BlueprintCallable)
    void SetNowCommandTarget(int32 partyIndex, int32 target);
    
    UFUNCTION(BlueprintCallable)
    void SetNowCommandSetSkill(int32 partyIndex, int32 SkillId, int32 target);
    
    UFUNCTION(BlueprintCallable)
    void SetNowCommandSetAttack(int32 partyIndex, int32 target);
    
    UFUNCTION(BlueprintCallable)
    void SetNowCommand(int32 partyIndex, FBtlCommand Data);
    
    UFUNCTION(BlueprintCallable)
    void SetNextOrder();
    
    UFUNCTION(BlueprintCallable)
    void SetNewPartyIn(int32 oldPartyIndex, int32& retValue, int32& DevilID, int32& newEntryIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMitamaAnalyzeData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMagatsuhiDevilSkillTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetMagatsuhiDevilParamRateTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetMagatsuhiDevilParamRate(const FMagatsuhiDevilParamRateRow& MagatsuhiDevilParamRateRow);
    
    UFUNCTION(BlueprintCallable)
    void SetKuiStop(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetKuiLevel(int32 partyIndex, E_KUISHIBARI_LEVEL Level);
    
    UFUNCTION(BlueprintCallable)
    void SetHPUpValueUI(int32 partyIndex, int32 hpUpValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHPUpValue(int32 partyIndex, int32 hpUpValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHPMP(int32 partyIndex, int32 InValue, bool isHP);
    
    UFUNCTION(BlueprintCallable)
    void SetHomeTransform(int32 partyIndex, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetHitOffset(int32 partyIndex, float Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyBattleIn(int32 targetIndex, int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void SetElectrification(int32 partyIndex, bool Electrification);
    
    UFUNCTION(BlueprintCallable)
    void SetDown(int32 partyIndex, bool Down);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadParam(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCureMPValue(int32 partyIndex, int32 MPValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCureHPValue(int32 partyIndex, int32 HPValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterSkill(int32 partyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterAutoSkill(int32 partyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetChkENTargetAllArray(bool isUse);
    
    UFUNCTION(BlueprintCallable)
    void SetCharmSkillID(const int32& partyIndex, const int32& SkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetBAtkExtendValue(int32 partyIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBadStatusOne(int32 partyIndex, E_BAD_STATUS status, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetBadStatus(int32 partyIndex, int32 status, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetAidCounterMin(int32 partyIndex, E_BTL_CNT Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAidCounterByGodParamterAid(int32 partyIndex, E_BTL_CNT Type, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetActEndByBadStatus(int32 partyIndex, bool isActEnd, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable)
    void SaveUserHP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveNowHPAll();
    
    UFUNCTION(BlueprintCallable)
    void SaveNowHP(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReturnEnemy();
    
    UFUNCTION(BlueprintCallable)
    void ResetSkillTekisei(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReqCureBadStatusSide();
    
    UFUNCTION(BlueprintCallable)
    void ReqCureBadStatus(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void Replace(int32 partyIndexA, int32 partyIndexB, E_SUMMON_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteCharge(int32 partyIndex, E_BTL_CNT aid_type);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteBadStatus(int32 partyIndex, int32 status);
    
    UFUNCTION(BlueprintCallable)
    void OpenAnalyze(const FBtlParty& party);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 OnBattleNkmNum();
    
    UFUNCTION(BlueprintCallable)
    int32 NkmStockIn(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ModeChange(const int32 partyIndex, const int32 afterDevilID);
    
    UFUNCTION(BlueprintCallable)
    void MaxSkillTekisei(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpPlayerSideBattlePartyData();
    
    UFUNCTION(BlueprintCallable)
    void MakeUpEnemySideBattlePartyData(FBtlEncData Data);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpCycle(E_BTL_CYCLE_TYPE cycleType);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBattlePartyPlayer(E_PLAYER_TYPE Type, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBattlePartyNkm(int32 DevilID, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpBattlePartyEnemy(int32 enemyID, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoopCycle(int32 addTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidIndex(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUplifting(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhisicsTaisei(const int32& partyIndex, const E_ATTRIBUTE_TYPE& attr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInField(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroIndex(const int32& party_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaveAutoSkillExtraEffect(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuest(const int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistInParty(int32 CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExist(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElectrification(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentCommandUseGodSkillSummon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossRushChallengeModeEnemy(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool HeroIsNahobino();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetVirtualActOrder(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUnitAveLocation(E_BTL_SIDE side, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetUnit(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTekiseiValue(int32 partyIndex, E_SKILL_TEKISEI_CATEGORY categ);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStealMagatsuhiSkill(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStartPartyIndexWhenPlayerTargetSelect(const int32& ActorPartyIndex, const int32& SkillId, const int32& ItemId);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetSlipDamage(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillTekisei(const int32& partyIndex, const int32& SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillCostCore(int32 partyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillCost(int32 partyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideListDevilIDList(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideListCondition(E_BTL_SIDE side, bool NewIsInField, bool isHitTarget, bool isDmgChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideIsTargetList(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideIsStatList(E_BTL_SIDE side, E_BTL_PARTY_STAT stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideIsStat2List(E_BTL_SIDE side, E_BTL_PARTY_STAT2 stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlParty> GetSideIsInFieldPartyData(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideIsInFieldList(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideIsBossFlagList(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_SIDE GetSideFromIndex(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSideActList_ToDie(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_SIDE GetSide(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSavedUserHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReqCureBadStatus(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    FBtlPrevTurnInfo GetPrevTurnInfo(const int32& partyIndex, const int32 turnIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrevHPRatio(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlCommand> GetPrevCommandTurn(int32 partyIndex, int32 Turn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlCommand GetPrevCommand(int32 partyIndex, int32 commandIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerOrder(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetPartyName(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyBlankIndex(E_BTL_CHAR_TYPE Type, bool isStock, bool isReader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPartnerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetOrderList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowMP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowHP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlCommand GetNowCommand(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowActNum(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMPRatio(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    FAnalyzeData GetMitamaAnalyzeData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHP(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetMagatsuhiSkill(const int32& partyIndex, const bool checkMultiSkill);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetMagatsuhiDevilMagatsuhiSkill(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetMagatsuhiDevilDropItemID(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    FAnalyzeData GetMagatsuhiDevilAnalyzeData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetKuishibariCureHP(int32 partyIndex, E_KUISHIBARI_LEVEL Level);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL GetKuiLevel(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_SIDE GetIndexSide(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHPUpValueUI(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHPUpValue(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPRatio(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHomeTransform(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomeTargetLocation(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetHitOffset(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeroIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlParty GetHeroData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_CNT GetGodSkillUpAidType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_CNT GetGodSkillDownAidType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalActNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyUpliftingPartyIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyPartyIndexWithDevilIDOrRootID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyPartyIndexWithDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnableFirstPartyIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCureMPValue(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCureHPValue(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCounterSkill(int32 partyIndex, bool NewIsElectrification, bool isUniqueSkillCounter, bool isAvoidCounter);
    
    UFUNCTION(BlueprintCallable)
    TArray<E_BTL_CNT> GetConditonMapList(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharmSkillID(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_CHAR_TYPE GetCharaTypeDetail(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaID(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetCanActList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlParty GetBtlPartyData(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlCharData GetBtlCharaData(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    FAnalyzeData GetBossRushChallengeModeAnalyzeData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattlePartyIndexByNkmIndex(int32 InNkmIndex, int32 InPlayerIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleEnemyPartyIndexByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleEnemyNumber();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetBarrierSkillIncludedDefenceAishou(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadStatusMPDamage(int32 partyIndex, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadStatusDamage(int32 partyIndex, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadStatusCounter(int32 partyIndex, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadStatus(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetAutoSkillIncludedDefenceAishou(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAutoSkillExtraEffectValue(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoSkillExtraEffectRate(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllOfBattleUnitList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAllIsTargetList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAllIsLogicList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlParty> GetAllIsInFieldPartyData(bool isTargetOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAllIsInFieldList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAidCounter(int32 partyIndex, E_BTL_CNT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActPassNum(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetActList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BAD_STATUS GetActEndByBadStatus(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetActCharmSkill(int32 partyIndex, int32& repair, TArray<uint8>& repairIndex, int32& aid, TArray<uint8>& aidIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExpendActionCycle(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteActEnd(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void EscapeFailedForPlayer();
    
    UFUNCTION(BlueprintCallable)
    void DownRecovery(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void DelIsInFieldList(E_BTL_SIDE side, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void DelFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelFlagAll(E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag2All(E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelBossFlagPartyList(TArray<E_BTL_BOSS_FLAG> flagArray);
    
    UFUNCTION(BlueprintCallable)
    void DelBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag);
    
    UFUNCTION(BlueprintCallable)
    void DelBadStatusTurnCounter(int32 partyIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugSetUniqueLevel(int32 partyIndex, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetTekisei(int32 partyIndex, E_SKILL_TEKISEI_CATEGORY Tekisei, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetSkill(int32 partyIndex, int32 Slot, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetParamter(int32 partyIndex, E_ABILITY_TYPE Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetLevel(int32 partyIndex, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAutoSkill(int32 partyIndex, int32 Slot, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAishou(int32 partyIndex, E_ATTRIBUTE_TYPE attr, int32 InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void CureHPMPAutoSkill(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void CopyMitamaAnalyzeData(const int32& partyIndex, const FAnalyzeData& AnalyzeData);
    
    UFUNCTION(BlueprintCallable)
    void ControlParameterBattleEndByStock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConstStockStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConstStockNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConstPartyMax();
    
    UFUNCTION(BlueprintCallable)
    void ConditionMapUpdate(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlipDamage(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearSavedUserHP();
    
    UFUNCTION(BlueprintCallable)
    void ClearReqCureBadStatus(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearRenzokuSkillParam();
    
    UFUNCTION(BlueprintCallable)
    void ClearPrevTurnInfo(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearPartyData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearParty(int32 targetIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearNowCommand(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMitamaAnalyzeDataAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearMitamaAnalyzeData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMagatsuhiSkillCounter(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearIsInFieldList(E_BTL_SIDE side);
    
    UFUNCTION(BlueprintCallable)
    void ClearEnemyPartyDataAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearCounter(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearCharmSkillID(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearCharData(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearBstCountAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearBstCount(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearBarrierAidCounter(int32 partyIndex, const bool isKarnClear);
    
    UFUNCTION(BlueprintCallable)
    void ClearAidCounter(int32 partyIndex, E_BTL_CNT Type);
    
    UFUNCTION(BlueprintCallable)
    void ClearAid(int32 partyIndex, bool is_magatsuhi_skill);
    
    UFUNCTION(BlueprintCallable)
    void ClearActionParamAll();
    
    UFUNCTION(BlueprintCallable)
    void ClampHP(int32 partyIndex, bool battleAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChkUseSkill(int32 Turn, int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChkENTargetAllArray(int32 Turn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUseMagatsuhiSkill(const int32& partyIndex, const int32& SkillId);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL CheckUseKuiSkill(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUniqueSkillKantuu(const int32& srcIndex, const int32& dstIndex, bool isKantuu, bool isForceNormalAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReqCureBadStatus(int32 partyIndex, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNowMagatsuhiSkill(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CheckMitama(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMagatsuhiDevil(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckHiddenTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    bool CheckEnemyLoseBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBossFlagMember(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CheckBadStatusNaturalyCure(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBadStatusAny(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BAD_STATUS CheckBadStatusActEnd(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBadStatus(int32 partyIndex, E_BAD_STATUS status);
    
    UFUNCTION(BlueprintCallable)
    void CalcMoonAgeTurn();
    
    UFUNCTION(BlueprintCallable)
    E_ATTRIBUTE_TYPE CalcAishouSuitableTargetSelect(const int32 srcPartyIndex, const int32 dstPartyIndex, const TArray<E_ATTRIBUTE_TYPE> aishouArray);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL BstDamageKuishibari(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplySkillAidCounterCore(int32 partyIndex, FSkillBaseData Data, int32 srcPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplySkillAidCounter(int32 partyIndex, int32 SkillId, int32 srcPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRenzokuBattle();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(int32 partyIndex, int32 hpDamage, int32 mpDamage, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCure(int32 partyIndex, int32 hpCure, int32 mpCure, int32 bst);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBossFlag(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBarrierSkillIncludedDefenceAishou(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddPrevTurnInfoMinusDamageNum(const int32& partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddOrderArray(TArray<int32> partyIndexArray);
    
    UFUNCTION(BlueprintCallable)
    void AddOrder(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMagatsuhiDevilSkillTable(const FMagatsuhiDevilSkillRow& MagatsuhiDevilSkillTableRow);
    
    UFUNCTION(BlueprintCallable)
    void AddIsInFieldList(E_BTL_SIDE side, int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddHPMP(int32 partyIndex, int32 InValue, bool isHP, bool isIgnoreDebugFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlagAll(E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlag2All(E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddCureMPValue(int32 partyIndex, int32 addValue);
    
    UFUNCTION(BlueprintCallable)
    void AddCureHPValue(int32 partyIndex, int32 addValue);
    
    UFUNCTION(BlueprintCallable)
    void AddBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag);
    
    UFUNCTION(BlueprintCallable)
    void AddBadStatusTurnCounter(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddBadStatusRecCounter(int32 partyIndex, int32 status);
    
    UFUNCTION(BlueprintCallable)
    void AddAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point);
    
};

