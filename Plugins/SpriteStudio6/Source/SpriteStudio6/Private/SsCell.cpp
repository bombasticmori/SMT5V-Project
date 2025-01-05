#include "SsCell.h"

FSsCell::FSsCell() {
    this->Rotated = false;
    this->IsMesh = false;
    this->DivType = SsMeshDivType::PolylineBase;
    this->DivW = 0;
    this->DivH = 0;
}

