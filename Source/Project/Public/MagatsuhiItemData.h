#pragma once
#include "CoreMinimal.h"
#include "MagatsuhiItemData.generated.h"

USTRUCT(BlueprintType)
struct FMagatsuhiItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    PROJECT_API FMagatsuhiItemData();
};

