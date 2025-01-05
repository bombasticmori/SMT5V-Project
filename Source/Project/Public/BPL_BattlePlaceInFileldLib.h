#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BattleUnitPlaceOne.h"
#include "E_BTL_FIELD_TYPE.h"
#include "BPL_BattlePlaceInFileldLib.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattlePlaceInFileldLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattlePlaceInFileldLib();

    UFUNCTION(BlueprintCallable)
    static bool BattlePlaceInFieldSetPost(int32 fieldGrid_X, int32 fieldGrid_Y, FBattleUnitPlaceOne place, int32 postIndex, TArray<int32>& pResult);
    
    UFUNCTION(BlueprintCallable)
    static int32 BattlePlaceInFieldGetPostIndex(int32 fieldGrid_X, int32 fieldGrid_Y, FBattleUnitPlaceOne place, int32 postIndex, TArray<int32>& pResult);
    
    UFUNCTION(BlueprintCallable)
    static void BattlePlaceInFieldGetInfo(FBattleUnitPlaceOne place, int32& vertical, int32& horizontal, int32& tall);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNewPlaceInFieldFree(int32 fieldGrid_X, int32 fieldGrid_Y, TArray<FBattleUnitPlaceOne> unitArray, bool& pFinished, bool& pSuccess, TArray<int32>& pResult, bool isReplace);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNewPlaceInField(E_BTL_FIELD_TYPE Type, TArray<FBattleUnitPlaceOne> unitArray, bool& pFinished, bool& pSuccess, TArray<int32>& pResult);
    
};

