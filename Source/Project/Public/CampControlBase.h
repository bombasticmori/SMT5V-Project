#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_CAMP_DEBUG_UPDATE_TASK_TYPE.h"
#include "CampControlBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ACampControlBase : public AActor {
    GENERATED_BODY()
public:
    ACampControlBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckCampOpenFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddTaskDebugUpDate(E_CAMP_DEBUG_UPDATE_TASK_TYPE taskType);
    
};

