#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_LargeMap.generated.h"

class ALandscape;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_LargeMap : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_LargeMap();

    UFUNCTION(BlueprintCallable)
    static void SetLandscapeMaterial_InDevelop(ALandscape* InLandscape, UMaterialInterface* InNewMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MapIdIsDaath(int32 mapId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CurrentMapShouldPlayMoonAgeSE(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CurrentMapIsDaath(UObject* WorldContextObject);
    
};

