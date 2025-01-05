#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "Engine/GameEngine.h"
#include "ProjectGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class UProjectGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UProjectGameEngine();

    UFUNCTION(BlueprintCallable)
    static void FontFlush();
    
};

