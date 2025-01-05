#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAchievementFlag.h"
#include "BPL_Achievement.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Achievement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Achievement();

    UFUNCTION(BlueprintCallable)
    static void UpdateLatestConvertTrophyData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAchievement_Delay(const UObject* WorldContextObject, const EAchievementFlag _flag, bool _priority, float _delay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAchievement(const UObject* WorldContextObject, const EAchievementFlag _flag, bool _priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreAchievementFromDemoData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OutputLogSaveTrophyData();
    
    UFUNCTION(BlueprintCallable)
    static void OutputLogConvertTrophyData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LockAllAchievements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InstallAchievement(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AchievementIntervalChange_Priority(const UObject* WorldContextObject, float _interval);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AchievementIntervalChange_Normal(const UObject* WorldContextObject, float _interval);
    
};

