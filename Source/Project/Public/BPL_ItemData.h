#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_ITEM_KIND.h"
#include "E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE.h"
#include "ImportantItemData.h"
#include "RelicItemData.h"
#include "SkillGetItemData.h"
#include "UseItemData.h"
#include "UtsusemiItemData.h"
#include "BPL_ItemData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_ItemData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ItemData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UtsusemiItemIDToDevilID(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UtsusemiDevilIDToItemID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseItemDataIsRecoveryType(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseItemDataIsRecome(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_UseScene(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_SortId(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_SkillNo(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_SellingPrice(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_RecBst(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_NkmUseType(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_NameSortId(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_MpRecovery(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_MpRcvPercent(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_ItemID(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_ItemIcon(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_IsUseInfinite(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_IsNotRelease(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_IsNotBuy(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_HpRecovery(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_HpRcvPercent(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_HaveMax(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_GetExp(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_ITEM_KIND UseItemDataGetValue_EtcKind(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 UseItemDataGetValue_BuyingPrice(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 UseItemDataGetValue_All(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUseInUtsusemiFlag(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNewIconSawFlag(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetUseInUtsusemiFlag(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetNewIconSawFlag(int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseTargetPlayerFromData(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseTargetPlayer(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseTargetNkmFromData(const FUseItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseTargetNkm(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseCamp(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsUseBattle(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsHaveAnyItems_Battle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsHave(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsGotten(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIsFullHave(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemIDIsValid(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemGetSellingPrice(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemGetPriority(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemGetNum(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ItemGetName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemGetMaxNum(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_ITEM_KIND ItemGetKind(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ItemGetHelpMess(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ItemGetHaveItems_Battle(E_OPTION_CONTENT_ITEM_PRIORITIZE_TYPE sortType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ItemGetHaveItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ItemGetEffectName(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemGetBuyingPrice(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void ItemGet(int32 ID, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void ItemErase_AllRelic();
    
    UFUNCTION(BlueprintCallable)
    static void ItemErase(int32 ID, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void ItemDataClearOne(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void ItemDataClearAllByRenewal();
    
    UFUNCTION(BlueprintCallable)
    static void ItemDataClearAllByReincarnation();
    
    UFUNCTION(BlueprintCallable)
    static void ItemDataClearAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUtsusemiItemData GetUtsusemiItemData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUseItemData GetUseItemData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSkillGetItemData GetSkillGetItemData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRelicItemData GetRelicItemData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNewIconPriority(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemIconIdByItemId(int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FImportantItemData GetImportantItemData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHaveItemNum_Reifu_Amulet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHaveItemNum_Gofu_Amulet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllRelicSellingPrice();
    
    UFUNCTION(BlueprintCallable)
    static bool DidUseItemInUtsusemi(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanNewIconBeDisplayed(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanbeEntryMagatsuhiSkillByPlayer(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool CanbeEntryMagatsuhiSkillByGroupId(int32 InGroupId, int32 InIndex);
    
};

