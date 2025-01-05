#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_PlatformTerms.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_PlatformTerms : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_PlatformTerms();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlatformTerm_DLC_Short();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlatformTerm_DLC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlatformTerm_Button();
    
};

