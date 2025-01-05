#pragma once
#include "CoreMinimal.h"
#include "SsMeshBindInfo.h"
#include "SsMeshBind.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsMeshBind {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsMeshBindInfo> MeshVerticesBindArray;
    
    FSsMeshBind();
};

