#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_TestSaveLoad.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TestSaveLoad : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TestSaveLoad();

    UFUNCTION(BlueprintCallable)
    static bool SaveTest(int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGamePlatformUI();
    
    UFUNCTION(BlueprintCallable)
    static void LoadTest(bool bAttemptToUseUI);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadGamePlatformUI();
    
};

