#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_OptionBrightness.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_OptionBrightness : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_OptionBrightness();

    UFUNCTION(BlueprintCallable)
    static void SetDisplayGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDisplayGamma();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDisplayGamma();
    
};

