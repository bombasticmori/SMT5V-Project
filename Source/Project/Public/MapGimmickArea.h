#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapGimmickArea.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMapGimmickArea : public AActor {
    GENERATED_BODY()
public:
    AMapGimmickArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetActors_ThisLevel();
    
};

