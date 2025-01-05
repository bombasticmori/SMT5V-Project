#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraAnimationDofKey.h"
#include "CameraAnimationFovKey.h"
#include "CameraAnimationLocKey.h"
#include "CameraAnimationRotKey.h"
#include "CameraAnimationAsset.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCameraAnimationAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAnimationLocKey> LocKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAnimationRotKey> RotKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAnimationFovKey> FovKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAnimationDofKey> DofKeys;
    
    UCameraAnimationAsset();

};

