#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EncountPostDataBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AEncountPostDataBase : public AActor {
    GENERATED_BODY()
public:
    AEncountPostDataBase(const FObjectInitializer& ObjectInitializer);

};

