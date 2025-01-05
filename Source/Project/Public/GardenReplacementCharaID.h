#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenReplacementCharaID.generated.h"

USTRUCT(BlueprintType)
struct FGardenReplacementCharaID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReplacementCharaID;
    
    PROJECT_API FGardenReplacementCharaID();
};

