#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkillSearchSortWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ASkillSearchSortWindowBase : public AActor {
    GENERATED_BODY()
public:
    ASkillSearchSortWindowBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSearchSkillNum(int32 InTargetElement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSearchSkillIDList(int32 InTargetElement);
    
};

