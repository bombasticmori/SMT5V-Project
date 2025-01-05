#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StatusSkillCtrlBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AStatusSkillCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AStatusSkillCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateSkillListAnimation(int32 InType, bool InCursorOn);
    
    UFUNCTION(BlueprintCallable)
    bool StopListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartListAnimation(bool InCursorAnimation);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeOutListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetPartySkillPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool IsListAnimation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillDisplayNumber();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSkillList();
    
    UFUNCTION(BlueprintCallable)
    bool CreatePartySkillList(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePartyMagatsuhiSkillList(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESkillPanelDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetUniquePanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillPanelFaceIconColor(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillPanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillNameColor(int32 InIndex, int32 InUseSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillCursorAnimationByUseAnimeType(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSkillCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetMagatsuhiPanel(int32 InIndex, int32 InSkillId, int32 InFaceIconId, int32 InCost, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeListAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBlankPanel(int32 InIndex, int32 InBlankType, int32 InFaceIconId, int32 InUseSkill, bool InDispOnFlag, bool InDispOnFaceIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillNoDataTextDispOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelSkillNoDataTextDispOff();
    
};

