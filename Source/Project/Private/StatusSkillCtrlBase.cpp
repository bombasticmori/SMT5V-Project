#include "StatusSkillCtrlBase.h"

AStatusSkillCtrlBase::AStatusSkillCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AStatusSkillCtrlBase::UpdateSkillListAnimation(int32 InType, bool InCursorOn) {
    return false;
}

bool AStatusSkillCtrlBase::StopListAnimation() {
    return false;
}

bool AStatusSkillCtrlBase::StartListAnimation(bool InCursorAnimation) {
    return false;
}

bool AStatusSkillCtrlBase::StartFadeOutListAnimation() {
    return false;
}

bool AStatusSkillCtrlBase::SetPartySkillPanel(int32 InType) {
    return false;
}

bool AStatusSkillCtrlBase::IsListAnimation() {
    return false;
}

int32 AStatusSkillCtrlBase::GetSkillDisplayNumber() {
    return 0;
}

bool AStatusSkillCtrlBase::DeleteSkillList() {
    return false;
}

bool AStatusSkillCtrlBase::CreatePartySkillList(int32 InNkmIndex) {
    return false;
}

bool AStatusSkillCtrlBase::CreatePartyMagatsuhiSkillList(int32 InNkmIndex) {
    return false;
}















