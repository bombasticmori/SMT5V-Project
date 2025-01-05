#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AtomSound.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API AAtomSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    AAtomSound(const FObjectInitializer& ObjectInitializer);

};

