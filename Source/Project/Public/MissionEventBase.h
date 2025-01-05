#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MissionEventBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMissionEventBase : public AActor {
    GENERATED_BODY()
public:
    AMissionEventBase(const FObjectInitializer& ObjectInitializer);

};

