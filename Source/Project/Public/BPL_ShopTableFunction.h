#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ShopBuyTable.h"
#include "ShopMimanItemTable.h"
#include "BPL_ShopTableFunction.generated.h"

UCLASS(Blueprintable)
class UBPL_ShopTableFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ShopTableFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistItemInShop(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShopMimanItemTableMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShopMimanItemTable GetShopMimanItemTable(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShopBuyTableMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShopBuyTable GetShopBuyTable_BySortID(int32 InSortID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShopBuyTable GetShopBuyTable(int32 Index);
    
};

