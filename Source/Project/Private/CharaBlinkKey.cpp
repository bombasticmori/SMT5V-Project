#include "CharaBlinkKey.h"

FCharaBlinkKey::FCharaBlinkKey() {
    this->Value.Time = 0.00f;
    this->Value.LidID = E_CHARA_LID_ID::DEFAULT;
    this->Value.Duration = 0.00f;
    this->Blend.InTime = 0.00f;
    this->Blend.OutTime = 0.00f;
}

