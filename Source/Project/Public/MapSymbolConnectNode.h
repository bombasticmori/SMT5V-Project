#pragma once
#include "CoreMinimal.h"
#include "MapSymbolConnectNode.generated.h"

USTRUCT(BlueprintType)
struct FMapSymbolConnectNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Cost;
    
    PROJECT_API FMapSymbolConnectNode();
};

