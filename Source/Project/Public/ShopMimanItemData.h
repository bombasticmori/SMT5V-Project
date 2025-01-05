#pragma once
#include "CoreMinimal.h"
#include "ShopMimanItemData.generated.h"

USTRUCT(BlueprintType)
struct FShopMimanItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PROJECT_API FShopMimanItemData();
};

