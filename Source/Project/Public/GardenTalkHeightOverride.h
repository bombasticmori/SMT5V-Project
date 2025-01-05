#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenTalkCameraParam.h"
#include "GardenTalkHeightOverride.generated.h"

USTRUCT(BlueprintType)
struct FGardenTalkHeightOverride : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTalkCameraParam m_CamParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Gaze_Target;
    
    PROJECT_API FGardenTalkHeightOverride();
};

