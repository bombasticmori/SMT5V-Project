#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UCustomComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCustomComponent(const FObjectInitializer& ObjectInitializer);

};

