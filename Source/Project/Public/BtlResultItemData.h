#pragma once
#include "CoreMinimal.h"
#include "BtlResultItemData.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsNew;
    
    PROJECT_API FBtlResultItemData();
};

