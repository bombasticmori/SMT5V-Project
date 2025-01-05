#pragma once
#include "CoreMinimal.h"
#include "SsAttribute.h"
#include "SsPartAnime.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsPartAnime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsAttribute> Attributes;
    
    FSsPartAnime();
};

