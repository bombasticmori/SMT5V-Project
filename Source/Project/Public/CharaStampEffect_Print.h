#pragma once
#include "CoreMinimal.h"
#include "CharaStampEffect_Print.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCharaStampEffect_Print {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    PROJECT_API FCharaStampEffect_Print();
};

