// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyBossClass.generated.h"

UCLASS()
class ROSSINANTE_API AMyBossClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyBossClass();
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
		bool isDie;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPhase2;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBossGameStart_Montage; // ���� ���� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBossAttack_Montage; // ��Ÿ �޺� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBossAttack_Skill_Montage; // ��ų �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBoss_PowerDashMontage; // ���� ����

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBoss_ChainMontage; // ���� ����

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* MyBossAttack2_Montage;

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
		void MyBossAttack_Melee();
	UFUNCTION(BlueprintCallable)
		void MyBossAttack_Melee_End();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_Melee();
	UFUNCTION(BlueprintCallable)
		void Attack_Skill_End();
	UFUNCTION(BlueprintCallable)
		void PowerDash_Skill_Start();
	UFUNCTION(BlueprintCallable)
		void PowerDash_Skill_End();



	UFUNCTION(BlueprintCallable)
		void HitReact(float damage);
	UFUNCTION(BlueprintCallable)
		void SpawnAnim();
	UFUNCTION(BlueprintCallable)
		void DieAnim();
};
