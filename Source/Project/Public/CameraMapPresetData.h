#pragma once
#include "CoreMinimal.h"
#include "CameraViewPresetData.h"
#include "E_CAMERA_MAP_TYPE.h"
#include "CameraMapPresetData.generated.h"

USTRUCT(BlueprintType)
struct FCameraMapPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMERA_MAP_TYPE m_MapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraTraceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewPresetData m_Camera_Narrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewPresetData m_Camera_Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewPresetData m_Camera_Wide;
    
    PROJECT_API FCameraMapPresetData();
};

