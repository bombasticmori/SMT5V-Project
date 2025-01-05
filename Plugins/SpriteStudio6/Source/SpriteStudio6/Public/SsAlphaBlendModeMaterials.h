#pragma once
#include "CoreMinimal.h"
#include "SsColorBlendModeMaterials.h"
#include "SsAlphaBlendModeMaterials.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsAlphaBlendModeMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Mix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Mul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Sub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials MulAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Exclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsColorBlendModeMaterials Invert;
    
    FSsAlphaBlendModeMaterials();
};

