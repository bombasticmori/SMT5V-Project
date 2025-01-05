#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_CAMPSKILLLIST_CANSELTYPE.h"
#include "CampSkillCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACampSkillCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampSkillCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateSkillListAnimation(int32 InType, bool InCursorOn, int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    bool StopListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartUseSkillListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOn);
    
    UFUNCTION(BlueprintCallable)
    bool StartListAnimation(bool InCursorAnimation, int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeOutListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiSkillPanel(int32 InType, int32 InCursorType);
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortType(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortSkillList(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SetSortAscending(bool InAscending);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkillPanelPositionBySelectSkill();
    
    UFUNCTION(BlueprintCallable)
    bool SetSkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedDarkmaskOn();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedDarkmaskOff(int32 InCanselType);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartySkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetFusionResultSkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetDevilBookSkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnalyzeSkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnalyzeDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool RestartUtsusemiSkillList(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ResetSortMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveUtsusemiCursor(int32 InMoveCursor);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveSortType(int32 InMoveSortType);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveCursor(int32 InMoveCursor, int32 InScrollStartOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeSkillListCursor();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeMagatsuhiGauge();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiSkillCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCursorSkillId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCursorListIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCursorDispIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUseSkillCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSortType();
    
    UFUNCTION(BlueprintCallable)
    bool GetSortAscending();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillDisplayNumber();
    
    UFUNCTION(BlueprintCallable)
    E_CAMPSKILLLIST_CANSELTYPE GetReasonForCansel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMagatsuhiGaugeMode();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorSkillId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorNkmIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorListIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorDispIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCanBeUseSkillNumber();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSkillList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiSkillListForCampOnly();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiSkillList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSkillList();
    
    UFUNCTION(BlueprintCallable)
    bool CreatePartySkillList(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePartyMagatsuhiSkillList(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateFusionResultSkillList(int32 InDevilId, bool bInUnknown);
    
    UFUNCTION(BlueprintCallable)
    bool CreateFusionResultMagatsuhiSkillList(int32 InDevilId, bool bInUnknown);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDevilBookSkillList(int32 InDevilId, int32 InDevilBookType);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDevilBookMagatsuhiSkillList(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool CreateAnalyzeSkillList(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool CreateAnalyzeMagatsuhiSkillList(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSortAscending();
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeUsedSelectedSkill();
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClicked(float InRate);
    
    UFUNCTION(BlueprintCallable)
    bool CalcCanBeUseSkill(int32 InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEStopListAnimationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESkillPanelDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESkillPanelDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetUseTypeWidget(int32 InIndex, int32 InUseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetUniquePanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillSelectCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillPanelFaceIconColor(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillPanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillNameColor(int32 InIndex, int32 InUseSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillName(int32 InIndex, int32 InSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillCursorAnimationByUseAnimeType(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillCost(int32 InIndex, int32 InSkillCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetMagatsuhiPanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetMagatsuhiGaugeAnimation(int32 InMode, int32 InRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeListAnimation(int32 InIndex, int32 InType, bool InCursorOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBlankPanel(int32 InIndex, int32 InBlankType, int32 InFaceIconId, int32 InUseSkill, bool InDispOnFlag, bool InDispOnFaceIcon, bool InDispOnMagatsuhi);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillNoDataTextDispOn(bool InHelpMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillNoDataTextDispOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillDarkMaskDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillDarkMaskDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortSkillData();
    
};

