#pragma once
#include "CoreMinimal.h"
#include "CharaLipSyncBlend.generated.h"

USTRUCT(BlueprintType)
struct FCharaLipSyncBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutTime;
    
    PROJECT_API FCharaLipSyncBlend();
};

