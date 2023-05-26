// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterEnemy.generated.h"

UCLASS()
class ROSSINANTE_API AMyCharacterEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterEnemy();
protected:

	virtual void PostInitializeComponents() override;

private:
	UPROPERTY()
		class UMyAnimInstance* AnimInstance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float DefaultHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float BaseAttackDamage; // �⺻ ���� ������

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float AttackRange; // ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float FollowDistance; // ���� �Ÿ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float CurSpeed; // ���� �ӵ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float RunSpeed; // �޸��� �ӵ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float WalkSpeed; // �ȴ� �ӵ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float AttackRate; // ���� �ӵ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		bool isRunning; // �޸��� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		AActor* TargetPlayer; // ���� ��� �÷��̾�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float SkillCooldown; // ��ų ��ٿ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss Monster")
		float SkillCooldownTime; // ��ų ��ٿ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDuringAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPhase2;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SpawnMontage; // ��Ÿ �޺� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_AttackMontage; // ��Ÿ �޺� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SkillMontage; // ��ų �ִϸ��̼�

	// Smash
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SmashStartMontage; // Start

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_HitReactMontage; // �ǰ� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_DeathMontage; // ��� �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_Phase2Montage; // ������2��� �ִϸ��̼�

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void Attack_Melee();
	UFUNCTION(BlueprintCallable)
		void Attack_Melee_End();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_Melee();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_End();
	UFUNCTION(BlueprintCallable)
		void Smash_Skill_Start();

	UFUNCTION(BlueprintCallable)
		void HitReact(float damage);
	UFUNCTION(BlueprintCallable)
		void SpawnAnim();
	UFUNCTION(BlueprintCallable)
		void DieAnim();
};
