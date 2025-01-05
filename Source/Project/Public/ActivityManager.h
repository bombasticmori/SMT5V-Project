#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "EActivityType.h"
#include "ActivityManager.generated.h"

class UActivityManager;

UCLASS(Blueprintable)
class PROJECT_API UActivityManager : public UObject {
    GENERATED_BODY()
public:
    UActivityManager();

    UFUNCTION(BlueprintCallable)
    void ResetCardType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActivityType GetCardType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UActivityManager* Get(const UObject* WorldContextObject);
    
};

