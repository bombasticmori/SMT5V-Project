#include "TalkCameraParam.h"

FTalkCameraParam::FTalkCameraParam() {
    this->TargetEnemyHeight = 0.00f;
    this->LookPlayerRate = 0.00f;
    this->LookEnemyRate = 0.00f;
    this->EyeRate = 0.00f;
    this->EyeDistance = 0.00f;
    this->LookDistance = 0.00f;
    this->EyeHorizontal = 0.00f;
    this->LookHorizontal = 0.00f;
    this->EyeHeight = 0.00f;
    this->LookHeight = 0.00f;
    this->DataType = E_TALK_CAMERA_DATA_TYPE::E_NONE;
    this->ModelHide = E_TALK_CAMERA_MODEL_HIDE::E_NONE;
}

