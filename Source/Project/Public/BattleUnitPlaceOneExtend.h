#pragma once
#include "CoreMinimal.h"
#include "BattleUnitPlaceOne.h"
#include "BattleUnitPlaceOneExtend.generated.h"

USTRUCT(BlueprintType)
struct FBattleUnitPlaceOneExtend : public FBattleUnitPlaceOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Tall;
    
    PROJECT_API FBattleUnitPlaceOneExtend();
};

