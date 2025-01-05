#pragma once
#include "CoreMinimal.h"
#include "BattlePartyData.generated.h"

USTRUCT(BlueprintType)
struct FBattlePartyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    PROJECT_API FBattlePartyData();
};

