#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CustomPoseWeightTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCustomPoseWeightTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Map;
    
    UCustomPoseWeightTable();

};

