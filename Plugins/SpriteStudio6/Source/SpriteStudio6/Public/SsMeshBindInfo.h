#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoreUObject.h"
#include "SsMeshBindInfo.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsMeshBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight[128];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName[128];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex[128];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset[128];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindBoneNum;
    
    FSsMeshBindInfo();
};

