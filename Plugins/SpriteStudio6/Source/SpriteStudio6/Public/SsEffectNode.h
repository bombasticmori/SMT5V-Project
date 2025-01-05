#pragma once
#include "CoreMinimal.h"
#include "SsEffectBehavior.h"
#include "SsEffectNodeType.h"
#include "SsSimpleTree.h"
#include "SsEffectNode.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsEffectNode : public FSsSimpleTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsEffectNodeType::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsEffectBehavior Behavior;
    
    FSsEffectNode();
};

