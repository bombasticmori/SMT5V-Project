#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TutorialWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ATutorialWindowBase : public AActor {
    GENERATED_BODY()
public:
    ATutorialWindowBase(const FObjectInitializer& ObjectInitializer);

};

