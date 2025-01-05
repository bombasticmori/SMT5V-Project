#pragma once
#include "CoreMinimal.h"
#include "E_ICON_TYPE.h"
#include "IconData.generated.h"

USTRUCT(BlueprintType)
struct FIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_ICON_TYPE m_IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_IconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Count;
    
    PROJECT_API FIconData();
};

