#include "CharaParamComponent.h"

UCharaParamComponent::UCharaParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_charatype = E_BTL_CHAR_TYPE::E_BTL_CHAR_EMPTY;
    this->m_Id = -1;
    this->m_PlaceIndex = -1;
    this->m_DefenseArea = 100.00f;
    this->m_AttackReach = 0.00f;
    this->m_BattleMoveSpeed = 1500.00f;
    this->m_MoveSpeedRatio = 1.00f;
    this->m_IsInterpAttackMotion = false;
    this->m_InterpAttackMotionBlendTime = 0.00f;
    this->m_OffsetZ = 0.00f;
    this->m_NkmScale = 1.00f;
    this->m_EncMaxScale = 1.00f;
    this->m_EncMinScale = 1.00f;
    this->m_CameraAndEffectScale = 1.00f;
    this->m_NkmCameraScale = 1.00f;
    this->m_NkmEffectScale = 1.00f;
    this->m_EncCameraScale = 1.00f;
    this->m_EncEffectScale = 1.00f;
    this->m_EnableBadStatusEffectScale = false;
    this->m_BadStatusEffectScale = 1.00f;
    this->m_NkmUpliftingEffectScale = 1.00f;
    this->m_EncUpliftingEffectScale = 1.00f;
    this->m_NkmBoundsScale = 1.20f;
    this->m_EncBoundsScale = 1.00f;
    this->m_GardenBoundsScale = 2.00f;
    this->m_EncHugeBattleCameraScale = 1.00f;
    this->m_UITexture = NULL;
    this->m_MoveValid = true;
    this->m_MoveValid_RangedSkill = true;
    this->m_IsLeader = false;
    this->m_IsAvoidDistanceOverride = false;
    this->m_AvoidDistance = 100.00f;
    this->m_AvoidDurationSec = 0.25f;
    this->m_AttackHitStampType = E_SKILL_HIT_STAMP_TYPE::E_SKILL_HIT_STAMP_TYPE_BLOW;
    this->m_AttackPerformanceName = TEXT("atk_000");
    this->m_IsChangeCameraOnApplyHit = false;
    this->m_IsWarpAtIntroductionMelee = false;
    this->m_IsOverrideShortRangeAttackCamera = false;
    this->m_FixedRangeSkillDistanceScale = 1.00f;
    this->m_IsMagatsuhiDevil = false;
}


