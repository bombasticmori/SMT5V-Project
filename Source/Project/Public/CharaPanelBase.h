#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharaPanelBaseData.h"
#include "E_BAD_STATUS.h"
#include "E_CHARAPANEL_SUPPORTICON_TYPE.h"
#include "CharaPanelBase.generated.h"

class UObject;
class UTexture;

UCLASS(Blueprintable)
class ACharaPanelBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPanelBaseData m_CharaPanelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pmsPanelIcon;
    
    ACharaPanelBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StopPanelRecoveryAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartPanelRecoveryAnimation(float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartNumberCountAnimation(int32 InPosMode);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSupportParameter(E_CHARAPANEL_SUPPORTICON_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterText(int32 Type, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(int32 Type, int32 param0, int32 Param1, int32 Param2);
    
    UFUNCTION(BlueprintCallable)
    bool SetPAnimeStack(int32 InType, float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetNextPAnimeStack();
    
    UFUNCTION(BlueprintCallable)
    bool SetGaugeAlphaAnimation(int32 InType, bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    int32 SetBadstatusParameter(E_BAD_STATUS Type);
    
    UFUNCTION(BlueprintCallable)
    bool SetActorMoveMode(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    int32 ResetSupportParameter(E_CHARAPANEL_SUPPORTICON_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    int32 ResetBadstatusParameter(E_BAD_STATUS Type);
    
    UFUNCTION(BlueprintCallable)
    bool ResetActorMoveMode();
    
    UFUNCTION(BlueprintCallable)
    UObject* LoadCharaPanelIcon(int32 InCharaId);
    
    UFUNCTION(BlueprintCallable)
    bool IsPanelRecoveryAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsAdjustParam(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    FText GetParameterText(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetParameter(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetNumberCountAnimationPosition(int32 InMode, int32 InMove, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    float GetGaugeRatio(int32 param0, int32 Param1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGaugeAlpha(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    E_BAD_STATUS GetBadstatusParameter(int32 InPosition);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAdjustParamType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAdjustParam(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActorMovePosition(int32 InPosMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActorMoveMode();
    
    UFUNCTION(BlueprintCallable)
    int32 ForceFinishedAdjustParam(int32 Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DeleteCharaPanel();
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcParameter(int32 Type, int32 param0, int32 Param1, int32 Param2, bool execution);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcAdjustParam(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    bool CalcActorMoveProc(float InDelta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSupportIcon(E_CHARAPANEL_SUPPORTICON_TYPE argSupportType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetRecoveryAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetActorMovePosition();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEResetSupportIcon(E_CHARAPANEL_SUPPORTICON_TYPE argSupportType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPAnimeSetSummonPanelFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPAnimeSetPanelFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPAnimeSetEmptyPanelFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPAnimeIsPanelFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPAnimeIsPanelFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIECalcGaugeAlpha();
    
};

