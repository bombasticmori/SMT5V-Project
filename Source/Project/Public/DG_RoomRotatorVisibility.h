#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DG_RoomRotatorVisibility.generated.h"

class ADG_RoomRotator;

UCLASS(Blueprintable)
class PROJECT_API ADG_RoomRotatorVisibility : public AActor {
    GENERATED_BODY()
public:
    ADG_RoomRotatorVisibility(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(const FVector& PlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterRotators();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRotators(const TArray<ADG_RoomRotator*>& Rotators);
    
};

