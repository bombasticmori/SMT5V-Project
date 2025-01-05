#pragma once
#include "CoreMinimal.h"
#include "MinimapLandmark.generated.h"

USTRUCT(BlueprintType)
struct FMinimapLandmark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LandmarkMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LandmarkAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandmarkLocationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandmarkLocationY;
    
    PROJECT_API FMinimapLandmark();
};

