#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "FacialAnimationPreset_EVT05_PresetData.generated.h"

USTRUCT(BlueprintType)
struct FFacialAnimationPreset_EVT05_PresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadowColor_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    PROJECT_API FFacialAnimationPreset_EVT05_PresetData();
};

