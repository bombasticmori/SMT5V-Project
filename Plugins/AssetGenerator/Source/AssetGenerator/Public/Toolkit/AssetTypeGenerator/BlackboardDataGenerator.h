#pragma once
#include "CoreMinimal.h"
#include "SimpleAssetGenerator.h"
#include "BlackboardDataGenerator.generated.h"

UCLASS(MinimalAPI)
class UBlackboardDataGenerator : public USimpleAssetGenerator {
	GENERATED_BODY()
protected:
	virtual UClass* GetAssetObjectClass() const override;

	/*virtual void PopulateSimpleAssetWithData(UObject* Asset) override;
	virtual bool IsSimpleAssetUpToDate(UObject* Asset) const override;*/

public:
	virtual FName GetAssetClass() override;
};
