#pragma once
#include "CoreMinimal.h"
#include "CameraMapPresetData.h"
#include "CameraPlayerPresetData.h"
#include "CameraMapData.generated.h"

USTRUCT(BlueprintType)
struct FCameraMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraMapPresetData MapPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraPlayerPresetData PlayerPreset;
    
    PROJECT_API FCameraMapData();
};

