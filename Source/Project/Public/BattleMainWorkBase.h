#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnalyzeData.h"
#include "BPI_CalcInterface.h"
#include "BPI_MainInterface.h"
#include "BPI_PTActOrderInterface.h"
#include "BPI_PTBadStatusInterface.h"
#include "BPI_PTFlagInterface.h"
#include "BPI_PTMemDataInterface.h"
#include "BPI_PTUtilInterface.h"
#include "BtlActionStack.h"
#include "BtlCharData.h"
#include "BtlCommand.h"
#include "BtlDescData.h"
#include "BtlEncData.h"
#include "BtlGardenPointData.h"
#include "BtlKillData.h"
#include "BtlKuishibariData.h"
#include "BtlMoonAge.h"
#include "BtlParty.h"
#include "BtlPrevTurnInfo.h"
#include "BtlSummonData.h"
#include "ChainEncountEnemyInfo.h"
#include "EAchievementFlag.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_AUTO_SKILL_EXTRA_EFFECT.h"
#include "E_BAD_STATUS.h"
#include "E_BTL_AI_TAR.h"
#include "E_BTL_BOSS_FLAG.h"
#include "E_BTL_CHAR_TYPE.h"
#include "E_BTL_CNT.h"
#include "E_BTL_COMM_TYPE.h"
#include "E_BTL_END.h"
#include "E_BTL_PARTY_STAT.h"
#include "E_BTL_PARTY_STAT2.h"
#include "E_BTL_PRESS_TYPE.h"
#include "E_BTL_REFLECT_RES_TYPE.h"
#include "E_BTL_SEQ.h"
#include "E_BTL_SIDE.h"
#include "E_BTL_STAT.h"
#include "E_BTL_STATE_DEBUG.h"
#include "E_BTL_STATE_DEBUG_2.h"
#include "E_BTL_STAT_2.h"
#include "E_BTL_STEP.h"
#include "E_BTL_TUTORIAL.h"
#include "E_BTL_TUTORIAL_TYPE.h"
#include "E_BTL_UPLIFTING_TYPE.h"
#include "E_EVTBTL_WIN_COND.h"
#include "E_KUISHIBARI_LEVEL.h"
#include "E_OVERWRITE_FORMULA.h"
#include "E_SKILL_ICON.h"
#include "EvtBtlWinCond.h"
#include "MagatsuhiDevilParamRate.h"
#include "PressIcon.h"
#include "SkillBaseData.h"
#include "TalkStartInfo.h"
#include "UpliftingGauge.h"
#include "BattleMainWorkBase.generated.h"

class ABattleFieldWorkBase;
class UDataTable;

UCLASS(Blueprintable)
class PROJECT_API ABattleMainWorkBase : public AActor, public IBPI_CalcInterface, public IBPI_PTFlagInterface, public IBPI_PTActOrderInterface, public IBPI_PTMemDataInterface, public IBPI_PTUtilInterface, public IBPI_PTBadStatusInterface, public IBPI_MainInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream m_RandStream;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_STEP m_Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_STEP m_PrevStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_STEP m_NextStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LocalStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlActionStack> m_ActionStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActionStackCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_END m_EndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BtlFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BtlFlag2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DbgState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DbgState2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlKillData> m_EnemyKillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_EVTBTL_WIN_COND, FEvtBtlWinCond> m_WinCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AIFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_AIValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SaveTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_SEQ m_SeqState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StepCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_OriginTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlEncData m_EncountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EncCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EscCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlDescData m_DescData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlDescData m_DescDataBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleFieldWorkBase* m_pBattleField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pMapCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RealTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_PressIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_InitialPressIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_PRESS_TYPE m_PressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_AddEnemyKilledPressIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_BackupPressIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_BackupPressIconAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_PRESS_TYPE m_BackupPressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPressIcon m_ActionPrevPressIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMoonAge m_MoonAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Kantuu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpliftingGauge m_UpliftingGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UpliftingPartyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PressIconAddNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_IsPressIconDel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PressIconIncDec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlKuishibariData> m_KuiUserList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGardenPointData m_GardenPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsContinueUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChainEncountEnemyInfo m_ChainEncountEnemyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_DebugSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_DebugRenzokuEncountlList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_DebugSkillSelectIconList;
    
public:
    ABattleMainWorkBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateMoonAgeCount();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMagatsuhiTalkFailedBlock();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlSummonData> ShuffleSummonData(TArray<FBtlSummonData>& summonData);
    
    UFUNCTION(BlueprintCallable)
    void SetUpliftingPartyIndex(int32 party_index);
    
    UFUNCTION(BlueprintCallable)
    void SetUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialDoneFlag(const E_BTL_TUTORIAL_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    void SetRenzouEncountReader(UPARAM(Ref) FBtlDescData& DescData);
    
    UFUNCTION(BlueprintCallable)
    void SetPressType(E_BTL_PRESS_TYPE pressType);
    
    UFUNCTION(BlueprintCallable)
    void SetPressIcon(const FPressIcon& press_icon);
    
    UFUNCTION(BlueprintCallable)
    void SetNextStep(E_BTL_STEP nextStep);
    
    UFUNCTION(BlueprintCallable)
    void SetKuiUserList(int32 partyIndex, E_KUISHIBARI_LEVEL Level);
    
    UFUNCTION(BlueprintCallable)
    void SetKantuu(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSkillSelectIcon(E_SKILL_ICON icon, bool sw);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBGMID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetAddEnemyKilledPressIcon(const int32 EnemyKilledNum);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_WinRenzoku(UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_WeakCount(const int32& srcPartyIndex, const bool& isWeak, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_UseMagatsuhiSkillCount(const int32& srcPartyIndex, const FSkillBaseData& useSkillData, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_MissBlockRefAbsCount(const int32& dstPartyIndex, const E_BTL_REFLECT_RES_TYPE& resType, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_Kill(const int32& srcPartyIndex, const int32& dstPartyIndex, const bool& IsDead, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievements_Damage(const int32& srcPartyIndex, const int32& Damage, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SaveTsukuyomiHP();
    
    UFUNCTION(BlueprintCallable)
    void ResetMoonAge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowActivationChanged(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void MakeupTutorialData(const E_BTL_TUTORIAL_TYPE Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeUpEncountData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressIcon();
    
    UFUNCTION(BlueprintCallable)
    bool IsMagatsuhiTalkFailedBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossRushChallengeMode();
    
    UFUNCTION(BlueprintCallable)
    void InitializeUniqueSkillEfficacy_forInfo();
    
    UFUNCTION(BlueprintCallable)
    void IncRealTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpliftingPartyIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetRenzokuEncountResultBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_PRESS_TYPE GetPressType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPressIcon GetPressIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverwriteSkillInfoID(const int32 SkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKantuu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPressIcon GetInitialPressIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlGardenPointData GetGardenPointData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEscapeCnt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBGMID();
    
    UFUNCTION(BlueprintCallable)
    E_BTL_END GetBtlEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EncountIsRoomBoss();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EncountIsNotEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 EncountIsEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DelPressIcon(FPressIcon& PressIcon);
    
    UFUNCTION(BlueprintCallable)
    void DeleteKuiUserList(bool isPlayer);
    
    UFUNCTION(BlueprintCallable)
    void DelBattleFlag2(E_BTL_STAT_2 Value);
    
    UFUNCTION(BlueprintCallable)
    void DelBattleFlag(E_BTL_STAT Value);
    
    UFUNCTION(BlueprintCallable)
    void DelBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value);
    
    UFUNCTION(BlueprintCallable)
    void DelBattleDebugFlag(E_BTL_STATE_DEBUG Value);
    
    UFUNCTION(BlueprintCallable)
    void ClearUpliftingPartyIndex();
    
    UFUNCTION(BlueprintCallable)
    void ClearUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType);
    
    UFUNCTION(BlueprintCallable)
    void ClearSavedTsukuyomiHP();
    
    UFUNCTION(BlueprintCallable)
    void ClearBackupPressIconAdded();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllUniqueSkillEfficacy_forInfo(int32 partyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearAddEnemyKilledPressIcon();
    
    UFUNCTION(BlueprintCallable)
    void ClearActionPreParam(bool is_counter);
    
    UFUNCTION(BlueprintCallable)
    void CleanupTutorialDataAll();
    
    UFUNCTION(BlueprintCallable)
    void CleanupTutorialData();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUniqueSkillEfficacy_forInfo(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTutorial(const E_BTL_TUTORIAL tutorial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTimeAttackBattle(UPARAM(Ref) FBtlDescData& DescData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckThisBattleEntryNkm(const int32 partyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRenzokuEncountMagatsuhiDevil(const int32& encountID);
    
    UFUNCTION(BlueprintCallable)
    int32 CheckRenzokuEncount(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckMercyTalk(bool& OutIsMercyTalk, FTalkStartInfo& OutStartInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckKuiUserList(int32 partyIndex, E_KUISHIBARI_LEVEL Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInochigoi();
    
    UFUNCTION(BlueprintCallable)
    void CheckEnemyAttackType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleFlag2(E_BTL_STAT_2 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleFlag(E_BTL_STAT Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleEndLeaderDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleEndEnemyHPRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleDebugFlag(E_BTL_STATE_DEBUG Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAddBossRushEventEncountID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TickMainCalcAfter(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TickCheckDebugMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetUpliftingTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetTurnStartEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetTurnEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetTurnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetTurnChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetTalkEndFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetStartEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetRenzokuEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetPressPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetMercyTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetInochigoi();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetEnemyUplifting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetEnemyTurnEndReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetCheckTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetCheckEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetActionPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetActionEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetActionAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSetAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqUpliftingTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqTurnStartEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqTurnEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqTurnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqTurnChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqTalkEndFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqStartEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqRenzokuEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqPressPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqMercyTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqInochigoi();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqEnemyUplifting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqEnemyTurnEndReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqCheckTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqCheckEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqActionPre();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqActionEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqActionAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StepFuncSeqAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetStepFuncEnemyTurnStartReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SeqStepFuncEnemyTurnStartReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DebugBattleOnlySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BattleSeqStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionPreTaskWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionPreCamChangeTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionPreBadStatusCureTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionPreActEndByBadStatusTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActionPreActCheckBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void BossRush_Reset();
    
    UFUNCTION(BlueprintCallable)
    E_BTL_STEP BI_GetStep();
    
    UFUNCTION(BlueprintCallable)
    void BattleUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void BattleSeqStart(FBtlDescData Desc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTL_PRESS_TYPE AddPressIconTypeGodParam();
    
    UFUNCTION(BlueprintCallable)
    void AddEscapeCnt();
    
    UFUNCTION(BlueprintCallable)
    void AddBattleFlag2(E_BTL_STAT_2 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBattleFlag(E_BTL_STAT Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBattleDebugFlag(E_BTL_STATE_DEBUG Value);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool BI_UniqueSkill_KantuuNormalAttack(const int32& srcIndex, const int32& SkillId, const bool& isSkill) override PURE_VIRTUAL(BI_UniqueSkill_KantuuNormalAttack, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UniqueSkill_Kantuu(const FBtlParty& srcParty, const FBtlParty& dstParty, bool isForceNormalAttack) override PURE_VIRTUAL(BI_UniqueSkill_Kantuu, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetOverwriteFormulaValue(FSkillBaseData SkillData, E_OVERWRITE_FORMULA formula) override PURE_VIRTUAL(BI_GetOverwriteFormulaValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_GetMagatsuhiDevilFirstDropItemIDandNum(const FBtlParty& party, bool Log, int32& outItemID, int32& outItemNum) override PURE_VIRTUAL(BI_GetMagatsuhiDevilFirstDropItemIDandNum,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetEscapeRate() override PURE_VIRTUAL(BI_GetEscapeRate, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckOverwriteFormulaValue(FSkillBaseData SkillData, E_OVERWRITE_FORMULA formula) override PURE_VIRTUAL(BI_CheckOverwriteFormulaValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    float BI_BattleRandF2(float Min, float Max) override PURE_VIRTUAL(BI_BattleRandF2, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float BI_BattleRandF(float Max) override PURE_VIRTUAL(BI_BattleRandF, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_BattleRand2(int32 Min, int32 Max) override PURE_VIRTUAL(BI_BattleRand2, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_BattleRand(int32 Max) override PURE_VIRTUAL(BI_BattleRand, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_DelFlagSideAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlagAll(E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_DelFlagAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_DelFlag2SideAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlag2All(E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_DelFlag2All,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_DelFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_DelFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) override PURE_VIRTUAL(BI_DelBossFlag,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_CheckFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_CheckFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) override PURE_VIRTUAL(BI_CheckBossFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_AddFlagSideAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlagAll(E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_AddFlagAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_AddFlag2SideAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlag2All(E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_AddFlag2All,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) override PURE_VIRTUAL(BI_AddFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) override PURE_VIRTUAL(BI_AddFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) override PURE_VIRTUAL(BI_AddBossFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UpdateOrder() override PURE_VIRTUAL(BI_UpdateOrder,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetNextOrder() override PURE_VIRTUAL(BI_SetNextOrder,);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetOrderList() override PURE_VIRTUAL(BI_GetOrderList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    void BI_AddOrderArray(TArray<int32> partyIndexArray) override PURE_VIRTUAL(BI_AddOrderArray,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddOrder(int32 partyIndex) override PURE_VIRTUAL(BI_AddOrder,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UpdateAbsKuishibari(const int32& partyIndex) override PURE_VIRTUAL(BI_UpdateAbsKuishibari,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_SetAddInfo(const int32& srcIndex, const int32& dstIndex, const E_AUTO_SKILL_EXTRA_EFFECT& SkillExtraEffect) override PURE_VIRTUAL(BI_UniqueSkill_SetAddInfo,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_GetCureTurnStart(const int32& partyIndex, int32& outCureHP, int32& outCureMP, int32& outCureBst) override PURE_VIRTUAL(BI_UniqueSkill_GetCureTurnStart,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_GetCureTurnEnd(const int32& partyIndex, int32& outCureHP, int32& outCureMP, int32& outCureBst) override PURE_VIRTUAL(BI_UniqueSkill_GetCureTurnEnd,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_UniqueSkill_GetCureMPMagatsuhiGaugeMax(const int32& partyIndex) override PURE_VIRTUAL(BI_UniqueSkill_GetCureMPMagatsuhiGaugeMax, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_GetCureActionEnd(const int32& partyIndex, int32 reserveDeadPartyIndex, bool isAllAction, bool isDeadOnly, int32& out_CureHP, int32& outCureMP, int32& outCureBst) override PURE_VIRTUAL(BI_UniqueSkill_GetCureActionEnd,);
    
    UFUNCTION(BlueprintCallable)
    float BI_UniqueSkill_GetCheatingRate(const E_BTL_SIDE& side) override PURE_VIRTUAL(BI_UniqueSkill_GetCheatingRate, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UniqueSkill_CheckChaosRuler(const int32& partyIndex) override PURE_VIRTUAL(BI_UniqueSkill_CheckChaosRuler, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetUplifting(int32 partyIndex, bool Uplifting) override PURE_VIRTUAL(BI_SetUplifting,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetUniqueSkillParty(const int32& partyIndex) override PURE_VIRTUAL(BI_SetUniqueSkillParty,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevTurnInfoWeakDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) override PURE_VIRTUAL(BI_SetPrevTurnInfoWeakDamaged,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevTurnInfoRefAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) override PURE_VIRTUAL(BI_SetPrevTurnInfoRefAttr,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevTurnInfoBlockAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) override PURE_VIRTUAL(BI_SetPrevTurnInfoBlockAttr,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevTurnInfoAttrDamaged(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) override PURE_VIRTUAL(BI_SetPrevTurnInfoAttrDamaged,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevTurnInfoAbsAttr(const int32& partyIndex, E_ATTRIBUTE_TYPE attr, bool sw) override PURE_VIRTUAL(BI_SetPrevTurnInfoAbsAttr,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevCommand(int32 partyIndex) override PURE_VIRTUAL(BI_SetPrevCommand,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPoisonDamageRate(int32 partyIndex, float rate) override PURE_VIRTUAL(BI_SetPoisonDamageRate,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetNowCommandVarious(E_BTL_COMM_TYPE comm_type, int32 partyIndex, int32 n1, int32 n2) override PURE_VIRTUAL(BI_SetNowCommandVarious,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetNowCommandSetSkill(int32 partyIndex, int32 SkillId, int32 target) override PURE_VIRTUAL(BI_SetNowCommandSetSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetNowCommandSetAttack(int32 partyIndex, int32 target) override PURE_VIRTUAL(BI_SetNowCommandSetAttack,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetNowCommand(int32 partyIndex, FBtlCommand Data) override PURE_VIRTUAL(BI_SetNowCommand,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetKuiLevel(int32 partyIndex, E_KUISHIBARI_LEVEL Level) override PURE_VIRTUAL(BI_SetKuiLevel,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetHPUpValueUI(int32 partyIndex, int32 hpUpValue) override PURE_VIRTUAL(BI_SetHPUpValueUI,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetHPUpValue(int32 partyIndex, int32 hpUpValue) override PURE_VIRTUAL(BI_SetHPUpValue,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetHomeTransform(int32 partyIndex, FTransform Transform) override PURE_VIRTUAL(BI_SetHomeTransform,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetHitOffset(int32 partyIndex, float Offset) override PURE_VIRTUAL(BI_SetHitOffset,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetElectrification(int32 partyIndex, bool Electrification) override PURE_VIRTUAL(BI_SetElectrification,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetDown(int32 partyIndex, bool Down) override PURE_VIRTUAL(BI_SetDown,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetCureMPValue(int32 partyIndex, int32 MPValue) override PURE_VIRTUAL(BI_SetCureMPValue,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetCureHPValue(int32 partyIndex, int32 HPValue) override PURE_VIRTUAL(BI_SetCureHPValue,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetCounterSkill(int32 partyIndex, int32 SkillId) override PURE_VIRTUAL(BI_SetCounterSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetCounterAutoSkill(int32 partyIndex, int32 SkillId) override PURE_VIRTUAL(BI_SetCounterAutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetCharmSkillID(const int32& partyIndex, const int32& SkillId) override PURE_VIRTUAL(BI_SetCharmSkillID,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetBossFlagDeadEffectOff(const int32& dstPartyIndex) override PURE_VIRTUAL(BI_SetBossFlagDeadEffectOff,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAidCounterMin(int32 partyIndex, E_BTL_CNT Type) override PURE_VIRTUAL(BI_SetAidCounterMin,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) override PURE_VIRTUAL(BI_SetAidCounter,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SaveNowHPAll() override PURE_VIRTUAL(BI_SaveNowHPAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SaveNowHP(const int32& partyIndex) override PURE_VIRTUAL(BI_SaveNowHP,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ResetSkillTekisei(const int32& partyIndex) override PURE_VIRTUAL(BI_ResetSkillTekisei,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_ModeChange(const int32 partyIndex, const int32 afterDevilID) override PURE_VIRTUAL(BI_ModeChange, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_MaxSkillTekisei(const int32& partyIndex) override PURE_VIRTUAL(BI_MaxSkillTekisei,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsUplifting(int32 partyIndex) override PURE_VIRTUAL(BI_IsUplifting, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsInField(int32 partyIndex) override PURE_VIRTUAL(BI_IsInField, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsHeroIndex(const int32& party_index) override PURE_VIRTUAL(BI_IsHeroIndex, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsHaveAutoSkillExtraEffect(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value) override PURE_VIRTUAL(BI_IsHaveAutoSkillExtraEffect, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsGuest(const int32 partyIndex) override PURE_VIRTUAL(BI_IsGuest, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsExist(int32 partyIndex) override PURE_VIRTUAL(BI_IsExist, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsElectrification(int32 partyIndex) override PURE_VIRTUAL(BI_IsElectrification, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsDown(int32 partyIndex) override PURE_VIRTUAL(BI_IsDown, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsDead(int32 partyIndex) override PURE_VIRTUAL(BI_IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsCurrentCommandUseGodSkillSummon() override PURE_VIRTUAL(BI_IsCurrentCommandUseGodSkillSummon, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_IncDeadNum(const E_BTL_SIDE& side) override PURE_VIRTUAL(BI_IncDeadNum,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetStartPartyIndexWhenPlayerTargetSelect(const int32& ActorPartyIndex, const int32& SkillId, const int32& ItemId) override PURE_VIRTUAL(BI_GetStartPartyIndexWhenPlayerTargetSelect, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetSkillTekisei(const int32& partyIndex, const int32& SkillId) override PURE_VIRTUAL(BI_GetSkillTekisei, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetSkillCostCore(int32 partyIndex, int32 SkillId) override PURE_VIRTUAL(BI_GetSkillCostCore, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetSkillCost(int32 partyIndex, int32 SkillId) override PURE_VIRTUAL(BI_GetSkillCost, return 0;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_SIDE BI_GetSide(int32 partyIndex) override PURE_VIRTUAL(BI_GetSide, return E_BTL_SIDE::E_BTL_SIDE_PLAYER;);
    
    UFUNCTION(BlueprintCallable)
    FBtlPrevTurnInfo BI_GetPrevTurnInfo(const int32& partyIndex, const int32 turnIndex) override PURE_VIRTUAL(BI_GetPrevTurnInfo, return FBtlPrevTurnInfo{};);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetPrevHPRatio(const int32& partyIndex) override PURE_VIRTUAL(BI_GetPrevHPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlCommand> BI_GetPrevCommandTurn(int32 partyIndex, int32 Turn) override PURE_VIRTUAL(BI_GetPrevCommandTurn, return TArray<FBtlCommand>(););
    
    UFUNCTION(BlueprintCallable)
    FBtlCommand BI_GetPrevCommand(int32 partyIndex, int32 commandIndex) override PURE_VIRTUAL(BI_GetPrevCommand, return FBtlCommand{};);
    
    UFUNCTION(BlueprintCallable)
    FText BI_GetPartyName(const int32& partyIndex) override PURE_VIRTUAL(BI_GetPartyName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FBtlParty BI_GetPartyData(int32 partyIndex) override PURE_VIRTUAL(BI_GetPartyData, return FBtlParty{};);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetNowHP(int32 partyIndex) override PURE_VIRTUAL(BI_GetNowHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FBtlCommand BI_GetNowCommand(int32 partyIndex) override PURE_VIRTUAL(BI_GetNowCommand, return FBtlCommand{};);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetMPRatio(int32 partyIndex) override PURE_VIRTUAL(BI_GetMPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetMaxHP(int32 partyIndex) override PURE_VIRTUAL(BI_GetMaxHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetMagatsuhiSkill(const int32& partyIndex, const bool checkMultiSkill) override PURE_VIRTUAL(BI_GetMagatsuhiSkill, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetKuishibariCureHP(int32 partyIndex, E_KUISHIBARI_LEVEL Level) override PURE_VIRTUAL(BI_GetKuishibariCureHP, return 0;);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL BI_GetKuiLevel(int32 partyIndex) override PURE_VIRTUAL(BI_GetKuiLevel, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetKuiDeadStockPartyIndex() override PURE_VIRTUAL(BI_GetKuiDeadStockPartyIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetHPUpValueUI(int32 partyIndex) override PURE_VIRTUAL(BI_GetHPUpValueUI, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetHPUpValue(int32 partyIndex) override PURE_VIRTUAL(BI_GetHPUpValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetHPRatio(int32 partyIndex) override PURE_VIRTUAL(BI_GetHPRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FTransform BI_GetHomeTransform(int32 partyIndex) override PURE_VIRTUAL(BI_GetHomeTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetHitOffset(int32 partyIndex) override PURE_VIRTUAL(BI_GetHitOffset, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetHeroIndex() override PURE_VIRTUAL(BI_GetHeroIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FBtlParty BI_GetHeroData() override PURE_VIRTUAL(BI_GetHeroData, return FBtlParty{};);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetEnemyUpliftingPartyIndex() override PURE_VIRTUAL(BI_GetEnemyUpliftingPartyIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetCureMPValue(int32 partyIndex) override PURE_VIRTUAL(BI_GetCureMPValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetCureHPValue(int32 partyIndex) override PURE_VIRTUAL(BI_GetCureHPValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetCounterSkill(int32 partyIndex, bool IsElectrification, bool isUniqueSkillCounter, bool isAvoidCounter) override PURE_VIRTUAL(BI_GetCounterSkill, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<E_BTL_CNT> BI_GetCondtionMapList(int32 partyIndex) override PURE_VIRTUAL(BI_GetCondtionMapList, return TArray<E_BTL_CNT>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetCharmSkillID(const int32& partyIndex) override PURE_VIRTUAL(BI_GetCharmSkillID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_CHAR_TYPE BI_GetCharaTypeDetail(int32 partyIndex) override PURE_VIRTUAL(BI_GetCharaTypeDetail, return E_BTL_CHAR_TYPE::E_BTL_CHAR_EMPTY;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetCharaID(int32 partyIndex) override PURE_VIRTUAL(BI_GetCharaID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FBtlCharData BI_GetBtlCharaData(int32 partyIndex) override PURE_VIRTUAL(BI_GetBtlCharaData, return FBtlCharData{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetAutoSkillIncludedDefenceAishou(const int32& partyIndex) override PURE_VIRTUAL(BI_GetAutoSkillIncludedDefenceAishou, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetAutoSkillExtraEffectValue(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) override PURE_VIRTUAL(BI_GetAutoSkillExtraEffectValue, return 0;);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetAutoSkillExtraEffectRate(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT Value, bool is_large) override PURE_VIRTUAL(BI_GetAutoSkillExtraEffectRate, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetAidCounter(int32 partyIndex, E_BTL_CNT Type) override PURE_VIRTUAL(BI_GetAidCounter, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_CureHPMPAutoSkill(int32 partyIndex) override PURE_VIRTUAL(BI_CureHPMPAutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ConditionMapUpdate(int32 partyIndex) override PURE_VIRTUAL(BI_ConditionMapUpdate,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearNowCommand(int32 partyIndex) override PURE_VIRTUAL(BI_ClearNowCommand,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearDeadNum() override PURE_VIRTUAL(BI_ClearDeadNum,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearDeadCharaID() override PURE_VIRTUAL(BI_ClearDeadCharaID,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearCounter(const int32& partyIndex) override PURE_VIRTUAL(BI_ClearCounter,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearCharmSkillID(const int32& partyIndex) override PURE_VIRTUAL(BI_ClearCharmSkillID,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearBarrierAidCounter(int32 partyIndex) override PURE_VIRTUAL(BI_ClearBarrierAidCounter,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClampHP(int32 partyIndex, bool battleAfter) override PURE_VIRTUAL(BI_ClampHP,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckUseMagatsuhiSkill(const int32& partyIndex, const int32& SkillId) override PURE_VIRTUAL(BI_CheckUseMagatsuhiSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL BI_CheckUseKuiSkill(int32 partyIndex) override PURE_VIRTUAL(BI_CheckUseKuiSkill, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBossFlagDeadEffect(const int32& dstPartyIndex) override PURE_VIRTUAL(BI_CheckBossFlagDeadEffect, return false;);
    
    UFUNCTION(BlueprintCallable)
    E_KUISHIBARI_LEVEL BI_BstDamageKuishibari(int32 partyIndex) override PURE_VIRTUAL(BI_BstDamageKuishibari, return E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddPrevTurnInfoMinusDamageNum(const int32& partyIndex) override PURE_VIRTUAL(BI_AddPrevTurnInfoMinusDamageNum,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddHPMP(int32 partyIndex, int32 InValue, bool isHP, bool isIgnoreDebugFlag) override PURE_VIRTUAL(BI_AddHPMP,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddDeadCharID(const E_BTL_SIDE& side, const int32& partyIndex) override PURE_VIRTUAL(BI_AddDeadCharID,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddCureMPValue(int32 partyIndex, int32 addValue) override PURE_VIRTUAL(BI_AddCureMPValue,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddCureHPValue(int32 partyIndex, int32 addValue) override PURE_VIRTUAL(BI_AddCureHPValue,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddAidCounter(int32 partyIndex, E_BTL_CNT Type, int32 Point) override PURE_VIRTUAL(BI_AddAidCounter,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UseUpliftingGauge(E_BTL_SIDE side) override PURE_VIRTUAL(BI_UseUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_UpdateUseSkillArray() override PURE_VIRTUAL(BI_UpdateUseSkillArray,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UpdateIsInFieldList(E_BTL_SIDE side) override PURE_VIRTUAL(BI_UpdateIsInFieldList,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UpdateBossShareOpenAishou() override PURE_VIRTUAL(BI_UpdateBossShareOpenAishou, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UpdateBossAishouTurnStart() override PURE_VIRTUAL(BI_UpdateBossAishouTurnStart, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UpdateBossAishou() override PURE_VIRTUAL(BI_UpdateBossAishou, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_TakeOverDefenceAishou() override PURE_VIRTUAL(BI_TakeOverDefenceAishou,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SharedBossHPRate() override PURE_VIRTUAL(BI_SharedBossHPRate,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetUseSkill(int32 SkillId) override PURE_VIRTUAL(BI_SetUseSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetUpliftingGauge(E_BTL_SIDE side, int32 Value) override PURE_VIRTUAL(BI_SetUpliftingGauge,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPrevUpliftingGauge(const int32& Value) override PURE_VIRTUAL(BI_SetPrevUpliftingGauge,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPressType(E_BTL_PRESS_TYPE pressType) override PURE_VIRTUAL(BI_SetPressType,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetMitamaAnalyzeData(const int32& partyIndex) override PURE_VIRTUAL(BI_SetMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetEnemyBattleIn(int32 targetIndex, int32 DevilID) override PURE_VIRTUAL(BI_SetEnemyBattleIn,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetDeadParam(int32 partyIndex) override PURE_VIRTUAL(BI_SetDeadParam,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetChkENTargetAllArray(bool isUse) override PURE_VIRTUAL(BI_SetChkENTargetAllArray,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ReturnEnemy() override PURE_VIRTUAL(BI_ReturnEnemy,);
    
    UFUNCTION(BlueprintCallable)
    void BI_OpenAnalyze_AutoSkill(const int32& partyIndex, const int32& SkillId) override PURE_VIRTUAL(BI_OpenAnalyze_AutoSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_OpenAnalyze(const FBtlParty& party) override PURE_VIRTUAL(BI_OpenAnalyze,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsUseUpliftingGauge(E_BTL_SIDE side) override PURE_VIRTUAL(BI_IsUseUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsPressIcon() override PURE_VIRTUAL(BI_IsPressIcon, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsCharge(const int32& partyIndex) override PURE_VIRTUAL(BI_IsCharge, return false;);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetVirtualActOrder(int32 partyIndex) override PURE_VIRTUAL(BI_GetVirtualActOrder, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetUpliftingGauge(E_BTL_SIDE side) override PURE_VIRTUAL(BI_GetUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FVector BI_GetUnitAveLocation(E_BTL_SIDE side, FName SocketName) override PURE_VIRTUAL(BI_GetUnitAveLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetSkillCureMPValueExpected(const int32 SkillId, const int32 UserIndex, const int32 targetIndex) override PURE_VIRTUAL(BI_GetSkillCureMPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetSkillCureHPValueExpected(const int32 SkillId, const int32 UserIndex, const int32 targetIndex) override PURE_VIRTUAL(BI_GetSkillCureHPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideListDevilIDList(E_BTL_SIDE side) override PURE_VIRTUAL(BI_GetSideListDevilIDList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideListCondition(E_BTL_SIDE side, bool IsInField, bool isHitTarget, bool isDmgChara) override PURE_VIRTUAL(BI_GetSideListCondition, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideIsTargetList(E_BTL_SIDE side) override PURE_VIRTUAL(BI_GetSideIsTargetList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideIsStatList(E_BTL_SIDE side, E_BTL_PARTY_STAT stat) override PURE_VIRTUAL(BI_GetSideIsStatList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideIsStat2List(E_BTL_SIDE side, E_BTL_PARTY_STAT2 stat) override PURE_VIRTUAL(BI_GetSideIsStat2List, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlParty> BI_GetSideIsInFieldPartyData(E_BTL_SIDE side) override PURE_VIRTUAL(BI_GetSideIsInFieldPartyData, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideIsInFieldList(E_BTL_SIDE side) override PURE_VIRTUAL(BI_GetSideIsInFieldList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetSideIsBossFlagList(E_BTL_SIDE side, E_BTL_BOSS_FLAG flag) override PURE_VIRTUAL(BI_GetSideIsBossFlagList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetPrevUpliftingGauge() override PURE_VIRTUAL(BI_GetPrevUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_PRESS_TYPE BI_GetPressType() override PURE_VIRTUAL(BI_GetPressType, return E_BTL_PRESS_TYPE::E_BTL_PRESS_TYPE_NORMAL;);
    
    UFUNCTION(BlueprintCallable)
    FPressIcon BI_GetPressIcon() override PURE_VIRTUAL(BI_GetPressIcon, return FPressIcon{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlParty> BI_GetPartyDataAll() override PURE_VIRTUAL(BI_GetPartyDataAll, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetPartnerList() override PURE_VIRTUAL(BI_GetPartnerList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetNowActNum(int32 partyIndex) override PURE_VIRTUAL(BI_GetNowActNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FAnalyzeData BI_GetMitamaAnalyzeData(const int32& partyIndex) override PURE_VIRTUAL(BI_GetMitamaAnalyzeData, return FAnalyzeData{};);
    
    UFUNCTION(BlueprintCallable)
    FMagatsuhiDevilParamRate BI_GetMagatsuhiDevilParamRate() override PURE_VIRTUAL(BI_GetMagatsuhiDevilParamRate, return FMagatsuhiDevilParamRate{};);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetItemlCureMPValueExpected(const int32 ItemId, const int32 UserIndex, const int32 targetIndex) override PURE_VIRTUAL(BI_GetItemlCureMPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetItemlCureHPValueExpected(const int32 ItemId, const int32 UserIndex, const int32 targetIndex) override PURE_VIRTUAL(BI_GetItemlCureHPValueExpected, return 0;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_SIDE BI_GetIndexSide(int32 partyIndex) override PURE_VIRTUAL(BI_GetIndexSide, return E_BTL_SIDE::E_BTL_SIDE_PLAYER;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_CNT BI_GetGodSkillUpAidType() override PURE_VIRTUAL(BI_GetGodSkillUpAidType, return E_BTL_CNT::E_BTL_CNT_DMG;);
    
    UFUNCTION(BlueprintCallable)
    E_BTL_CNT BI_GetGodSkillDownAidType() override PURE_VIRTUAL(BI_GetGodSkillDownAidType, return E_BTL_CNT::E_BTL_CNT_DMG;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetGlobalActNum() override PURE_VIRTUAL(BI_GetGlobalActNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetExistNum(const E_BTL_SIDE& side) override PURE_VIRTUAL(BI_GetExistNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetEnemyPartyIndexWithDevilIDOrRootID(int32 DevilID) override PURE_VIRTUAL(BI_GetEnemyPartyIndexWithDevilIDOrRootID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetEnemyPartyIndexWithDevilID(int32 DevilID) override PURE_VIRTUAL(BI_GetEnemyPartyIndexWithDevilID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetBstNum(int32 partyIndex, E_BAD_STATUS bst) override PURE_VIRTUAL(BI_GetBstNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetBattlePartyIndexByNkmIndex(int32 InNkmIndex, int32 InPlayerIndex, int32 InType) override PURE_VIRTUAL(BI_GetBattlePartyIndexByNkmIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlParty> BI_GetAllIsInFieldPartyData(bool isTargetOnly) override PURE_VIRTUAL(BI_GetAllIsInFieldPartyData, return TArray<FBtlParty>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetAllIsInFieldList() override PURE_VIRTUAL(BI_GetAllIsInFieldList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetActPassNum(int32 partyIndex) override PURE_VIRTUAL(BI_GetActPassNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_GetActCharmSkill(int32 partyIndex, int32& repair, TArray<uint8>& repairIndex, int32& aid, TArray<uint8>& aidIndex) override PURE_VIRTUAL(BI_GetActCharmSkill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ExeMitamaAnalyzeData(const int32& partyIndex, const int32& useSkillId) override PURE_VIRTUAL(BI_ExeMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    void BI_EscapeFailedForPlayer() override PURE_VIRTUAL(BI_EscapeFailedForPlayer,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBossFlagPartyList(TArray<E_BTL_BOSS_FLAG> flagArray) override PURE_VIRTUAL(BI_DelBossFlagPartyList,);
    
    UFUNCTION(BlueprintCallable)
    void BI_CopyMitamaAnalyzeData(const int32& partyIndex, const FAnalyzeData& AnalyzeData) override PURE_VIRTUAL(BI_CopyMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_ConstStockStart() override PURE_VIRTUAL(BI_ConstStockStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_ConstStockNum() override PURE_VIRTUAL(BI_ConstStockNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_ConstPartyMax() override PURE_VIRTUAL(BI_ConstPartyMax, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_ConstEnemyStart() override PURE_VIRTUAL(BI_ConstEnemyStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_ConstEnemyNum() override PURE_VIRTUAL(BI_ConstEnemyNum, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearMitamaAnalyzeDataAll() override PURE_VIRTUAL(BI_ClearMitamaAnalyzeDataAll,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearMitamaAnalyzeData(const int32& partyIndex) override PURE_VIRTUAL(BI_ClearMitamaAnalyzeData,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearActionParamAll() override PURE_VIRTUAL(BI_ClearActionParamAll,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_ChkUseSkill(int32 Turn, int32 SkillId) override PURE_VIRTUAL(BI_ChkUseSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_ChkENTargetAllArray(int32 Turn) override PURE_VIRTUAL(BI_ChkENTargetAllArray, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckMitama(const int32& partyIndex) override PURE_VIRTUAL(BI_CheckMitama, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckMaxUpliftingGauge(E_BTL_SIDE side) override PURE_VIRTUAL(BI_CheckMaxUpliftingGauge, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckMagatsuhiDevil(const int32& partyIndex) override PURE_VIRTUAL(BI_CheckMagatsuhiDevil, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckHaveSkill(const int32& partyIndex, const int32& SkillId) override PURE_VIRTUAL(BI_CheckHaveSkill, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckEnemyLoseBattleEnd() override PURE_VIRTUAL(BI_CheckEnemyLoseBattleEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_CalcUpliftingGauge(E_BTL_UPLIFTING_TYPE Type) override PURE_VIRTUAL(BI_CalcUpliftingGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_CalcMoonAgeTurn() override PURE_VIRTUAL(BI_CalcMoonAgeTurn,);
    
    UFUNCTION(BlueprintCallable)
    void BI_CalcAndApplyPressIcon(E_BTL_PRESS_TYPE press_type) override PURE_VIRTUAL(BI_CalcAndApplyPressIcon,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddUpliftingGauge(E_BTL_SIDE side, int32 Value) override PURE_VIRTUAL(BI_AddUpliftingGauge,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetBadStatusDamage(int32 partyIndex, E_BAD_STATUS status) override PURE_VIRTUAL(BI_GetBadStatusDamage, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetBadStatus(int32 partyIndex) override PURE_VIRTUAL(BI_GetBadStatus, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearBstCountAll() override PURE_VIRTUAL(BI_ClearBstCountAll,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBadStatusAny(int32 partyIndex) override PURE_VIRTUAL(BI_CheckBadStatusAny, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBadStatus(int32 partyIndex, E_BAD_STATUS status) override PURE_VIRTUAL(BI_CheckBadStatus, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBadStatusRecCounter(int32 partyIndex, int32 status) override PURE_VIRTUAL(BI_AddBadStatusRecCounter,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UpdateMagatsuhiTalkFailedBlock() override PURE_VIRTUAL(BI_UpdateMagatsuhiTalkFailedBlock,);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_UniqueSkill_GetMagatsuhiGauge() override PURE_VIRTUAL(BI_UniqueSkill_GetMagatsuhiGauge, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_UniqueSkill_EqualCheckTurnEnd(const E_AUTO_SKILL_EXTRA_EFFECT& uniqueSkillEffect) override PURE_VIRTUAL(BI_UniqueSkill_EqualCheckTurnEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_AddPressIconNextTurn(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) override PURE_VIRTUAL(BI_UniqueSkill_AddPressIconNextTurn,);
    
    UFUNCTION(BlueprintCallable)
    void BI_UniqueSkill_AddPressIconHalfNextTurn(int32 partyIndex, E_AUTO_SKILL_EXTRA_EFFECT uniqueSkillType) override PURE_VIRTUAL(BI_UniqueSkill_AddPressIconHalfNextTurn,);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlSummonData> BI_ShuffleSummonData(TArray<FBtlSummonData> summonData) override PURE_VIRTUAL(BI_ShuffleSummonData, return TArray<FBtlSummonData>(););
    
    UFUNCTION(BlueprintCallable)
    void BI_SetUniqueSkillEfficacy_forInfo(int32 partyIndex, UPARAM(Ref) TArray<E_AUTO_SKILL_EXTRA_EFFECT>& uniqueSkillType) override PURE_VIRTUAL(BI_SetUniqueSkillEfficacy_forInfo,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetTutorialDoneFlag(const E_BTL_TUTORIAL_TYPE Type) override PURE_VIRTUAL(BI_SetTutorialDoneFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SettingEnemyMaxLevel(const int32 Level) override PURE_VIRTUAL(BI_SettingEnemyMaxLevel,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SettingEnemyListMaxLevel() override PURE_VIRTUAL(BI_SettingEnemyListMaxLevel,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPressIconIncDec(int32 Num, E_BTL_SIDE side) override PURE_VIRTUAL(BI_SetPressIconIncDec,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPressIconDel(bool isDel, E_BTL_SIDE side) override PURE_VIRTUAL(BI_SetPressIconDel,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetPressIconAddNum(int32 Num, E_BTL_SIDE side) override PURE_VIRTUAL(BI_SetPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_WinRenzoku(UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_WinRenzoku,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_WeakCount(const int32& srcPartyIndex, const bool& isWeak, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_WeakCount,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_UseMagatsuhiSkillCount(const int32& srcPartyIndex, const FSkillBaseData& useSkillData, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_UseMagatsuhiSkillCount,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_MissBlockRefAbsCount(const int32& dstPartyIndex, const E_BTL_REFLECT_RES_TYPE& resType, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_MissBlockRefAbsCount,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_Kill(const int32& srcPartyIndex, const int32& dstPartyIndex, const bool& IsDead, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_Kill,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SetAchievements_Damage(const int32& srcPartyIndex, const int32& Damage, UPARAM(Ref) TArray<EAchievementFlag>& outAchievements) override PURE_VIRTUAL(BI_SetAchievements_Damage,);
    
    UFUNCTION(BlueprintCallable)
    void BI_SaveTsukuyomiHP() override PURE_VIRTUAL(BI_SaveTsukuyomiHP,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_RetrieveUniqueSkillEfficacy_forInfo(int32 partyIndex, UPARAM(Ref) TArray<E_AUTO_SKILL_EXTRA_EFFECT>& uniqueSkillType) override PURE_VIRTUAL(BI_RetrieveUniqueSkillEfficacy_forInfo, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_OpenAnalyzeDeadWithBoss(int32 dstIndex) override PURE_VIRTUAL(BI_OpenAnalyzeDeadWithBoss,);
    
    UFUNCTION(BlueprintCallable)
    void BI_MakeupTutorialData(const E_BTL_TUTORIAL_TYPE Type) override PURE_VIRTUAL(BI_MakeupTutorialData,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsMagatsuhiTalkFailedBlock() override PURE_VIRTUAL(BI_IsMagatsuhiTalkFailedBlock, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_IsBossRushChallengeMode() override PURE_VIRTUAL(BI_IsBossRushChallengeMode, return false;);
    
    UFUNCTION(BlueprintCallable)
    float BI_GetRenzokuEncountResultBonus() override PURE_VIRTUAL(BI_GetRenzokuEncountResultBonus, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetOverwriteSkillInfoID(const int32 SkillId) override PURE_VIRTUAL(BI_GetOverwriteSkillInfoID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FBtlGardenPointData BI_GetGardenPointData() override PURE_VIRTUAL(BI_GetGardenPointData, return FBtlGardenPointData{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<E_SKILL_ICON> BI_GetDebugSkillSelectIconArray() override PURE_VIRTUAL(BI_GetDebugSkillSelectIconArray, return TArray<E_SKILL_ICON>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> BI_GetDebugSkillList() override PURE_VIRTUAL(BI_GetDebugSkillList, return TArray<int32>(););
    
    UFUNCTION(BlueprintCallable)
    int32 BI_GetBossRushEventEncountID() override PURE_VIRTUAL(BI_GetBossRushEventEncountID, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_EncountIsRoomBoss() override PURE_VIRTUAL(BI_EncountIsRoomBoss, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_EncountIsNotEscape() override PURE_VIRTUAL(BI_EncountIsNotEscape, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_EncountIsMagatsukaSpawn() override PURE_VIRTUAL(BI_EncountIsMagatsukaSpawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 BI_EncountIsEvent() override PURE_VIRTUAL(BI_EncountIsEvent, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBattleFlag2(E_BTL_STAT_2 Value) override PURE_VIRTUAL(BI_DelBattleFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBattleFlag(E_BTL_STAT Value) override PURE_VIRTUAL(BI_DelBattleFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) override PURE_VIRTUAL(BI_DelBattleDebugFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_DelBattleDebugFlag(E_BTL_STATE_DEBUG Value) override PURE_VIRTUAL(BI_DelBattleDebugFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearUniqueSkillEfficacy_forInfo(int32 partyIndex) override PURE_VIRTUAL(BI_ClearUniqueSkillEfficacy_forInfo,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearSavedTsukuyomiHP() override PURE_VIRTUAL(BI_ClearSavedTsukuyomiHP,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearPressIconAddNum(E_BTL_SIDE side) override PURE_VIRTUAL(BI_ClearPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    void BI_ClearActionPreParam(bool is_counter) override PURE_VIRTUAL(BI_ClearActionPreParam,);
    
    UFUNCTION(BlueprintCallable)
    void BI_CleanupTutorialData() override PURE_VIRTUAL(BI_CleanupTutorialData,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckTutorial(const E_BTL_TUTORIAL tutorial) override PURE_VIRTUAL(BI_CheckTutorial, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_CheckEnemyAttackType() override PURE_VIRTUAL(BI_CheckEnemyAttackType,);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckDebugSkillSelectIcon() override PURE_VIRTUAL(BI_CheckDebugSkillSelectIcon, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBattleFlag2(E_BTL_STAT_2 Value) override PURE_VIRTUAL(BI_CheckBattleFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBattleFlag(E_BTL_STAT Value) override PURE_VIRTUAL(BI_CheckBattleFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) override PURE_VIRTUAL(BI_CheckBattleDebugFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool BI_CheckBattleDebugFlag(E_BTL_STATE_DEBUG Value) override PURE_VIRTUAL(BI_CheckBattleDebugFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BI_BattleSeqStart(FBtlDescData Desc) override PURE_VIRTUAL(BI_BattleSeqStart,);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> BI_AIBaseTar_SetTargetSelfSideOther(const TArray<FBtlParty>& partyArray, E_BTL_SIDE targetSide, int32 selfIndex) override PURE_VIRTUAL(BI_AIBaseTar_SetTargetSelfSideOther, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> BI_AIBaseTar_SetTargetSelf(const FBtlParty& Actor) override PURE_VIRTUAL(BI_AIBaseTar_SetTargetSelf, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> BI_AIBaseTar_Common(int32 actorIndex, E_BTL_AI_TAR Type, int32 Value, int32 Value2) override PURE_VIRTUAL(BI_AIBaseTar_Common, return TArray<uint8>(););
    
    UFUNCTION(BlueprintCallable)
    void BI_AddPressIconAddNum(int32 Num, E_BTL_SIDE side) override PURE_VIRTUAL(BI_AddPressIconAddNum,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBattleFlag2(E_BTL_STAT_2 Value) override PURE_VIRTUAL(BI_AddBattleFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBattleFlag(E_BTL_STAT Value) override PURE_VIRTUAL(BI_AddBattleFlag,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBattleDebugFlag2(E_BTL_STATE_DEBUG_2 Value) override PURE_VIRTUAL(BI_AddBattleDebugFlag2,);
    
    UFUNCTION(BlueprintCallable)
    void BI_AddBattleDebugFlag(E_BTL_STATE_DEBUG Value) override PURE_VIRTUAL(BI_AddBattleDebugFlag,);
    
};

