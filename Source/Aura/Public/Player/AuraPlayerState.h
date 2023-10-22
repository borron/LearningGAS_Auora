// Copyright Brink Video Game Studio

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "AuraPlayerState.generated.h"

// Sect. 3, Lect. 21 - Constructing the ASC and AS
class UAuraAbilitySystemComponent;
class UAttributeSet;
//

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerState : public APlayerState, public IAbilitySystemInterface // Sect. 3, Lect. 21 - Constructing the ASC and AS
{
	GENERATED_BODY()
public:
	AAuraPlayerState();
	// Sect. 3, Lect. 21 - Constructing the ASC and AS
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	//

protected:
	// Sect. 3, Lect. 21 - Constructing the ASC and AS
	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	//
	
};
