#pragma once
#include "CoreMinimal.h"
#include "E_UNITECHARAPANEL_DEVILDATATYPE.h"
#include "SpecialFusionSourceDevil.generated.h"

USTRUCT(BlueprintType)
struct FSpecialFusionSourceDevil {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_UNITECHARAPANEL_DEVILDATATYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    PROJECT_API FSpecialFusionSourceDevil();
};

