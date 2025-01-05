#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrismFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PRISM_API UPrismFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrismFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetInFocus(bool bInFocus);
    
    UFUNCTION(BlueprintCallable)
    static void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    static void PushMessage(const FString& EventId, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessage(const FString& Key, const FString& Value);
    
};

