#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProjectUIManager.generated.h"

class AActor;
class ASystemMess;
class UProjectGameInstanceBase;
class UProjectUIManager;
class UUIFadeBase;
class UUserWidget;

UCLASS(Blueprintable)
class PROJECT_API UProjectUIManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ScreennFadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BtnHelpCtrl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFadeBase* ScreennFadeObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASystemMess* SystemMess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MsgCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CommonWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CommonHelpWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DialogWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InfoWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ItemWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MapCharaPanelCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TutorialWindowCtrl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DLCAnnouncer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CommonUI_EventCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MakkaWindowCtrl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MoonAgeCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SortWindowCtrl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SkillSearchSortWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RichTextInsertWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CategoryWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ScreenTransitionCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocationWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MiitsuWindowCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MagatsuhiGaugeCtrl;
    
public:
    UProjectUIManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNameEntryErrorDialog_Internal(int32 ErrorType, const FString& ProgramTagValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMapInfo(FName Label, const TArray<int32>& tagParams, int32 OpenSE_Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(UProjectGameInstanceBase* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ASystemMess* GetSystemMess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* GetScreenFadeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIFadeBase* GetScreenFadeObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetRichTextInsertWidgetPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* GetMessageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UProjectUIManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySystemMess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySortWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySkillSearchSortWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyScreenTransitionCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyScreenFadeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyScreenFadeObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyRichTextInsertWidgetPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMsgCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMoonAgeCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMiitsuWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMessageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMakkaWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMagatsuhiGaugeCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyLocationWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyItemWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyInfoWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyDialogWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCommonWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCommonHelpWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyCategoryWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyBtnHelpCtrl2();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSystemMess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSortWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSkillSearchSortWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateScreenTransitionCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateScreenFadeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateScreenFadeObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateRichTextInsertWidgetPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMsgCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMoonAgeCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMiitsuWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMessageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakkaWindowCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMagatsuhiGaugeCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateLocationWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateItemWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateInfoWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDialogWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCommonWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCommonHelpWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCategoryWindowCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBtnHelpCtrl2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckNameEntryErrorDialogConfirmed_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelMissionMapInfo(int32 MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddToScreenWidget();
    
};

