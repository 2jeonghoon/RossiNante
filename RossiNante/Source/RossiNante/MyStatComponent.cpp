// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStatComponent.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "MyAnimInstance.h"


// Sets default values for this component's properties
UMyStatComponent::UMyStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	bWantsInitializeComponent = true;
	
	//Level = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode())->GetPlayerLevel();
	Level = 1;
	
}


// Called when the game starts
void UMyStatComponent::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (World)
	{
		GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
	}

	//Level = GameMode->GetPlayerLevel();
	// ...
	
}

void UMyStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetLevel(Level);

}

void UMyStatComponent::SetLevel(int32 NewLevel)
{
	auto MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(Cast<UObject>(GetWorld())));
	if (MyGameInstance) {
		auto StatData = MyGameInstance->GetStatData(NewLevel);
		if (StatData) {
			Level = StatData->Level;
			Hp = StatData->MaxHp;
			maxHp = Hp;
			Attack = StatData->Attack;
			RequireExp = StatData->RequireExp;
			CurExp = 0;
			//CurExp = GameMode->GetPlayerExp();
		}
	}
}

void UMyStatComponent::OnAttacked(float DamageAmount)
{
		Hp -= DamageAmount;
	
	UE_LOG(LogTemp, Warning, TEXT("OnAttacked %d"), Hp);
}

