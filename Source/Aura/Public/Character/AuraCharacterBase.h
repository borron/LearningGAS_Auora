// Copyright Brink Video game Studio

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

// Sect. 3, Lect. 21 - Constructing the ASC and AS
class UAuraAbilitySystemComponent;
class UAttributeSet;
//

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter, public IAbilitySystemInterface // Sect. 3, Lect. 21 - Constructing the ASC and AS
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();
	// Sect. 3, Lect. 21 - Constructing the ASC and AS
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	//

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	// Sect. 3, Lect. 21 - Constructing the ASC and AS
	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	//
};
