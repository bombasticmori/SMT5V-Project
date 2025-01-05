#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AtomDisposer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AAtomDisposer : public AActor {
    GENERATED_BODY()
public:
    AAtomDisposer(const FObjectInitializer& ObjectInitializer);

};

