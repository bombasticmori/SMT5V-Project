#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_MISSION_MAJOR_TYPE.h"
#include "MissionData.h"
#include "CampQuestCtrlBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ACampQuestCtrlBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_padButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_padCrsorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MISSION_MAJOR_TYPE m_currentSelectMissionMajorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionData> m_mainMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionData> m_subMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_selectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_oldIndex;
    
    ACampQuestCtrlBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void padCheck();
    
    UFUNCTION(BlueprintCallable)
    void loadMission();
    
};

