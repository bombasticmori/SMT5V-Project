#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_SORT_WINDOW_SORT_TYPE.h"
#include "SortWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ASortWindowBase : public AActor {
    GENERATED_BODY()
public:
    ASortWindowBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResetSortItemList();
    
    UFUNCTION(BlueprintCallable)
    void LoadSortItemList(E_SORT_WINDOW_SORT_TYPE InSortScene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetSortItemList_InRange(int32 StartIdx, int32 EndIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetSortItemList_All();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHelpMsgIdx(int32 InCursorIdx);
    
};

