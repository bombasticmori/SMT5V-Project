#include "MinimapBGTextureEntry.h"

UMinimapBGTextureEntry::UMinimapBGTextureEntry() {
    this->m_LoadState = E_MINIMAP_LOAD_STATE::NOT_LOADED;
    this->m_BGTexture = NULL;
    this->m_MapID = 0;
    this->m_AreaId = 0;
}

void UMinimapBGTextureEntry::Reset() {
}

void UMinimapBGTextureEntry::ReleaseResource() {
}


