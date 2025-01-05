#pragma once
#include "CoreMinimal.h"
#include "TakaraItemList.generated.h"

USTRUCT(BlueprintType)
struct FTakaraItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Makka;
    
    PROJECT_API FTakaraItemList();
};

