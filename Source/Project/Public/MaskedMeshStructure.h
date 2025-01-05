#pragma once
#include "CoreMinimal.h"
#include "MaskedMeshStructure.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct PROJECT_API FMaskedMeshStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MaskedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceID;
    
    FMaskedMeshStructure();
};

