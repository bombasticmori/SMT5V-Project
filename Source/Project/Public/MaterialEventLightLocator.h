#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MaterialEventLightLocator.generated.h"

UCLASS(Blueprintable)
class AMaterialEventLightLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    AMaterialEventLightLocator(const FObjectInitializer& ObjectInitializer);

};

