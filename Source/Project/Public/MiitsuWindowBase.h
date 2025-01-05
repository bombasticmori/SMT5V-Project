#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MiitsuWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMiitsuWindowBase : public AActor {
    GENERATED_BODY()
public:
    AMiitsuWindowBase(const FObjectInitializer& ObjectInitializer);

};

