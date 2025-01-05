#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_LID_ID.h"
#include "CharaBlinkValue.generated.h"

USTRUCT(BlueprintType)
struct FCharaBlinkValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CHARA_LID_ID LidID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    PROJECT_API FCharaBlinkValue();
};

