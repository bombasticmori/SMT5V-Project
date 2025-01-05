#pragma once
#include "CoreMinimal.h"
#include "SsEffectFunctionType.h"
#include "SsEffectElementBase.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsEffectFunctionType::Type> MyType;
    
    FSsEffectElementBase();
};

