#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaExpression.h"
#include "CharaExpressionTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaExpressionTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharaExpression> Map;
    
    UCharaExpressionTable();

};

