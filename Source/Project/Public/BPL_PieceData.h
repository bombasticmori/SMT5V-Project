#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_PIECE_MAJOR_TYPE.h"
#include "E_PIECE_TYPE.h"
#include "PieceData.h"
#include "BPL_PieceData.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UBPL_PieceData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_PieceData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="pWorldContextObject"))
    static AActor* SpawnMovePieceActor(UObject* pWorldContextObject, UClass* pClass, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetPieceHaveNum(int32 ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void SetPieceHaveFlag(int32 ItemId, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_PIECE_TYPE GetPieceType(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_PIECE_MAJOR_TYPE GetPieceMajorType(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPieceHaveNum(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPieceHaveFlag(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPieceData GetPieceData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void AddPieceHaveNum(int32 ItemId, int32 Add, int32& changeItemNum, int32& nextPieceNum);
    
};

