#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UIAnimationPlayData.h"
#include "UIAnimationTableData.h"
#include "UIAnimationTaskData.h"
#include "UIAnimtionCtrl.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUIAnimtionCtrl : public UObject {
    GENERATED_BODY()
public:
    UUIAnimtionCtrl();

    UFUNCTION(BlueprintCallable)
    FUIAnimationTaskData PlayAnimationTask(FUIAnimationTaskData animTaskData, float addTime, bool& isPlayEnd);
    
    UFUNCTION(BlueprintCallable)
    FUIAnimationPlayData PlayAnimation(FUIAnimationPlayData animPlayData, float addTime, bool& isPlayEnd);
    
    UFUNCTION(BlueprintCallable)
    void MakeUpAnimtionData(FUIAnimationPlayData& animPlayData, FUIAnimationTableData pAnimTblData, bool isReverse);
    
};

