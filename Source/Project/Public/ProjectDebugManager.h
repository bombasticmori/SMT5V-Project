#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProjectDebugManager.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UProjectDebugManager : public UObject {
    GENERATED_BODY()
public:
    UProjectDebugManager();

    UFUNCTION(BlueprintCallable)
    void DebugDrawFlagChange();
    
};

