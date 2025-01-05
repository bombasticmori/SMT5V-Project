#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapWarpPoint.generated.h"

UCLASS(Blueprintable)
class AMapWarpPoint : public AActor {
    GENERATED_BODY()
public:
    AMapWarpPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetWarpPointName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWarpPointIndex() const;
    
};

