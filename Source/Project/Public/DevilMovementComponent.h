#pragma once
#include "CoreMinimal.h"
#include "CharaMovementComponent.h"
#include "DevilMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UDevilMovementComponent : public UCharaMovementComponent {
    GENERATED_BODY()
public:
    UDevilMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRootMotion(bool Enable);
    
};

