#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WalkableSlopeOverride -FallbackName=WalkableSlopeOverride
#include "BPL_TestLandscape.generated.h"

class ALandscape;

UCLASS(Blueprintable)
class PROJECT_API UBPL_TestLandscape : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TestLandscape();

private:
    UFUNCTION(BlueprintCallable)
    static void SetWalkableSlopeOverride(const ALandscape* target, const FWalkableSlopeOverride& NewOverride);
    
};

