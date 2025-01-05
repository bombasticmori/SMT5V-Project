#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CampCommandData.h"
#include "E_CAMP_COMMAND_ID.h"
#include "CampCommandTable.generated.h"

class UMMIAsset;
class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UCampCommandTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampCommandData> m_CommandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_CommandHelp;
    
    UCampCommandTable();

    UFUNCTION(BlueprintCallable)
    bool MakeUp(UMMIAsset* pAsset, UScriptMessageAsset* pCommandName, UScriptMessageAsset* pCommandHelp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCampCommandName(E_CAMP_COMMAND_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCampCommandHelp(E_CAMP_COMMAND_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCampCommandData> GetCampCommandDataAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCampCommandData GetCampCommandData(E_CAMP_COMMAND_ID ID);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

