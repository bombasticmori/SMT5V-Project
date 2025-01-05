#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_TALK_MOON_TEMPER_STATUS.h"
#include "E_TALK_WANT_REAC.h"
#include "eTalkDebugFlag.h"
#include "BPL_TalkDebug.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TalkDebug : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TalkDebug();

    UFUNCTION(BlueprintCallable)
    static void TalkDebugWantReduceUniqueSkillDevilIdSet(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TalkDebugWantReduceUniqueSkillDevilIdGet();
    
    UFUNCTION(BlueprintCallable)
    static void TalkDebugWantReacSet(E_TALK_WANT_REAC wantReac);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_TALK_WANT_REAC TalkDebugWantReacGet();
    
    UFUNCTION(BlueprintCallable)
    static void TalkDebugWantHPMPRankSet(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TalkDebugWantHPMPRankGet();
    
    UFUNCTION(BlueprintCallable)
    static void TalkDebugSafetyUniqueSkillDevilIdSet(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TalkDebugSafetyUniqueSkillDevilIdGet();
    
    UFUNCTION(BlueprintCallable)
    static E_TALK_MOON_TEMPER_STATUS TalkDebugMoonTemperStatusSet(E_TALK_MOON_TEMPER_STATUS status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_TALK_MOON_TEMPER_STATUS TalkDebugMoonTemperStatusGet();
    
    UFUNCTION(BlueprintCallable)
    static bool TalkDebugFlagToggle(eTalkDebugFlag debugFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool TalkDebugFlagSet(eTalkDebugFlag debugFlag, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TalkDebugFlagGet(eTalkDebugFlag debugFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static eTalkDebugFlag eTalkDebugFlag_FromString(const FString& enumString);
    
};

