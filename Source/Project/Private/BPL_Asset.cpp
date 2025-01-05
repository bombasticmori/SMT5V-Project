#include "BPL_Asset.h"
#include "Templates/SubclassOf.h"

UBPL_Asset::UBPL_Asset() {
}

TSoftObjectPtr<USoundAtomCue> UBPL_Asset::SearchEventVoiceEx(const FName voiceName, const FName Path, const bool usePath) {
    return NULL;
}

TSoftObjectPtr<USoundAtomCue> UBPL_Asset::SearchEventVoice(const FName voiceName) {
    return NULL;
}

TSoftObjectPtr<UCharaLipSync> UBPL_Asset::SearchEventLipSyncEx(const FName Filename, const FName Path, const bool usePath) {
    return NULL;
}

TSoftObjectPtr<UCharaLipSync> UBPL_Asset::SearchEventLipSync(const FName Filename) {
    return NULL;
}

UObject* UBPL_Asset::LoadObjectBlocking(TSoftObjectPtr<UObject> SoftObjectReference) {
    return NULL;
}

TSubclassOf<AActor> UBPL_Asset::GetBlueprintGeneratedActorClass(UObject* BPAsset) {
    return NULL;
}


