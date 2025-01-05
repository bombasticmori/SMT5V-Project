#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_SHOP_ITEM_SORT_TYPE.h"
#include "ShopItemData.h"
#include "ShopItemList.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UShopItemList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShopItemData> m_ItemList;
    
public:
    UShopItemList();

    UFUNCTION(BlueprintCallable)
    void Sort(E_SHOP_ITEM_SORT_TYPE Type, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    void SetNewItemFlag(int32 Index, bool bNew);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Remove(const FShopItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FShopItemData> GetList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataIndex(const FShopItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FShopItemData GetData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintCallable)
    void Add(const FShopItemData& Data);
    
};

