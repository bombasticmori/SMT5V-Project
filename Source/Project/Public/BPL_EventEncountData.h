#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EventEncountData.h"
#include "BPL_EventEncountData.generated.h"

UCLASS(Blueprintable)
class UBPL_EventEncountData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_EventEncountData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnlockBossRush(const int32& eventEncountId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstClearBossRushOriginalMode(const int32& eventEncountId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventEncountData GetEvtEncountData(int32 encount_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEventEncountDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBossRushChallengeModeLevel(const int32& eventEncountId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBossRushOneDataAll();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBossRushChallengeMode(const int32& eventEncountId);
    
};

