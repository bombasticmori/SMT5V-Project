#pragma once
#include "CoreMinimal.h"
#include "E_CAMERA_PLAYER_TYPE.h"
#include "CameraPlayerPresetData.generated.h"

USTRUCT(BlueprintType)
struct FCameraPlayerPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMERA_PLAYER_TYPE m_PlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MinCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxCameraPitch;
    
    PROJECT_API FCameraPlayerPresetData();
};

