#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SoundObjectHolder.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USoundObjectHolder : public UActorComponent {
    GENERATED_BODY()
public:
    USoundObjectHolder(const FObjectInitializer& ObjectInitializer);

};

