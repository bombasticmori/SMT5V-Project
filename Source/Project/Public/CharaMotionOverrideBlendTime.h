#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionOverrideBlendTime.generated.h"

USTRUCT(BlueprintType)
struct FCharaMotionOverrideBlendTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_CHARA_MOTION_ID, float> OverrideBlendTime;
    
    PROJECT_API FCharaMotionOverrideBlendTime();
};

