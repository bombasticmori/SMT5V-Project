#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDevilTalkVoice.h"
#include "ETalkGodParam.h"
#include "E_TALK_END_TYPE.h"
#include "E_TALK_FRIEND_TALK.h"
#include "E_TALK_HERO_BST_TYPE.h"
#include "E_TALK_JUDGE_PARAM.h"
#include "E_TALK_MOON_TEMPER_DATA.h"
#include "E_TALK_MOON_TEMPER_STATUS.h"
#include "E_TALK_NG_TYPE.h"
#include "E_TALK_QUESTION_PART.h"
#include "E_TALK_RESULT_TARGET_STATUS.h"
#include "E_TALK_SAFETY_TYPE.h"
#include "E_TALK_WANT_AC.h"
#include "E_TALK_WANT_KIND.h"
#include "E_TALK_WANT_REAC.h"
#include "TalkMoonTemperTable.h"
#include "TalkMythProcess.h"
#include "TalkMythProcessTable.h"
#include "TalkReactionTable.h"
#include "TalkResultInfo.h"
#include "TalkScoutTable.h"
#include "TalkStartInfo.h"
#include "TalkCtrl.generated.h"

class UDataTable;
class UMMIAsset;
class UObject;
class UScriptMessageAsset;
class UTalkToneTable;

UCLASS(Blueprintable)
class PROJECT_API ATalkCtrl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkStartInfo m_TalkStartInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilAttr1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilCharacterNameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_MOON_TEMPER_DATA m_MoonTemperData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_MOON_TEMPER_STATUS m_MoonTemperStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_QUESTION_PART m_QuestionPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_QuestionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_JUDGE_PARAM m_JudgeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReactionDebugIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkReactionTable m_ReactionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_WANT_KIND m_WantKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_WANT_KIND m_WantKindPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantRepeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantYesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantOtherCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantNotHaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_WANT_AC m_WantAc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_WANT_REAC m_WantReac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_MoneyPaid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantItemRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantHPMPRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceHPMPRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantReduce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantReduceUniqueDevilList_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantReduceUniqueDevilList_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantReduceUniqueDevilId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkResultInfo m_TalkResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FundCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FundMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FundTotalMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UtsusemiItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UtsusemiHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MercyRepeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NkmUnconditionalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythFriendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythEnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythNextMessageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MythItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bQuizMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_QuizDevilId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_QuizChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsQuizSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTalkToneTable* m_pTalkToneTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pBattleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTalkMythProcessTable m_MythProcessTable;
    
public:
    ATalkCtrl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStartInfo(UObject* pBattleMain);
    
    UFUNCTION(BlueprintCallable)
    void SubWant();
    
    UFUNCTION(BlueprintCallable)
    void SetWantAction(E_TALK_WANT_AC ac);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkResultTargetStatus(E_TALK_RESULT_TARGET_STATUS targetStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkResultEndType(E_TALK_END_TYPE endType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStockWaitFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSafetyHappened(E_TALK_SAFETY_TYPE safetyType);
    
    UFUNCTION(BlueprintCallable)
    void SetQuizSuccess(bool IsSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMercyRepeatCount(int32 mercyRepeatCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLevelWaitFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaNameByLabel(UScriptMessageAsset* ScriptMessageAsset, FName MessageLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaNameByIdAndDevil(UScriptMessageAsset* ScriptMessageAsset, int32 MessageID, int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaNameByID(UScriptMessageAsset* ScriptMessageAsset, int32 MessageID);
    
    UFUNCTION(BlueprintCallable)
    void SetApologyWaitFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SafetyRepeatWant();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToAPart();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetWaitFlag();
    
    UFUNCTION(BlueprintCallable)
    void PlayDevilVoice(AActor* Talker, EDevilTalkVoice DevilTalkVoice, FName Socket, bool bDontAttachToTalker);
    
    UFUNCTION(BlueprintCallable)
    void MythSetInfo(int32 mythId);
    
    UFUNCTION(BlueprintCallable)
    void MythSetHappenedFlag(int32 mythId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkMythProcess MythGetProcessData(int32 MessageID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 MythGetProcessCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 MythFindMatch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeUpTalkToneTable_Object(UObject* pObject);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpTalkToneTable(UMMIAsset* pAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeUpMythProcessTable(UObject* pObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool LotWantReduceUniqueSkill();
    
    UFUNCTION(BlueprintCallable)
    E_TALK_WANT_REAC LotWantReaction();
    
    UFUNCTION(BlueprintCallable)
    E_TALK_WANT_KIND LotWantKind();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LotSafetyProc();
    
    UFUNCTION(BlueprintCallable)
    void LotQuiz();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LotQuestionReaction(int32 choiceIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 LotQuestionGiftMoney();
    
    UFUNCTION(BlueprintCallable)
    void LotQuestionGiftItem(int32& outItemID, int32& outItemNum);
    
    UFUNCTION(BlueprintCallable)
    void LotQuestionB();
    
    UFUNCTION(BlueprintCallable)
    void LotQuestionA();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LotNkmUnconditionalProc();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool LotMercyRepeat(int32 mercyRepeatCount);
    
    UFUNCTION(BlueprintCallable)
    E_TALK_HERO_BST_TYPE LotHeroBadStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LotFriendTalkHeal();
    
    UFUNCTION(BlueprintCallable)
    void LotFriendTalkGift(int32& outItemID, int32& outMoney);
    
    UFUNCTION(BlueprintCallable)
    void LotBegLifeIncenseItem(int32& outItemID, int32& outItemNum);
    
    UFUNCTION(BlueprintCallable)
    bool LotApologyWaitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStockWaitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScoutSuccessAchieved();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsQuestionNoChoice();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoneyPaidTotalAchieved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelWaitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEasyMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApologyWaitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HaveGodParam(ETalkGodParam godParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWantReduceUniqueDevil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTalkWantMoneyTable(int32 Level);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetTalkSelectLineText(FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTalkSelectLineNum(FText Text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTalkScoutTableMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTalkScoutTable(int32 talkId, FTalkScoutTable& Table);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkResultInfo GetTalkResult();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_TALK_NG_TYPE GetTalkNGType(bool MagatsukaDiscovery);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSafetyProcUniqueDevil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_TALK_SAFETY_TYPE GetSafetyProcType();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetQuizChoices();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTalkMoonTemperTable GetMoonTemperData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFundAngryRate();
    
    UFUNCTION(BlueprintCallable)
    void FriendTalkHealProc();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EntryDevil(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyTalkToneTable();
    
    UFUNCTION(BlueprintCallable)
    void ChooseReactionByJudgeParam(E_TALK_JUDGE_PARAM judgeParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckWantItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckStockEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNotHaveDevil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNotEscapeBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLevelEnough();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHeroUplifting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHaveWant();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_TALK_FRIEND_TALK CheckFriendTalk();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalcWantMP();
    
    UFUNCTION(BlueprintCallable)
    void CalcWantMoney();
    
    UFUNCTION(BlueprintCallable)
    void CalcWantMaseki();
    
    UFUNCTION(BlueprintCallable)
    void CalcWantItem();
    
    UFUNCTION(BlueprintCallable)
    void CalcWantHP();
    
    UFUNCTION(BlueprintCallable)
    void CalcUniqueSkillDevilTransform(UDataTable* DataTable, int32 DevilID, FVector& OutLocation, FVector& OutRotation);
    
    UFUNCTION(BlueprintCallable)
    void CalcQuestionJudgeParam();
    
    UFUNCTION(BlueprintCallable)
    void CalcMercyMoney(int32 mercyRepeatCount, int32& outMoney, bool& outIsAll);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcFundMoney();
    
    UFUNCTION(BlueprintCallable)
    bool CalcFundAngry();
    
    UFUNCTION(BlueprintCallable)
    void AddScoutSuccessCount();
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyPaidTotal(int32 money);
    
    UFUNCTION(BlueprintCallable)
    void AddFundCount();
    
};

