#pragma once
#include "CoreMinimal.h"
#include "SsMeshBind.h"
#include "SsPart.h"
#include "SsModel.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsPart> PartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSsMeshBind> MeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> BoneList;
    
    FSsModel();
};

