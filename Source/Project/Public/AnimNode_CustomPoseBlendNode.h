#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "AnimNode_CustomPoseBlendNode.generated.h"

class UCurveFloat;
class UCustomPoseWeightTable;
class UPoseAsset;

USTRUCT(BlueprintType)
struct PROJECT_API FAnimNode_CustomPoseBlendNode : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseAsset* PoseAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomPoseWeightTable* PoseWeightTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    FAnimNode_CustomPoseBlendNode();
};

