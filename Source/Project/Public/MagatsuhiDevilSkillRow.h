#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MagatsuhiDevilSkillRow.generated.h"

USTRUCT(BlueprintType)
struct FMagatsuhiDevilSkillRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    PROJECT_API FMagatsuhiDevilSkillRow();
};

