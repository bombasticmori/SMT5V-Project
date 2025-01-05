#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TalkScoutTable.h"
#include "TalkToneTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UTalkToneTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkScoutTable> m_TalkScoutTableArray;
    
    UTalkToneTable();

};

