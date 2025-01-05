#pragma once
#include "CoreMinimal.h"
#include "ItemDrop.generated.h"

USTRUCT(BlueprintType)
struct FItemDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Flag;
    
    PROJECT_API FItemDrop();
};

