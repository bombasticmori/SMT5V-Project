#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_MapLoad.generated.h"

class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_MapLoad : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapLoad();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* StreamingLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PreloadMap(UObject* WorldContextObject, int32 mapId, int32 AreaId);
    
};

