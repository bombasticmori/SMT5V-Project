#pragma once
#include "CoreMinimal.h"
#include "SsEffectModel.h"
#include "SsEffectFile.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsEffectFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsEffectModel EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FSsEffectFile();
};

