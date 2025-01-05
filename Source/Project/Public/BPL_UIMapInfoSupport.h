#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_UIMapInfoSupport.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROJECT_API UBPL_UIMapInfoSupport : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_UIMapInfoSupport();

    UFUNCTION(BlueprintCallable)
    static AActor* SpawnMapInfoActor(UClass* pClass);
    
};

