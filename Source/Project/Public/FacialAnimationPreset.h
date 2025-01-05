#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FacialAnimationPreset_EVT01_PresetData.h"
#include "FacialAnimationPreset_EVT02_PresetData.h"
#include "FacialAnimationPreset_EVT03_PresetData.h"
#include "FacialAnimationPreset_EVT04_PresetData.h"
#include "FacialAnimationPreset_EVT05_PresetData.h"
#include "FacialAnimationPreset_EVT06_PresetData.h"
#include "FacialAnimationPreset_EVT07_PresetData.h"
#include "FacialAnimationPreset_EVT08_PresetData.h"
#include "FacialAnimationPreset.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UFacialAnimationPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT01_PresetData EVT01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT02_PresetData EVT02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT03_PresetData EVT03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT04_PresetData EVT04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT05_PresetData EVT05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT06_PresetData EVT06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT07_PresetData EVT07;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialAnimationPreset_EVT08_PresetData EVT08;
    
    UFacialAnimationPreset();

};

