#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DrawDebugPauseHelper.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ADrawDebugPauseHelper : public AActor {
    GENERATED_BODY()
public:
    ADrawDebugPauseHelper(const FObjectInitializer& ObjectInitializer);

};

