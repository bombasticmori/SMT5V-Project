#pragma once
#include "CoreMinimal.h"
#include "SsValueType.h"
#include "SsValue.generated.h"

USTRUCT(BlueprintType)
struct FSsValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsValueType::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int_temp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Float_temp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Bool_temp;
    
    SPRITESTUDIO6_API FSsValue();
};

