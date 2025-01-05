#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MakkaWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMakkaWindowBase : public AActor {
    GENERATED_BODY()
public:
    AMakkaWindowBase(const FObjectInitializer& ObjectInitializer);

};

