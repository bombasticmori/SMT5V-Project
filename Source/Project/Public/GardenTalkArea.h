#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenTalkArea.generated.h"

USTRUCT(BlueprintType)
struct FGardenTalkArea : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TalkAreaXYScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TalkAreaZScale;
    
    PROJECT_API FGardenTalkArea();
};

