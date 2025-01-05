#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CampMissionCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACampMissionCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampMissionCtrlBase(const FObjectInitializer& ObjectInitializer);

};

