#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BPC_EncountAreaManager.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBPC_EncountAreaManager : public UActorComponent {
    GENERATED_BODY()
public:
    UBPC_EncountAreaManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterEncountAreaActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void StartAfterLoadedCounter(float startTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool Pause);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEncountAreaActors(TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEncountAreaActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetEncountAreaActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearEncountAreaActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAfterLoaded();
    
};

