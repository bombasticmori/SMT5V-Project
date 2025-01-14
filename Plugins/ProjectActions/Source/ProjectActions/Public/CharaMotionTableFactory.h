#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CharaMotionTableFactory.generated.h"

UCLASS()
class UCharaMotionTableFactory : public UFactory
{
	GENERATED_BODY()
public:
	UCharaMotionTableFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
