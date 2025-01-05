#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveQuat -FallbackName=InterpCurveQuat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "PathCurves.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FPathCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat Param8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat ReparamTable;
    
    FPathCurves();
};

