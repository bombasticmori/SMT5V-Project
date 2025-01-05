#pragma once
#include "CoreMinimal.h"
#include "CharaMotion.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FCharaMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimationDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimationLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    PROJECT_API FCharaMotion();
};

