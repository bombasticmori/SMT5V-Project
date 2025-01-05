#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_EventFlag.generated.h"

UCLASS(Blueprintable)
class UBPL_EventFlag : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_EventFlag();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ValueToName(int32 flagValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventFlagValue(int32 flag, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventFlag(FName Name, bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NameToValue(const FName& flagName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllEventFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckEventFlagValue(int32 flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckEventFlag(FName Name);
    
};

