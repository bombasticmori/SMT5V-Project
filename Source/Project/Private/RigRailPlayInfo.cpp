#include "RigRailPlayInfo.h"

FRigRailPlayInfo::FRigRailPlayInfo() {
    this->m_LockTarget = false;
    this->m_Reverse = false;
    this->m_Loop = false;
    this->m_Closed = false;
    this->m_IsPanCamera = false;
    this->m_OriginType = E_RIG_RAIL_ORIGIN_TYPE::E_RIG_RAIL_ORIGIN_BATTLE;
    this->m_CoordinateType = E_RIG_RAIL_COORDINATE_TYPE::E_RIG_RAIL_COORDINATE_WORLD;
    this->m_ChangeSpeedPoint = 0.00f;
    this->m_FirstPlaySpeed = 0.00f;
    this->m_SecondPlaySpeed = 0.00f;
    this->m_InterpRatio = 0.00f;
    this->m_Fovy = 0.00f;
}

