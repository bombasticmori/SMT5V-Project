#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StaffRollData.h"
#include "BPL_StaffRollData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UBPL_StaffRollData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_StaffRollData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTitleName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTexture(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStaffRollLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStaffRollDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStaffRollData GetStaffRollData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRightName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetOrganizationName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNowPosition(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNowLength(float Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLineSpace(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLeftName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAddLength(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcStartDataNo(float Position, float Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcSpeed(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcMovieTime(float speed);
    
};

