#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CharaExpressionTableFactory.generated.h"

UCLASS()
class UCharaExpressionTableFactory : public UFactory
{
	GENERATED_BODY()
public:
	UCharaExpressionTableFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
