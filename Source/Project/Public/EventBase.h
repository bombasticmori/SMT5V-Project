#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EventBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AEventBase : public AActor {
    GENERATED_BODY()
public:
    AEventBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPauseMovieEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTalkPart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingMovieEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPauseMovieEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPauseMovieEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckPauseEvent();
    
};

