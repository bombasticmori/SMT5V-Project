#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AbilData.h"
#include "ResultData.h"
#include "UIStatusDataUpParam.h"
#include "LevelUpManager.generated.h"

class UScriptMessageAsset;
class UUIStatusCtrlDataObjResult;

UCLASS(Blueprintable)
class ULevelUpManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIStatusCtrlDataObjResult* m_CtrlData;
    
public:
    ULevelUpManager();

    UFUNCTION(BlueprintCallable)
    void UpdateSlotLookForSkillEvent();
    
    UFUNCTION(BlueprintCallable)
    bool TrySkillEventCreate();
    
    UFUNCTION(BlueprintCallable)
    bool TryLvUpEventCreate_ForUnite(const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool TryGiftEventCreateAndGetGiftItem();
    
    UFUNCTION(BlueprintCallable)
    bool TryExSkillEventCreate(const int32 addRank);
    
    UFUNCTION(BlueprintCallable)
    void SkillDataOverride();
    
    UFUNCTION(BlueprintCallable)
    void SetTalkerName(UScriptMessageAsset* ScriptMessageAsset, const FName& MessageLabel, int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void ReturnSkillDataToEventStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayerPointUp(UPARAM(Ref) FAbilData& addParam);
    
    UFUNCTION(BlueprintCallable)
    bool LearnNextSkill(int32 destIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidRelativeData(const int32 relativePosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoulGiftAlreadyGot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiftDevilSoul() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNextCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableGardenSkillExEvent(int32 NkmIndex, int32 addRank);
    
    UFUNCTION(BlueprintCallable)
    void InitShowUpParam();
    
    UFUNCTION(BlueprintCallable)
    bool InitGardenResult(const int32 NkmIndex, const FUIStatusDataUpParam& in_UpParam, const bool in_ExSkillEvent);
    
    UFUNCTION(BlueprintCallable)
    bool GrowUpAndCreateEventDataForCamp(const int32 NkmIndex, const int32 upLv);
    
    UFUNCTION(BlueprintCallable)
    bool GrowUpAndCreateEventData(const FResultData& ResultData);
    
    UFUNCTION(BlueprintCallable)
    bool GotoNextCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillSlotIndex(int32 totalIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillID(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLearningSkillID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLearnableSkillNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHeroBonusPointMargin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGiftID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExSkillID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEmptySlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDevilIDRelative(const int32 relativePosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDevilID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIStatusCtrlDataObjResult* GetDataObj();
    
};

