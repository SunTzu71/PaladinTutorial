#pragma once

#include "AITypes.h"
#include "PaladinCharacter.h"
#include "Enemy/AIBehavior/ICombatStrategy.h"
#include "Navigation/PathFollowingComponent.h"
#include "AttackStrategy.generated.h"

// Declarations
class AEnemy;
class APaladinCharacter;

UCLASS()

class UAttackStrategy : public UObject, public ICombatStrategy
{
	GENERATED_BODY()
	
public:
	UAttackStrategy();
	virtual void Execute(AEnemy* Enemy) override;
	virtual void OnMoveCompleted(FAIRequestID, const FPathFollowingResult& Result, AEnemy* Enemy, APaladinCharacter* PaladinCharacter);

private:
	float PlayerEnemyDistance(AEnemy* Enemy, APaladinCharacter* PaladinCharacter);
};