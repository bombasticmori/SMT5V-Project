#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGazeTargetType.h"
#include "GazeTarget.generated.h"

UINTERFACE(Blueprintable)
class UGazeTarget : public UInterface {
    GENERATED_BODY()
};

class IGazeTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGazeTargetType GetGazeTargetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetGazeTargetLocation() const;
    
};

