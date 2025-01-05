#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "BattleActorComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattleActorComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UBattleActorComponentBase(const FObjectInitializer& ObjectInitializer);

};

