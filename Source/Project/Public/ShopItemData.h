#pragma once
#include "CoreMinimal.h"
#include "ShopItemData.generated.h"

USTRUCT(BlueprintType)
struct FShopItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewItem;
    
    PROJECT_API FShopItemData();
};

