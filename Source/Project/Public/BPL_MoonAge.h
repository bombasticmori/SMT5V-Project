#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_MOON_AGE.h"
#include "BPL_MoonAge.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_MoonAge : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MoonAge();

    UFUNCTION(BlueprintCallable)
    static FString E_MOON_AGE_ToString(E_MOON_AGE EnumValue);
    
};

