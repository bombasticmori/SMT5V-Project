#pragma once
#include "CoreMinimal.h"
#include "SsUserDataValue.h"
#include "SsUserData.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsUserDataValue Value;
    
    FSsUserData();
};

