#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapActorCoreCPP.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMapActorCoreCPP : public AActor {
    GENERATED_BODY()
public:
    AMapActorCoreCPP(const FObjectInitializer& ObjectInitializer);

};

