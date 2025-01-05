#include "UIAnimationTaskData.h"

FUIAnimationTaskData::FUIAnimationTaskData() {
    this->m_TaskIndex = 0;
    this->m_PlayDataIndex = 0;
    this->m_IsReverse = false;
    this->m_IsLoop = false;
    this->m_Alpha = 0.00f;
    this->m_IsEnd = false;
}

