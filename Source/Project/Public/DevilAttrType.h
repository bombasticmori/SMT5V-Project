#pragma once
#include "CoreMinimal.h"
#include "DevilAttrType.generated.h"

USTRUCT(BlueprintType)
struct FDevilAttrType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Attr1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Attr2;
    
    PROJECT_API FDevilAttrType();
};

