#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "E_WIDGET_TICK_TASK_TYPE.h"
#include "UIWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isTickCallOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<E_WIDGET_TICK_TASK_TYPE> m_TickTaskArray;
    
public:
    UUIWidgetBase();

    UFUNCTION(BlueprintCallable)
    void TickCallTaskAllClear();
    
    UFUNCTION(BlueprintCallable)
    void DelTickCallTask(E_WIDGET_TICK_TASK_TYPE taskType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTickCall(bool isOn);
    
    UFUNCTION(BlueprintCallable)
    void AddTickCallTask(E_WIDGET_TICK_TASK_TYPE taskType);
    
};

