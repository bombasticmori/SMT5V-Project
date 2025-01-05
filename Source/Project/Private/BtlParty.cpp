#include "BtlParty.h"

FBtlParty::FBtlParty() {
    this->m_Flag = 0;
    this->m_Flag2 = 0;
    this->m_BehaviorFlag = 0;
    this->m_PartyIndex = 0;
    this->m_CounterSkill = 0;
    this->m_CounterAutoSkill = 0;
    this->m_PrevCounterAutoSkill = 0;
    this->m_AnalyzeCounterAutoSkill = 0;
    this->m_PassiveReflex = 0;
    this->m_PassiveAbsorb = 0;
    this->m_PassiveBlock = 0;
    this->m_KuiLevel = E_KUISHIBARI_LEVEL::E_KUISHIBARI_LEVEL_NONE;
    this->m_HPRate = 0;
    this->m_DmgRate = 0;
    this->m_GivenItemIdx = 0;
    this->m_GivenMaka = 0;
    this->m_ReichiPoint = 0;
    this->m_ActEndBy = E_BAD_STATUS::E_BAD_STATUS_NONE;
    this->m_PlayerIndex = 0;
    this->m_NkmIndex = 0;
    this->m_ActCounter = 0;
    this->m_LocalActNum = 0;
    this->m_BAtkExtend = 0.00f;
    this->m_TalkAngry = false;
    this->m_PoisonDamageRate = 0.00f;
    this->m_OffsetHitValue = 0.00f;
    this->m_CureHPValue = 0;
    this->m_CureMPValue = 0;
    this->m_HPUpValue = 0;
    this->m_HPUpValueUI = 0;
    this->m_BossFlag = 0;
    this->m_CharmSkillID = 0;
    this->m_BossRushEventEncountlID = 0;
    this->m_StealDevilID = 0;
    this->m_StealMagatsuhiSkill = 0;
    this->m_DamagedHitType = E_BTL_DAMAGE_HIT_TYPE::E_BTL_DAMAGE_NORMAL;
    this->m_DamagedValue = 0;
}

