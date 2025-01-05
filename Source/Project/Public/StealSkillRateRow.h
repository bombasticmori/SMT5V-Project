#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StealSkillRateRow.generated.h"

USTRUCT(BlueprintType)
struct FStealSkillRateRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MagatushiSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillID2;
    
    PROJECT_API FStealSkillRateRow();
};

