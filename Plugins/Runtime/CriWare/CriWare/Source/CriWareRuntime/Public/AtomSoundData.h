#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AtomSoundData.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, MinimalAPI)
class AAtomSoundData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    AAtomSoundData(const FObjectInitializer& ObjectInitializer);

};

