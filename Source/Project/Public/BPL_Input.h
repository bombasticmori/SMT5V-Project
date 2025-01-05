#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "E_KeyboardLanguage.h"
#include "BPL_Input.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_Input : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Input();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyName_KeyboardLanguage(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_KeyboardLanguage GetKeyboardLanguage();
    
    UFUNCTION(BlueprintCallable)
    static FKey ConvertButton_ForGamepad(FKey prevKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckConnect_PsGamepad(bool isLog, FString& outLog);
    
};

