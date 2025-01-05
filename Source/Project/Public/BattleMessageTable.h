#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_BAD_STATUS.h"
#include "BattleMessageTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBattleMessageTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_BstMessage;
    
public:
    UBattleMessageTable();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBstMessage(E_BAD_STATUS status);
    
};

