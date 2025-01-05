#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenTalkCollision.generated.h"

USTRUCT(BlueprintType)
struct FGardenTalkCollision : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CollisionHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CollisionLocationZ;
    
    PROJECT_API FGardenTalkCollision();
};

