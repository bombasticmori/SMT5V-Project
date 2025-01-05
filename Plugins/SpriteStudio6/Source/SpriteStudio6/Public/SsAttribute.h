#pragma once
#include "CoreMinimal.h"
#include "SsAttributeKind.h"
#include "SsKeyframe.h"
#include "SsAttribute.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsAttributeKind::Type> Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsKeyframe> Key;
    
    FSsAttribute();
};

