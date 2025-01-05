#include "SkillEffectPairSetting.h"

FSkillEffectPairSetting::FSkillEffectPairSetting() {
    this->EffectType = E_BTL_EFFECT_TYPE::E_BTL_EFFECT_TYPE_NORMAL;
    this->EffectForm = E_BTL_EFFECT_FORM::E_BTL_EFFECT_FORM_NORMAL;
    this->BulletSpeed = 0.00f;
    this->BulletTangent = 0.00f;
    this->Gravity = 0.00f;
    this->ExtensionDistance = 0.00f;
    this->KeepBallEffect = false;
}

