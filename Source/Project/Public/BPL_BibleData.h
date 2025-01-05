#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BibleData.h"
#include "BPL_BibleData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BibleData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BibleData();

    UFUNCTION(BlueprintCallable)
    static void SetBibleEntryFlag(int32 DevilID, bool IsEntry);
    
    UFUNCTION(BlueprintCallable)
    static void SetBibleData(int32 DevilID, FBibleData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbleBibleEntry(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void InitBibleAll();
    
    UFUNCTION(BlueprintCallable)
    static void InitBible(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBibleMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBibleEntryNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBibleData GetBibleDataDirect(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBibleData GetBibleData(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static bool EntryBibleFirst_ByNkmIndex(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void EntryBibleAll();
    
    UFUNCTION(BlueprintCallable)
    static void EntryBible_ByNkmIndex(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareNkmAndBible(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckBibleEntry(int32 DevilID);
    
};

