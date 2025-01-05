#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_FacilitySaveData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_FacilitySaveData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_FacilitySaveData();

    UFUNCTION(BlueprintCallable)
    static void SetFacilityReturnMap(int32 mapId, int32 AreaId, int32 warpPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFacilityReturnMap(int32& mapId, int32& AreaId, int32& warpPoint);
    
};

