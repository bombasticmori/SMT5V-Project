#pragma once
#include "CoreMinimal.h"
#include "SsRenderBlendType.h"
#include "SsEffectBehavior.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsEffectBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CellName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CellMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsRenderBlendType::Type> blendType;
    
    FSsEffectBehavior();
};

