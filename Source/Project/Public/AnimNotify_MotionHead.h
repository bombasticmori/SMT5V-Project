#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_MotionHead.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PROJECT_API UAnimNotify_MotionHead : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_MotionHead();

};

