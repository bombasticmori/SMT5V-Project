#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AbilData.h"
#include "E_SKILLINHERIT_RESULT.h"
#include "UniteSkillData.h"
#include "UniteCtrl.generated.h"

class UMMIAsset;
class UUniteTable;

UCLASS(Blueprintable)
class PROJECT_API AUniteCtrl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUniteTable* m_pUniteTable;
    
    AUniteCtrl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpDateUniteFixNkmData(bool bCheckAccident);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SkillInheritWheelUp(bool mainHover, bool subHover, int32 hoverPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList);
    
    UFUNCTION(BlueprintCallable)
    void SkillInheritWheelDown(bool mainHover, bool subHover, int32 hoverPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList);
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritScrollUp();
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritScrollPageUp();
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritScrollPageDown();
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritScrollDown();
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritOnHoveredSlot(bool isMain, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SkillInheritOnClickedSlot(bool isMain, int32 Index, E_SKILLINHERIT_RESULT& moveResult, E_SKILLINHERIT_RESULT& decisionResult);
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritEndButton();
    
    UFUNCTION(BlueprintCallable)
    void SkillInheritDragScrollBar(bool isMain, int32 newTopPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList);
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritDecisionButton();
    
    UFUNCTION(BlueprintCallable)
    E_SKILLINHERIT_RESULT SkillInheritCancelButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUtsusemiData(int32 InSourceDevil, int32 InResultNkmIndex, bool bInDefenceAishou);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialUniteData(int32 InResultDevil, int32 InSourceDevil1, int32 InSourceDevil2, int32 InSourceDevil3, int32 InSourceDevil4, int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    void SetDoubleUniteData(int32 InResultDevil, int32 InSourceDevil1, int32 InSourceDevil2, int32 InCost);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeUpUniteTable(UMMIAsset* pAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidUtsusemi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUtsusemiDefenceAishouMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUniteAccident();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbleKeyPepeatSkillInheritScrollUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbleKeyPepeatSkillInheritScrollDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitUtsusemiSetupData();
    
    UFUNCTION(BlueprintCallable)
    void InitUniteSetupData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiSourceDevilId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetUtsusemiSelectedSkillList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUtsusemiResultNkmIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniteSkillData> GetUtsusemiPossibleSkillList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniteSourceDevilId(int32 InSourceNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetUniteSelectedSkillList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniteResultDevilId(bool bCheckAccident);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniteSkillData> GetUnitePossibleSkillList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniteExp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniteCost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAbilData GetUniteBonusParam();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillInheritHelpSkill();
    
    UFUNCTION(BlueprintCallable)
    void DestroyUniteTable();
    
    UFUNCTION(BlueprintCallable)
    void ConvSkillInheritUIParam(int32& OutParentTop, int32& OutParentCurrent, int32& OutChildTop, int32& OutChildCategory, int32& OutChildCurrent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyUtsusemiData();
    
    UFUNCTION(BlueprintCallable)
    int32 AddUnitePartyMember(bool& bEntryBible);
    
};

