#pragma once
#include "CoreMinimal.h"
#include "E_RECORD_DISP_TYPE.h"
#include "RecordData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_RECORD_DISP_TYPE m_DispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDisp;
    
    FRecordData();
};

