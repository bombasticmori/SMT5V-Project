#include "Toolkit/AssetTypeGenerator/BehaviorTreeGenerator.h"
#include "BehaviorTree/BehaviorTree.h"

UClass* UBehaviorTreeGenerator::GetAssetObjectClass() const {
	return UBehaviorTree::StaticClass();
}

FName UBehaviorTreeGenerator::GetAssetClass() {
	return UBehaviorTree::StaticClass()->GetFName();
}
