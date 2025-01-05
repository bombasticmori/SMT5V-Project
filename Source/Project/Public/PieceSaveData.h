#pragma once
#include "CoreMinimal.h"
#include "PieceSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FPieceSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PieceHaveNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_PieceHaveFlag;
    
    FPieceSaveData();
};

