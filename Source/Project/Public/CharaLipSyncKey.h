#pragma once
#include "CoreMinimal.h"
#include "CharaLipSyncBlend.h"
#include "CharaLipSyncValue.h"
#include "CharaLipSyncKey.generated.h"

USTRUCT(BlueprintType)
struct FCharaLipSyncKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaLipSyncValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaLipSyncBlend Blend;
    
    PROJECT_API FCharaLipSyncKey();
};

