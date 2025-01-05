#pragma once
#include "CoreMinimal.h"
#include "UIWidgetBase.h"
#include "UIBtlUpliftingGaugeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIBtlUpliftingGaugeBase : public UUIWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFirstSetGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FluctuationAmount;
    
public:
    UUIBtlUpliftingGaugeBase();

    UFUNCTION(BlueprintCallable)
    void SlideOutStart();
    
    UFUNCTION(BlueprintCallable)
    void SlideInStart();
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(int32 root_gauge_value);
    
    UFUNCTION(BlueprintCallable)
    void OutStart();
    
    UFUNCTION(BlueprintCallable)
    void InStart();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SlideOutStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SlideInStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetGaugeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OutStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InStart();
    
};

