#include "Ss6ProjectSetting.h"

FSs6ProjectSetting::FSs6ProjectSetting() {
    this->QueryExportBaseDirectory = false;
    this->WrapMode = SsTexWrapMode::Clamp;
    this->FilterMode = SsTexFilterMode::Nearest;
    this->VertexAnimeFloat = 0;
}

