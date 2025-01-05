#include "MinimapIconTableRow.h"

FMinimapIconTableRow::FMinimapIconTableRow() {
    this->POIType = E_MINIMAP_POI_TYPE::E_MINIMAP_POI_TYPE_NONE;
    this->MinimapIcon = E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
    this->mapId = 0;
    this->AreaId = 0;
    this->DataId = 0;
    this->SaveId = 0;
    this->InvisibleTillSave = false;
    this->HideInOtherMap = false;
    this->ShowFar = false;
    this->MainRoute = 0;
    this->Not2D = false;
    this->RotateZ = 0;
}

