#include "DebugMenuItemData.h"

FDebugMenuItemData::FDebugMenuItemData() {
    this->ItemId = 0;
    this->pageId = 0;
    this->Type = E_D_MENU_TYPE::E_D_MENU_TYPE_NONE;
    this->data01 = 0;
    this->data02 = 0;
    this->data03 = 0;
    this->bData01 = false;
    this->nameChangeType = E_D_MENU_NAME_CHANGE_TYPE::E_NAME_CHANGE_TYPE_NONE;
    this->isLock = false;
    this->isNoLimit = false;
}

