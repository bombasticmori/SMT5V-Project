#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CampCommonCharaData.h"
#include "CampItemResult.h"
#include "E_PLAYER_TYPE.h"
#include "BPL_CampItem.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CampItem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CampItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTraportLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HaveTraportItem();
    
    UFUNCTION(BlueprintCallable)
    static FCampItemResult GetItemUseCountPlayerDevil(int32 ItemId, int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static FCampItemResult GetItemUseCountPlayer(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeUseItemByScene(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool CampItem_UseAll(int32 ItemId, bool isCheck, int32 Param1);
    
    UFUNCTION(BlueprintCallable)
    static FCampItemResult CampItem_Use(int32 ItemId, int32 tarNkmIndex, E_PLAYER_TYPE plyType, bool isAll, bool isCheck, int32 Param1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampItem_IsUse(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampItem_IsPartySel(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampItem_IsCureItem(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampItem_IsAllEffect(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCampCommonCharaData> CampItem_GetUsedCharData(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CampItem_GetTabKindMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveUtsusemiItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveUseItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveSkillGetItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveRelicItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveNormalItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CampItem_GetHaveImportantItemId();
    
};

