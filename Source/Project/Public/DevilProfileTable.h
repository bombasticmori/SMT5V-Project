#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DevilProfileTable.generated.h"

class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UDevilProfileTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_DevilProfileMsg;
    
    UDevilProfileTable();

    UFUNCTION(BlueprintCallable)
    bool MakeUp(UScriptMessageAsset* pDevilProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDevilProfile(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

