#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AtRichTextWidget -ObjectName=AtRichText -FallbackName=AtRichText
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AtRichText.h"
#include "MessageTagInterface.h"
#include "ScriptMessagePageData.h"
#include "MessageRichTextWidget.generated.h"

class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UMessageRichTextWidget : public UAtRichText, public IMessageTagInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptMessageAsset* InitialScriptMessageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialMessageLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPageIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScriptMessageAsset* ScriptMessageAsset;
    
public:
    UMessageRichTextWidget();

    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void TickMessage(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetRevealPerSecond(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetDecorator();
    
    UFUNCTION(BlueprintCallable)
    void RevealPageText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoicePlayEnd(const float VoiceTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPageCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMessageCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVoiceName(const UScriptMessageAsset* InScriptMessage, int32 InMessageId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTextEndOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScriptMessagePageData GetCurrentPageData() const;
    

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

