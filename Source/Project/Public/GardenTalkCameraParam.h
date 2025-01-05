#pragma once
#include "CoreMinimal.h"
#include "GardenTalkCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FGardenTalkCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDevilHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAdjustHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraArmlength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFOV;
    
    PROJECT_API FGardenTalkCameraParam();
};

