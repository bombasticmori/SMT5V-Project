#pragma once
#include "CoreMinimal.h"
#include "UIStatusCtrlDataObjBase.h"
#include "UIStatusCtrlDataObjCampParty.generated.h"

UCLASS(Blueprintable)
class UUIStatusCtrlDataObjCampParty : public UUIStatusCtrlDataObjBase {
    GENERATED_BODY()
public:
    UUIStatusCtrlDataObjCampParty();

    UFUNCTION(BlueprintCallable)
    void SetCurrentUtsusemi(int32 InUtsusemiCursorOffset, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFromNkmIndex(int32 NkmIndex, bool isInParty);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnalyze(int32 InAnalyzeCursorOffset, int32 InIndex);
    
};

