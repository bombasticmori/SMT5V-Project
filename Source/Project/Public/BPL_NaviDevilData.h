#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_NAVI_DEVIL.h"
#include "NaviDevilData.h"
#include "NaviDevilGimmickActors.h"
#include "NaviDevilGimmickData.h"
#include "BPL_NaviDevilData.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROJECT_API UBPL_NaviDevilData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_NaviDevilData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNaviDevilGimmickUniqueSaveID(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNaviDevilGimmickDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNaviDevilGimmickData GetNaviDevilGimmickData_FromID(int32 mapId, int32 Index, int32 excavateType, int32 nowNavi, int32& tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNaviDevilGimmickData GetNaviDevilGimmickData(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNaviDevilDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNaviDevilData GetNaviDevilData_FromEnum(E_NAVI_DEVIL devilEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNaviDevilData GetNaviDevilData_FromDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNaviDevilData GetNaviDevilData(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertNaviDevilGimmickActors(TArray<FNaviDevilGimmickActors>& Out, const TArray<AActor*>& pActorList, const TArray<int32>& categoryList);
    
};

