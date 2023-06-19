// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterEnemy.h"
#include "MyAnimInstance.h"
#include "Engine.h"

// Sets default values
AMyCharacterEnemy::AMyCharacterEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	ConstructorHelpers::FObjectFinder<UAnimMontage> Attack_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossAttack_Montage.BossAttack_Montage'"));
	if (Attack_AnimMt.Succeeded()) {
		Boss_AttackMontage = Attack_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Skill_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossSmash_Montage.BossSmash_Montage'"));
	if (Skill_AnimMt.Succeeded()) {
		Boss_SkillMontage = Skill_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> BossHitReact_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossHitReact.BossHitReact'"));
	if (BossHitReact_AnimMt.Succeeded()) {
		Boss_HitReactMontage = BossHitReact_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Death_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossDeath_Montage.BossDeath_Montage'"));
	if (Death_AnimMt.Succeeded()) {
		Boss_DeathMontage = Death_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Phase2_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossPhase2_Montage.BossPhase2_Montage'"));
	if (Phase2_AnimMt.Succeeded()) {
		Boss_Phase2Montage = Phase2_AnimMt.Object;
	}
	ConstructorHelpers::FObjectFinder<UAnimMontage> Spawn_AnimMt(TEXT("AnimMontage'/Game/Blueprints/Boss/Montage/BossSpawn_Montage.BossSpawn_Montage'"));
	if (Spawn_AnimMt.Succeeded()) {
		Boss_SpawnMontage = Spawn_AnimMt.Object;
	}
	*/

}

void AMyCharacterEnemy::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
}

// Called when the game starts or when spawned
void AMyCharacterEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// �⺻ ����
void AMyCharacterEnemy::Attack_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));

		PlayAnimMontage(Boss_AttackMontage);
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Melee_End, 1.7f, false);

	}

}
void AMyCharacterEnemy::Attack_Melee_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}


void AMyCharacterEnemy::Attack_Skill_Melee()
{
	if (!isDuringAttack) {

		CurSpeed = 0;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Skill!"));

		PlayAnimMontage(Boss_SkillMontage);
		isDuringAttack = true;

		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Melee_End, 1.f, false, 3.f);

	}
}

void AMyCharacterEnemy::Attack_Skill_End()
{
	isDuringAttack = false;
	CurSpeed = WalkSpeed;
}

// ������� ��ų
void AMyCharacterEnemy::Smash_Skill_Start()
{
	if (!isDuringAttack) {
		isDuringAttack = true;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Smash!"));

		PlayAnimMontage(Boss_SmashStartMontage);
		
		FTimerHandle TH_Attack_End;
		GetWorldTimerManager().SetTimer(TH_Attack_End, this, &AMyCharacterEnemy::Attack_Skill_End, 1.f, false, 3.f);
	}
}



void AMyCharacterEnemy::SpawnAnim() {

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossSpawn!"));
	isSpawn = false;
	PlayAnimMontage(Boss_SpawnMontage);
	FTimerHandle TH_Attack_End;
	GetWorldTimerManager().SetTimer(TH_Attack_End, [this](){
		SpawnAnimEnd();
		PlayerCameraShake();
		}, 3.f, false);

}
void AMyCharacterEnemy::SpawnAnimEnd() {
	isSpawn = true;
	CurSpeed = WalkSpeed;
}


// ������ �÷��̾ ���� �����ϴ� �Լ�
void AMyCharacterEnemy::JumpTowardsPlayer()
{
	PlayAnimMontage(Boss_JumpMontage);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("JUMP!!"));

	// �÷��̾��� ��ġ ��������
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	FVector PlayerLocation = PlayerCharacter->GetActorLocation();


	// ������ ���� ��ġ ��������
	FVector BossLocation = GetActorLocation();

	FTimerHandle JumpTimerHandle;

	GetWorldTimerManager().SetTimer(JumpTimerHandle, [this, PlayerLocation, BossLocation]() {
		// ������ ��ġ���� ���� �Ÿ� ���� ��������
		FVector LaunchVelocity = FVector(0.f, 0.f, 3000.f); // ���ϴ� ���̷� ����
		LaunchCharacter(LaunchVelocity, false, false);
		}, 0.5f, false);


	OnJumpDecal_End();
	// ���� �ð� �Ŀ� ���������� Ÿ�̸� ����
	//FTimerHandle TimerHandle;
	BossLocation = PlayerLocation + FVector(0.f, 0.f, 1000.f); // ���ϴ� ���̷� ����
	
	FTimerHandle TimerHandle;

	GetWorldTimerManager().SetTimer(TimerHandle, [this, PlayerLocation, BossLocation]() {
		// ������ ��ġ���� ���� �Ÿ� ���� ��������
		SetActorLocation(BossLocation, false, nullptr, ETeleportType::TeleportPhysics);
		OnJumpDecal_Start();
		FVector LaunchVelocity = FVector(0.f, 0.f, -8000.f); 
		LaunchCharacter(LaunchVelocity, false, false);

		PlayAnimMontage(Boss_SkillMontage);
		PlayerCameraShake();
		}, 2.5f, false);
}


void AMyCharacterEnemy::HitReact(float damage) {
	// spawn�� ���� �� ���ظ� �޴´�.
	if (isSpawn && !isDie) {
		CurSpeed = 0;

		DefaultHP -= damage;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossHit!"));

		//ü���� 0���ϸ� �״� �ִϸ��̼� ����
		if (DefaultHP <= 0) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Die!"));
			isDie = true;
			FTimerHandle TH_Hit_End;
			PlayAnimMontage(Boss_DeathMontage);
			CurSpeed = 0;
			GetWorldTimerManager().SetTimer(TH_Hit_End, this, &AMyCharacterEnemy::DieAnim, 1.f, false, 1.5f);
			return;
		}
		else {
			if (!isDuringAttack) {
				PlayAnimMontage(Boss_HitReactMontage);
			}
		}

	}
}

void AMyCharacterEnemy::DieAnim() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BossDie!"));
	this->Destroy();
	UGameplayStatics::OpenLevel(this, "Login");
}

void AMyCharacterEnemy::PlayerCameraShake() {
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->PlayCameraShake(MyShake, 1.0f);
}


