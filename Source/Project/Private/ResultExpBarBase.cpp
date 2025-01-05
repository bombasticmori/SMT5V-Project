#include "ResultExpBarBase.h"

UResultExpBarBase::UResultExpBarBase() : UUserWidget(FObjectInitializer::Get()) {
}

int32 UResultExpBarBase::GetInterval_Zero2Max() {
    return 0;
}

int32 UResultExpBarBase::GetInterval_Top2ExpMove() {
    return 0;
}

int32 UResultExpBarBase::GetInterval_LvUp() {
    return 0;
}

int32 UResultExpBarBase::GetInterval_EndRatio(float endRatio) {
    return 0;
}

int32 UResultExpBarBase::CalcUpMP(int32 DevilID, int32 beforeMaxMP, int32 beforeLv, int32 afterLv) {
    return 0;
}

int32 UResultExpBarBase::CalcUpHP(int32 DevilID, int32 beforeMaxHP, int32 beforeLv, int32 afterLv) {
    return 0;
}


