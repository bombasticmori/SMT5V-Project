#pragma once
#include "CoreMinimal.h"
#include "ResultTopItem.generated.h"

USTRUCT(BlueprintType)
struct FResultTopItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_IconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    PROJECT_API FResultTopItem();
};

