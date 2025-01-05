#pragma once
#include "CoreMinimal.h"
#include "E_PLAYER_TYPE.h"
#include "CampCommonCharaData.generated.h"

USTRUCT(BlueprintType)
struct FCampCommonCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NkmIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_PLAYER_TYPE m_PlayerType;
    
    PROJECT_API FCampCommonCharaData();
};

