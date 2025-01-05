#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_Actor.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Actor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Actor();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActorBegunPlay(const AActor* target);
    
};

