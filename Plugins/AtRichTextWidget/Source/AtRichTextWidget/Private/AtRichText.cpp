#include "AtRichText.h"

UAtRichText::UAtRichText() {
    this->bIsVariable = false;
    this->MinDesiredWidth = 0.00f;
    this->bAutoLocalizedMargin = true;
    this->bWrapWithInvalidationPanel = false;
    this->bReveal = false;
    this->RevealedIndex = 0;
}

void UAtRichText::SetText(const FText& InText) {
}

void UAtRichText::SetShadowOffset(FVector2D InShadowOffset) {
}

void UAtRichText::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UAtRichText::SetOpacity(float InOpacity) {
}

void UAtRichText::SetOffset_TextAndBrushIcon_All(FVector2D OffsetPos) {
}

void UAtRichText::SetInsertText(const FString& Tag, int32 Index, FText InText) {
}

void UAtRichText::SetInsertImageSize(int32 ImageIndex, FVector2D Size) {
}

void UAtRichText::SetInsertImageOffset_All(FVector2D OffsetPos) {
}

void UAtRichText::SetInsertImageOffset(int32 ImageIndex, FVector2D OffsetPos) {
}

void UAtRichText::SetInsertImageColor_ContainsTag(const FString& InTag, FLinearColor InColor) {
}

void UAtRichText::SetInsertImageColor_All(FLinearColor Color) {
}

void UAtRichText::SetInsertImageColor(int32 ImageIndex, FLinearColor Color) {
}

void UAtRichText::SetGrayOutColor(bool IsGrayOut) {
}

void UAtRichText::SetFontGlowColor(int32 argsIndex, FLinearColor argsColor) {
}

void UAtRichText::SetFontGlow(bool argbFlag) {
}

void UAtRichText::SetFont(FSlateFontInfo InFontInfo) {
}

void UAtRichText::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UAtRichText::SetColor_TextAndBrushIcon_All(FLinearColor InColor_BG, FLinearColor InColor_Text) {
}

bool UAtRichText::IsUseInsertImage(int32 ImageIndex) {
    return false;
}

bool UAtRichText::IsFontGlow() {
    return false;
}

FText UAtRichText::GetText() const {
    return FText::GetEmpty();
}

int32 UAtRichText::GetStrLenExcludingTag() {
    return 0;
}

int32 UAtRichText::GetInsertImageNum() {
    return 0;
}

FLinearColor UAtRichText::GetFontGlowColor(int32 argsIndex) {
    return FLinearColor{};
}

int32 UAtRichText::GetDrawStrLen() {
    return 0;
}

void UAtRichText::ClearInsertTextAll() {
}

void UAtRichText::ClearInsertText(const FString& Tag) {
}


