#include "ResultMainBase.h"
#include "ResultTopDataObj.h"

AResultMainBase::AResultMainBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pTopData = CreateDefaultSubobject<UResultTopDataObj>(TEXT("ResultTopData"));
}

void AResultMainBase::SaveResultTopBeforeData(const FResultData& ResultData) {
}

void AResultMainBase::SaveResultTopAfterData() {
}

void AResultMainBase::PopResultData(FResultData& outResultData) {
}

void AResultMainBase::Init(const FResultData ResultData, bool& Success) {
}

void AResultMainBase::GetMakkaData(int32& Makka) {
}

void AResultMainBase::GetItemData(TArray<int32>& ItemId, TArray<int32>& itemCnt) {
}

int32 AResultMainBase::GetInterval_Top2ExpMove() {
    return 0;
}

int32 AResultMainBase::CalcParamPoint(int32 beforeLv, int32 afterLv) {
    return 0;
}

int32 AResultMainBase::CalcGodPoint(int32 beforeLv, int32 afterLv) {
    return 0;
}

void AResultMainBase::AddItemAndMakka(bool getMakkaFlag, bool getItemFlag) {
}


