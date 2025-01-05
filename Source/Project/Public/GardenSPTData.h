#pragma once
#include "CoreMinimal.h"
#include "E_TALK_TONE_TYPE.h"
#include "GardenSPTData.generated.h"

USTRUCT(BlueprintType)
struct FGardenSPTData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_TONE_TYPE m_SpeechType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChosenSPT;
    
    PROJECT_API FGardenSPTData();
};

