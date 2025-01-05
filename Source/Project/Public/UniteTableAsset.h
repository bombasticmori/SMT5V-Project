#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UniteCombineData.h"
#include "UniteCombineHead.h"
#include "UniteTableAsset.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UUniteTableAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniteCombineHead m_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniteCombineData> m_Data;
    
    UUniteTableAsset();

};

