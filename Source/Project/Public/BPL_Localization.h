#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_Localization.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_Localization : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Localization();

    UFUNCTION(BlueprintCallable)
    static FString GetPlatformLanguage();
    
};

