#include "MinimapIconTableHelper.h"

FMinimapIconTableHelper::FMinimapIconTableHelper() {
    this->POIType = E_MINIMAP_POI_TYPE::E_MINIMAP_POI_TYPE_NONE;
    this->MinimapIcon = E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
    this->DataId = 0;
    this->CalcDataId = false;
    this->InvisibleTillSave = false;
}

