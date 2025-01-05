#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_CampDebug.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CampDebug : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CampDebug();

    UFUNCTION(BlueprintCallable)
    static void CampDebug_AllCure();
    
    UFUNCTION(BlueprintCallable)
    static void CampDebug_AddPlayerMp(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void CampDebug_AddPlayerHp(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void CampDebug_AddNkmMp(int32 NkmIndex, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void CampDebug_AddNkmHp(int32 NkmIndex, int32 Add);
    
};

