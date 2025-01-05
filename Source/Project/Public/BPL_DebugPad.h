#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "OnSimultaneouslyInputDelegate.h"
#include "BPL_DebugPad.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_DebugPad : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DebugPad();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterSimultaneouslyInputEvent(UObject* WorldContextObject, const FKey Input1, const FKey Input2, const FOnSimultaneouslyInput& Event);
    
};

