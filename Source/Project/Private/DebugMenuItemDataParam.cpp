#include "DebugMenuItemDataParam.h"

FDebugMenuItemDataParam::FDebugMenuItemDataParam() {
    this->Param = 0;
    this->Min = 0;
    this->Max = 0;
    this->bRet = false;
    this->nameChangeType = E_D_MENU_NAME_CHANGE_TYPE::E_NAME_CHANGE_TYPE_NONE;
    this->isEndDelete = false;
    this->isBtlEndDelete = false;
    this->NoLimit = false;
}

