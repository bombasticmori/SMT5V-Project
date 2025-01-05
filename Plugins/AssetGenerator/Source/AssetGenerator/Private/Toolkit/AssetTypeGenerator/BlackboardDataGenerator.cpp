#include "Toolkit/AssetTypeGenerator/BlackboardDataGenerator.h"
#include "BehaviorTree/BlackboardData.h"

UClass* UBlackboardDataGenerator::GetAssetObjectClass() const {
	return UBlackboardData::StaticClass();
}

FName UBlackboardDataGenerator::GetAssetClass() {
	return UBlackboardData::StaticClass()->GetFName();
}
