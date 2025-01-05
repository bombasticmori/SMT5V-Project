#pragma once
#include "CoreMinimal.h"
#include "EDevilVoiceType.h"
#include "DevilVoiceContainer.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FDevilVoiceContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDevilVoiceType, TSoftObjectPtr<USoundAtomCue>> VoiceMap;
    
    PROJECT_API FDevilVoiceContainer();
};

