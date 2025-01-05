#pragma once
#include "CoreMinimal.h"
#include "MinimapPOIEntry.h"
#include "MinimapPOIOneMapData.generated.h"

USTRUCT(BlueprintType)
struct FMinimapPOIOneMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapPOIEntry> m_POIEntries;
    
    PROJECT_API FMinimapPOIOneMapData();
};

