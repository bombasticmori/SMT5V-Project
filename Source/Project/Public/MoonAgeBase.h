#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MoonAgeBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AMoonAgeBase : public AActor {
    GENERATED_BODY()
public:
    AMoonAgeBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoonAgeUpdateCount(bool IsTokyo);
    
    UFUNCTION(BlueprintCallable)
    bool checkUpdateMoonAge(const float checkValue);
    
    UFUNCTION(BlueprintCallable)
    void addMoonAgeCount();
    
};

