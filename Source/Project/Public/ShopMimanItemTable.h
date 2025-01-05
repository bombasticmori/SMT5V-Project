#pragma once
#include "CoreMinimal.h"
#include "ShopMimanItemData.h"
#include "ShopMimanItemTable.generated.h"

USTRUCT(BlueprintType)
struct FShopMimanItemTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MimanNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShopMimanItemData> ItemList;
    
    PROJECT_API FShopMimanItemTable();
};

