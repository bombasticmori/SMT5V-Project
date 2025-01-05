#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "E_UI_STATUS_FUSION_ORDER.h"
#include "E_UI_STATUS_LIST_ITEM_TYPE.h"
#include "E_UI_STATUS_PAGE_TYPE.h"
#include "UIStatusDataLeft.h"
#include "UIStatusDataUpParam.h"
#include "UIStatusSlotItemData.h"
#include "UIStatusCtrlDataObjBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class UUIStatusCtrlDataObjBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_CharaRefList;
    
public:
    UUIStatusCtrlDataObjBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseLvUpGimmerParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseLevelUpParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseFluctuation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseCharaChangeUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSkillCursor(bool& IsChanged, int32 Index_New, int32 Index_Hold);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateDropAndCondCursor(int32 newTotalIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCurrent(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchKamui_ForCtrl(int32 targetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwapSkillData(int32 targetIndex_1, int32 targetIndex_2);
    
    UFUNCTION(BlueprintCallable)
    void SubCurrent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEmptyStatusData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrent(int32 newCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ScrollBarRate_Skill(int32 Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ScrollBarRate_Parent(int32 Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ScrollBarRate_Condition(int32 Offset) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetSkipList(const E_UI_STATUS_PAGE_TYPE pageType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreparePlayerData();
    
    UFUNCTION(BlueprintCallable)
    void PrepareNkmData(int32 NkmIndex, int32 upLv);
    
    UFUNCTION(BlueprintCallable)
    void PrepareEnemyData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void PrepareDevilBaseData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void PrepareBibleData(int32 DevilID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeSatanMagatsuhiSkillList(const int32 stealSkillId, TArray<int32>& magaSkills) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JumpNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JumpFirstPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JumpBeforePage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUtsusemiStatusData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSwitchableKamui_ForCtrl(int32 totalIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSelectableSrc_ForCtrl(int32 totalIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParentCursorIndex(int32 Offset, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusableSlot_Right(int32 totalIndex, E_UI_STATUS_PAGE_TYPE pageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistFocusanbeSlot_Right(const int32 betA, const int32 betB, const E_UI_STATUS_PAGE_TYPE pageType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyStatusData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDyingMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDevilUnknown(const int32 relativePosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorIndex(E_UI_STATUS_PAGE_TYPE pageType, int32 Offset, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadySpawnedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIStatusDataUpParam GetUpParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FUIStatusSlotItemData GetUISlotDataRight(int32 totalIndex, E_UI_STATUS_PAGE_TYPE pageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIStatusSlotItemData GetUISlotDataParent(int32 Offset, int32 IndexOnUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShowFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRightSlotMax(E_UI_STATUS_PAGE_TYPE pageType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentSkillMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIStatusSlotItemData GetParentSkill(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_UI_STATUS_PAGE_TYPE GetPageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextSkillLv() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetModelSpawnTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetListMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIStatusDataLeft GetLeftData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstForcusableIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    E_UI_STATUS_FUSION_ORDER GetFaceIconOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFaceIconID(const int32 relativePosition) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetDevilIDFromIndex(const int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDevilID(const int32 relativePosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetCurrentTextID(E_UI_STATUS_LIST_ITEM_TYPE& textType, int32& textID, bool& IsOpen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetCostDifference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConditionTurnCount(const int32 textNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCharaReference(const int32 relativePosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetAdditionalCost() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistLearningNextSkill() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearParentSkillCursorData();
    
    UFUNCTION(BlueprintCallable)
    void ClearParentSkill();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeNewOld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcNextOffset(const int32 oldOffset, const int32 nextDataIndex, const E_UI_STATUS_PAGE_TYPE pageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcNextIndex(const int32 oldDataIndex, const int32 moveValue, const bool enableLoop, const E_UI_STATUS_PAGE_TYPE pageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcNearlyIndex_Right(const int32 idealIndex, const int32 Offset, const E_UI_STATUS_PAGE_TYPE pageType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCurrent();
    
};

