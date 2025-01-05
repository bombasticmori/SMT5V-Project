#pragma once
#include "CoreMinimal.h"
#include "TalkChoiceTable.h"
#include "TalkIntrTable.h"
#include "TalkScoutTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkScoutTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkIntrTable m_Intr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkChoiceTable> m_Choice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OpenFlag;
    
    PROJECT_API FTalkScoutTable();
};

