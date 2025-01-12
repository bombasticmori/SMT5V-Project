#include "CharaExpression.h"

FCharaExpression::FCharaExpression() {
    this->Animation = NULL;
    this->BlendTime = 0.10f;
    this->LidParam.LidTableIndex = 0;
    this->LipParam.LipTableIndex = 0;
    this->LipParam.ExpressionScale = 0.00f;
    this->LipParam.LipScale = 1.00f;
    this->BrowParam.OpacityL = 0.00f;
    this->BrowParam.OpacityR = 0.00f;
    this->BrowParam.Texture.Get();
    this->MouthParam.OpacityL = 0.00f;
    this->MouthParam.OpacityR = 0.00f;
    this->MouthParam.Texture.Get();
    this->NoseParam.OpacityL = 0.00f;
    this->NoseParam.OpacityR = 0.00f;
    this->NoseParam.Texture.Get();
}

