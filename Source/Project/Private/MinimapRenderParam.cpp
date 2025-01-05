#include "MinimapRenderParam.h"

FMinimapRenderParam::FMinimapRenderParam() {
    this->MinimapMode = E_MINIMAP_MODE::E_MINIMAP_MODE_NONE;
    this->Zoom = 0.00f;
    this->ShowingMapId = 0;
    this->ShowingAreaId = 0;
    this->IconSortType = E_MINIMAP_ICON_SORT_TYPE::NORMAL;
    this->RotateMinimap = false;
    this->CameraAngle = 0.00f;
}

