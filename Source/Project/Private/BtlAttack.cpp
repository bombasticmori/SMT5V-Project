#include "BtlAttack.h"

FBtlAttack::FBtlAttack() {
    this->m_AttackArea = E_SKILL_TARGET::E_SKILL_TARGET_INV_SIDE_ONE;
    this->m_AttackAttr = 0;
    this->m_AttackAttribute = E_ATTRIBUTE_TYPE::E_ATTRIBUTE_TYPE_PHISICS;
    this->m_AttackKind = E_SKILL_TYPE::E_SKILL_TYPE_PHYSICAL_ATK;
    this->m_AttackHit = 0;
    this->m_AttackCoe = 0;
    this->m_WeaponPower = 0;
    this->m_CriticalRate = 0;
    this->m_CriticalAdd = 0;
    this->m_AttrRate_Low = 0;
    this->m_AttrRate_Chaos = 0;
    this->m_AttrRate_Neutral = 0;
    this->m_AttackBst = 0;
    this->m_AttackBstHit = 0;
    this->m_RecBst = 0;
    this->m_VertigoBstHit = 0;
    this->m_NormalAttackType = 0;
    this->m_Skill = 0;
    this->m_Item = 0;
    this->m_TargetAll = E_BTL_TARGET_TYPE::E_BTL_TARGET_ONE;
    this->m_DrainHp = 0;
    this->m_DrainMp = 0;
    this->m_Min = 0;
    this->m_Max = 0;
    this->m_BstCntPower = 0;
    this->m_BstPowerRate = 0;
    this->m_IsWeakHit = false;
    this->m_IsNotCounter = false;
    this->m_Kantuu = 0;
}

