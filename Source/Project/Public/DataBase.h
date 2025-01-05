#pragma once
#include "CoreMinimal.h"
#include "AnalyzeData.h"
#include "DataBase.generated.h"

USTRUCT(BlueprintType)
struct FDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyzeData> m_AnalyzeData;
    
    PROJECT_API FDataBase();
};

