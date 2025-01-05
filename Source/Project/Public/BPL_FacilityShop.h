#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ShopSaveData.h"
#include "BPL_FacilityShop.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_FacilityShop : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_FacilityShop();

    UFUNCTION(BlueprintCallable)
    static void SetShopRelicEventFlag(bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetShopNewItemFlag(int32 ItemId, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetShopMimanRewardFlag(int32 ID, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetShopFirstFlag(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LotShopExitMessage(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LotShopEnterMessage(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenShopMimanRewardMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShopSaveData GetShopSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void ClearShopNewItemFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearShopMimanRewardFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearShopCommonFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckShopRelicEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckShopNewItemFlag(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckShopMimanRewardFlag(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckShopFirstFlag();
    
};

