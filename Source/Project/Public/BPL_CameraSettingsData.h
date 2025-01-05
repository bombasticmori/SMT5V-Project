#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraMapData.h"
#include "BPL_CameraSettingsData.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBPL_CameraSettingsData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CameraSettingsData();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCameraPresetData(const UObject* WorldContextObject, int32 mapId, FCameraMapData& CameraMapData);
    
};

