#pragma once
#include "CoreMinimal.h"
#include "PlayerEtcStatusData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEtcStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RaceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GraphicsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UniqueSkillID;
    
    PROJECT_API FPlayerEtcStatusData();
};

