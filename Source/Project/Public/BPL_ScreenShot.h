#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_ScreenShot.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_ScreenShot : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ScreenShot();

    UFUNCTION(BlueprintCallable)
    static void SwitchScreenShotEnable(bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void EnableScreenShot();
    
    UFUNCTION(BlueprintCallable)
    static void DisableScreenShot();
    
};

