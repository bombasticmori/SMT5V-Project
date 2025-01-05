#include "ButtonHelpBase.h"

AButtonHelpBase::AButtonHelpBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BtnHelpInfo_Horizontal.AddDefaulted(12);
    this->m_BtnHelpInfo_Vertical.AddDefaulted(3);
}

void AButtonHelpBase::SortHelpInfo(E_BTN_HELP_DIR InDirection) {
}

void AButtonHelpBase::SetHelpInfo_Preset(E_BTN_HELP_DIR InDirection, TEnumAsByte<E_BTN_HELP_SET> InPattern, bool IsSort) {
}

void AButtonHelpBase::SetHelpInfo_Manual(E_BTN_HELP_DIR InDirection, TArray<FBtnHelpInfo>& InHelpInfo, bool IsSort) {
}

TArray<FBtnHelpInfo> AButtonHelpBase::GetHelpInfo(E_BTN_HELP_DIR InDirection) {
    return TArray<FBtnHelpInfo>();
}


