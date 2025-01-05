#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DLCAnnouncerBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ADLCAnnouncerBase : public AActor {
    GENERATED_BODY()
public:
    ADLCAnnouncerBase(const FObjectInitializer& ObjectInitializer);

};

