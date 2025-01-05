#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_SaveLoadROM.generated.h"

class UMMIAsset;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_SaveLoadROM : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_SaveLoadROM();

    UFUNCTION(BlueprintCallable)
    static void SaveLoadROM_LoadObject(UObject* pObject);
    
    UFUNCTION(BlueprintCallable)
    static void SaveLoadROM_Load(UMMIAsset* pAsset);
    
};

