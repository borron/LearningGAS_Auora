// Copyright Brink Video Game Studio


#include "Player/AuraPlayerState.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"

AAuraPlayerState::AAuraPlayerState()
{
	// Sect. 3, Lect. 21 - Constructing the ASC and AS
	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed); // Added in Sect. 3, Lect. 22 - Repl. Mode

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
	//

	NetUpdateFrequency = 100.f;
}

// Sect. 3, Lect. 21 - Constructing the ASC and AS
UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
//
