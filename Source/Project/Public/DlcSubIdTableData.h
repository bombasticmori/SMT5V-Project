#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DlcSubIdTableData_One.h"
#include "DlcSubIdTableData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDlcSubIdTableData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDlcSubIdTableData_One> DataArray;
    
    UDlcSubIdTableData();

};

