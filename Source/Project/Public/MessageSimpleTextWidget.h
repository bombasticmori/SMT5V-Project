#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "Components/TextBlock.h"
#include "MessageTagInterface.h"
#include "MessageSimpleTextWidget.generated.h"

class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UMessageSimpleTextWidget : public UTextBlock, public IMessageTagInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptMessageAsset* InitialScriptMessageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialMessageLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptMessageAsset* ScriptMessageAsset;
    
public:
    UMessageSimpleTextWidget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetValueParam(int32 InIndex, int32 Value) override PURE_VIRTUAL(SetValueParam,);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillHelpSkillId(int32 InSkillId) override PURE_VIRTUAL(SetSkillHelpSkillId,);
    
    UFUNCTION(BlueprintCallable)
    void SetScriptMessageByLabel(const UScriptMessageAsset* InAsset, FName InMessageLabel, bool bBuildText) override PURE_VIRTUAL(SetScriptMessageByLabel,);
    
    UFUNCTION(BlueprintCallable)
    void SetScriptMessageByID(const UScriptMessageAsset* InAsset, int32 InMessageId, bool bBuildText) override PURE_VIRTUAL(SetScriptMessageByID,);
    
    UFUNCTION(BlueprintCallable)
    void SetProgramValueNum(int32 InIndex, int32 InNumber, int32 InFigure, bool bInZeroFill) override PURE_VIRTUAL(SetProgramValueNum,);
    
    UFUNCTION(BlueprintCallable)
    void SetProgramValue(int32 InIndex, const FString& InValue) override PURE_VIRTUAL(SetProgramValue,);
    
    UFUNCTION(BlueprintCallable)
    void SetItemHelpItemId(int32 InItemId) override PURE_VIRTUAL(SetItemHelpItemId,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetValueParam(int32 InIndex) override PURE_VIRTUAL(GetValueParam, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BuildText() override PURE_VIRTUAL(BuildText,);
    
};

