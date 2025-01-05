#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextLayoutWidget -FallbackName=TextLayoutWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "CoreUObject.h"
#include "SlateCore.h"
#include "UMG.h"
#include "RichTextImageInfo.h"
#include "RichText_TextAndBrushIconListInfo.h"
#include "AtRichText.generated.h"

UCLASS(Blueprintable)
class ATRICHTEXTWIDGET_API UAtRichText : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_MultiplyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRichTextImageInfo> InsertImageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRichText_TextAndBrushIconListInfo> TextAndBrushIconList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLocalizedMargin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapWithInvalidationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RevealedIndex;
    
    UAtRichText();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset_TextAndBrushIcon_All(FVector2D OffsetPos);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertText(const FString& Tag, int32 Index, FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageSize(int32 ImageIndex, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageOffset_All(FVector2D OffsetPos);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageOffset(int32 ImageIndex, FVector2D OffsetPos);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageColor_ContainsTag(const FString& InTag, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageColor_All(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetInsertImageColor(int32 ImageIndex, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetGrayOutColor(bool IsGrayOut);
    
    UFUNCTION(BlueprintCallable)
    void SetFontGlowColor(int32 argsIndex, FLinearColor argsColor);
    
    UFUNCTION(BlueprintCallable)
    void SetFontGlow(bool argbFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetColor_TextAndBrushIcon_All(FLinearColor InColor_BG, FLinearColor InColor_Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseInsertImage(int32 ImageIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsFontGlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStrLenExcludingTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInsertImageNum();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFontGlowColor(int32 argsIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDrawStrLen();
    
    UFUNCTION(BlueprintCallable)
    void ClearInsertTextAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearInsertText(const FString& Tag);
    
};

