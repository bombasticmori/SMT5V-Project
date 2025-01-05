#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BPI_EncountAreaCpp.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_EncountAreaCpp : public UInterface {
    GENERATED_BODY()
};

class IBPI_EncountAreaCpp : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_ProcTimeAttack_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_ProcGenerator_cpp(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPI_GetNowSymbolNum_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckTimeAttack_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckRoomGuardian_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckIgnorePause_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckGenerator_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckDaathSpawnType_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_CheckAreaIn_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPI_CalcSpawnSymbol_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPI_CalcReturnSymbol_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_AreaOut_cpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPI_AreaIn_cpp();
    
};

