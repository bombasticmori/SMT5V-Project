#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BtlDescData.h"
#include "E_BAD_STATUS.h"
#include "BPL_BattleUtilLib.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleUtilLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleUtilLib();

    UFUNCTION(BlueprintCallable)
    static void SetMagatsuhiDevils(UPARAM(Ref) FBtlDescData& DescData, const int32 UseData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<E_BAD_STATUS> MakeBstArray(int32 inBst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBossRushChallengeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMagatsuhiGauge();
    
    UFUNCTION(BlueprintCallable)
    static E_BAD_STATUS GetBadStatus(int32 inBst);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBstCountAll();
    
};

