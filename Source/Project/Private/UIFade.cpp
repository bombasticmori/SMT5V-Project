#include "UIFade.h"

UUIFade::UUIFade() {
}

bool UUIFade::SetFadePaused(bool sw) {
    return false;
}

bool UUIFade::IsFadePaused() {
    return false;
}

bool UUIFade::IsFadeOut() {
    return false;
}

bool UUIFade::IsFadeIn() {
    return false;
}

bool UUIFade::IsFadeAnim() {
    return false;
}

E_UI_FADE_STATE UUIFade::GetFadeState() {
    return E_UI_FADE_STATE::E_UI_FADE_STATE_NONE;
}

UUIFadeBase* UUIFade::GetBP_ScreenFade() {
    return NULL;
}

bool UUIFade::FadeOut_White(float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeOut_Color(FColor Color, float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeOut_Black(float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeOut_BeforeColor(float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeIn_White(float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeIn_Color(FColor Color, float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeIn_Black(float Time, bool isInterrupt) {
    return false;
}

bool UUIFade::FadeIn_BeforeColor(float Time, bool isInterrupt) {
    return false;
}

void UUIFade::FadeClear() {
}

void UUIFade::CallDebug() {
}


