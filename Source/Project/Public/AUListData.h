#pragma once
#include "CoreMinimal.h"
#include "AUListData.generated.h"

USTRUCT(BlueprintType)
struct FAUListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CmpSkillId;
    
    PROJECT_API FAUListData();
};

