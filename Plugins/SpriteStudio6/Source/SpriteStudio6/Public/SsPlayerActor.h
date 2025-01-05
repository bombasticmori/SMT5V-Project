#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SsPlayerActor.generated.h"

class USsPlayerComponent;

UCLASS(Blueprintable)
class SPRITESTUDIO6_API ASsPlayerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USsPlayerComponent* SsPlayerComponent;
    
public:
    ASsPlayerActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlay(FName AnimPackName, FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USsPlayerComponent* GetSsPlayer() const;
    
};

