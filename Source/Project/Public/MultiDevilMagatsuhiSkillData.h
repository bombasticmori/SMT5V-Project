#pragma once
#include "CoreMinimal.h"
#include "DevilAttrType.h"
#include "MultiDevilMagatsuhiSkillData.generated.h"

USTRUCT(BlueprintType)
struct FMultiDevilMagatsuhiSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDevilAttrType> m_DevilAttr;
    
    PROJECT_API FMultiDevilMagatsuhiSkillData();
};

