#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BattleFieldWorkBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ABattleFieldWorkBase : public AActor {
    GENERATED_BODY()
public:
    ABattleFieldWorkBase(const FObjectInitializer& ObjectInitializer);

};

