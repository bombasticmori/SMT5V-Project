#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_LIP_ID.h"
#include "CharaLipSyncValue.generated.h"

USTRUCT(BlueprintType)
struct FCharaLipSyncValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CHARA_LIP_ID LipID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    PROJECT_API FCharaLipSyncValue();
};

