// Fill out your copyright notice in the Description page of Project Settings.

/*

2023.05.05 �̼�ȯ - ���� �߰� �� �Լ� ����
���� Ŭ����
 - �÷��̾� ����
 - �ȱ�
 - �ٱ�
 - �Ϲ� ����
 - ��ų ���
 - ��ų ��Ÿ�� ����
 - HP����
 - HPȸ��
 - ����

*/

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
		UAnimMontage* AttackCombo_AnimMt; // ��Ÿ �޺� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackSkill_AnimMt; // ��ų �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* HitReact_AnimMt; // ��Ʈ �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Death_AnimMt; // ��Ʈ �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Phase2_AnimMt; // ������2��� �ִϸ��̼�

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void Attack_Melee();
	UFUNCTION(BlueprintCallable)
	void Attack_Melee_End();
	UFUNCTION(BlueprintCallable)
	void Attack_Skill_Melee();
	UFUNCTION(BlueprintCallable)
	void Attack_Skill_End();
	UFUNCTION(BlueprintCallable)
	void HitReact(float damage);

	void DieAnim();

};
