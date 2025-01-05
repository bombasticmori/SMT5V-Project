#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptMessage.h"
#include "ScriptMessageAsset.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UScriptMessageAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptMessage> Messages;
    
    UScriptMessageAsset();

    UFUNCTION(BlueprintCallable)
    void SetCharaNameByLabel(int32 CharaNameIndex, const FName& MessageLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaNameByID(int32 CharaNameIndex, int32 MessageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextByLabel(const FName& MessageLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMessageIdByLabel(const FName& InMessageLabel);
    
};

