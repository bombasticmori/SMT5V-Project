#include "MessageRichTextWidget.h"

UMessageRichTextWidget::UMessageRichTextWidget() {
    this->bReveal = true;
    this->RevealPerSecond = 30.00f;
    this->InitialScriptMessageAsset = NULL;
    this->InitialPageIndex = 0;
    this->ScriptMessageAsset = NULL;
}

void UMessageRichTextWidget::ToNextPage() {
}

void UMessageRichTextWidget::TickMessage(float DeltaTime) {
}

bool UMessageRichTextWidget::SetRevealPerSecond(float InTime) {
    return false;
}

bool UMessageRichTextWidget::SetDecorator() {
    return false;
}

void UMessageRichTextWidget::RevealPageText() {
}

bool UMessageRichTextWidget::IsVoicePlayEnd(const float VoiceTime) const {
    return false;
}

bool UMessageRichTextWidget::IsPageCompleted() const {
    return false;
}

bool UMessageRichTextWidget::IsNextPage() {
    return false;
}

bool UMessageRichTextWidget::IsMessageCompleted() const {
    return false;
}

FString UMessageRichTextWidget::GetVoiceName(const UScriptMessageAsset* InScriptMessage, int32 InMessageId) const {
    return TEXT("");
}

FVector2D UMessageRichTextWidget::GetTextEndOffset() {
    return FVector2D{};
}

FScriptMessagePageData UMessageRichTextWidget::GetCurrentPageData() const {
    return FScriptMessagePageData{};
}


