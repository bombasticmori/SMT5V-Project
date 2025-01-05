#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_ABILITY_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "GardenChatMsgData.h"
#include "GardenMsgData.h"
#include "GardenResultData.h"
#include "GardenSPTData.h"
#include "GardenSpeechTypeMsgData.h"
#include "GardenTributeMsgData.h"
#include "GardenUniqueDevilMsgData.h"
#include "GardenTalk.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API AGardenTalk : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UsedChatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenChatMsgData m_ChosenChatMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenMsgData m_TrustMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_PowerUpMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_ItemMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTributeMsgData m_TributeMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenChatMsgData> m_ChatMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenSPTData m_GardenSPTData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_PowerUpDebugMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_ItemDebugMsgData;
    
public:
    AGardenTalk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool Respawn_SetChatMessage(UPARAM(Ref) TArray<FGardenSPTData>& UsedGardenMessages, UPARAM(Ref) uint8& CurrentGardenArea, UPARAM(Ref) TArray<uint8>& ValidPhases);
    
    UFUNCTION(BlueprintCallable)
    bool PickSkillTekisei(int32 NkmIndex, E_SKILL_TEKISEI_CATEGORY& ChosenSkillTekiseiType, FText& SkillTekiseiName, int32& Amount, int32& OldSkillTekiseiValue, int32& NewSkillTekiseiValue);
    
    UFUNCTION(BlueprintCallable)
    bool PickPowerUpReward(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool PickPowerUpMessage(UPARAM(Ref) FGardenMsgData& ChosenPowerMessage, UPARAM(Ref) int32& ChosenPowerMessageIndex);
    
    UFUNCTION(BlueprintCallable)
    void PickParameter(int32 NkmIndex, bool IsPowerUpMessage, E_ABILITY_TYPE& ChosenParameterType, FText& ParameterName, int32& Amount, int32& OldParameterValue, int32& NewParameterValue);
    
    UFUNCTION(BlueprintCallable)
    bool PickItemReward(int32 DevilLevel, UPARAM(Ref) int32& ChosenItemID, UPARAM(Ref) int32& ChosenItemNum);
    
    UFUNCTION(BlueprintCallable)
    bool PickItemMessage(UPARAM(Ref) FGardenMsgData& ChosenItemMessage, UPARAM(Ref) int32& ChosenItemMessageIndex);
    
    UFUNCTION(BlueprintCallable)
    bool PickChatMessage(UPARAM(Ref) TArray<FGardenSPTData>& UsedGardenMessages, UPARAM(Ref) uint8& CurrentGardenArea, UPARAM(Ref) TArray<uint8>& ValidPhases);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_PickItemReward(int32 DevilLevel, int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable)
    bool BuildMessageData(int32 DevilID, UPARAM(Ref) FGardenUniqueDevilMsgData& UNQData, UPARAM(Ref) FGardenSpeechTypeMsgData& SPTData);
    
    UFUNCTION(BlueprintCallable)
    void BuildGardenResultData(int32 NkmIndex, bool IsPowerUpMessage, FGardenResultData& GardenResultData);
    
};

