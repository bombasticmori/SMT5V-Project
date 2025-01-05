#include "SsCellMap.h"

FSsCellMap::FSsCellMap() {
    this->Texture = NULL;
    this->OverrideTexSettings = false;
    this->WrapMode = SsTexWrapMode::Clamp;
    this->FilterMode = SsTexFilterMode::Nearest;
}

