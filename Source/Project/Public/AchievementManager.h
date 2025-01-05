#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CoreUObject.h"
#include "EAchievementFlag.h"
#include "AchievementManager.generated.h"

class UAchievementManager;

UCLASS(Blueprintable)
class PROJECT_API UAchievementManager : public UObject {
    GENERATED_BODY()
public:
    UAchievementManager();

    UFUNCTION(BlueprintCallable)
    void UpdateLatestUnlockList();
    
    UFUNCTION(BlueprintCallable)
    void LockAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAchievementManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CallUnlock(const EAchievementFlag _flag, bool _priority, float _interval);
    
    UFUNCTION(BlueprintCallable)
    void CallCheck(float _interval);
    
    UFUNCTION(BlueprintCallable)
    void CallCached();
    
};

