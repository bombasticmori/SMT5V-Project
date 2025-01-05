#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "GameFramework/CheatManager.h"
#include "PlayerCheatManager.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UPlayerCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPlayerCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void SlomoUp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SlomoReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SlomoFast();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SlomoDown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreloadTestM061();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool PlayerWalk();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool PlayerGhost();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool PlayerFly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugFlyMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugGazeEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMenu();
    
};

