#pragma once
#include "CoreMinimal.h"
#include "CameraMapRefData.generated.h"

USTRUCT(BlueprintType)
struct FCameraMapRefData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MapPresetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayerPresetIndex;
    
    PROJECT_API FCameraMapRefData();
};

