#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_TestSoftwareKeyboard.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TestSoftwareKeyboard : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TestSoftwareKeyboard();

    UFUNCTION(BlueprintCallable)
    static void SoftwareKeyboardTest();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEndSoftwareKeyboardTest();
    
    UFUNCTION(BlueprintCallable)
    static FText GetText();
    
};

