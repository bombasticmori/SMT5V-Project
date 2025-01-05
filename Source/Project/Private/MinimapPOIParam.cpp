#include "MinimapPOIParam.h"

FMinimapPOIParam::FMinimapPOIParam() {
    this->m_POIType = E_MINIMAP_POI_TYPE::E_MINIMAP_POI_TYPE_NONE;
    this->m_MinimapIcon = E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
    this->m_MapID = 0;
    this->m_AreaId = 0;
    this->m_DataId = 0;
    this->m_SaveUniqueId = 0;
    this->m_InvisibleTillSave = false;
    this->m_HideInOtherMap = false;
    this->m_ShowFar = false;
    this->m_MainRoute = E_OldNewRoute::E_CommonRoute;
    this->m_Not2D = false;
    this->m_OnFlag = 0;
    this->m_OffFlag = 0;
    this->m_InactiveFlag = 0;
    this->m_RotateZ = 0.00f;
}

