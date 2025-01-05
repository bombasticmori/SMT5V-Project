#pragma once
#include "CoreMinimal.h"
#include "CameraViewPresetData.generated.h"

USTRUCT(BlueprintType)
struct FCameraViewPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CameraRootHeight;
    
    PROJECT_API FCameraViewPresetData();
};

