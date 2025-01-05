#pragma once
#include "CoreMinimal.h"
#include "EFadeType.h"
#include "BGMState.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FBGMState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFadeType FadeType;
    
    PROJECT_API FBGMState();
};

