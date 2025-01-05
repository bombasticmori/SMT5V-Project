#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TreeDitherData.h"
#include "FoliageDitherData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UFoliageDitherData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FTreeDitherData> DitherExclusionData;
    
    UFoliageDitherData();

};

