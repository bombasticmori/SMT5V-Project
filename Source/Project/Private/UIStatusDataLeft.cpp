#include "UIStatusDataLeft.h"

FUIStatusDataLeft::FUIStatusDataLeft() {
    this->m_DevilID = 0;
    this->m_Level = 0;
    this->m_HP = 0;
    this->m_MP = 0;
    this->m_Exp = 0;
    this->m_MaxExp = 0;
    this->m_DevilBook = E_UI_STATUS_BOOK::E_UI_STATUS_BOOK_INVISIBLE;
    this->m_EssenceIcon = E_UI_STATUS_ESSENCE_ICON::E_UI_STATUS_ESSENCE_ICON_INVISIBLE;
    this->m_OpenFlag = 0;
    this->m_DefenceAishouOpenFlag = 0;
    this->m_SkillTekiseiOpenFlag = 0;
}

