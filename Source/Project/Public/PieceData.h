#pragma once
#include "CoreMinimal.h"
#include "E_PIECE_TYPE.h"
#include "PieceData.generated.h"

USTRUCT(BlueprintType)
struct FPieceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_PIECE_TYPE m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    PROJECT_API FPieceData();
};

