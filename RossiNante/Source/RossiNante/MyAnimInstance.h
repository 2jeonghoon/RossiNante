// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHit);
DECLARE_MULTICAST_DELEGATE(FOnTumbleEnd);
DECLARE_MULTICAST_DELEGATE(FOnSkillEnd);
//DECLARE_MULTICAST_DELEGATE(FOnHitEnd);
/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

		virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UMyAnimInstance();

public:

	void PlayAttackMontage();//�⺻ ���� ��Ÿ�� ���� �Լ�
	void PlaySkill_QMontage();//Q��ų ��Ÿ�� ���� �Լ�
	void PlaySkill_EMontage();//E��ų ��Ÿ�� ���� �Լ�
	void PlayTumbleMontage();//������ ��Ÿ�� ���� �Լ�
	void PlayDeathMontage();
	void PlayHitReactMontage();


	void PlayBossAttackMontage();
	void PlayBossSkillMontage();
	void PlayBossHitReactMontage();
	void PlayBossDeathMontage();

	void JumpToSection(int32 SectionIndex);//�⺻ ���� �ִϸ��̼� ���� �ѱ�� �Լ�

	FName GetAttackMontageName(int32 SectionIndex);//���� �ε����� ���� �⺻ ���� �ִϸ��̼� �ҷ����� �Լ�

private:
	UFUNCTION()
		void AnimNotify_AttackHit();
	UFUNCTION()
		void AnimNotify_OnTumbleEnd();
	UFUNCTION()
		void AnimNotify_SkillCastEnd();
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;//ĳ������ �̵� ���θ� �����ϱ� ���� �ӵ� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Horizontal; //�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Vertical;	//�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����


	//==========================�÷��̾� �ִϸ��̼�=================================
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* AttackMontage;//�⺻ ���� ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* TumbleMontage;//������ ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_QMontage;//Q��ų ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_EMontage;//E��ų ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* DeathMontage;//��� ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* HitReactMontage;//��� ��Ÿ�� ����

	//==========================���� �ִϸ��̼�=================================

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_AttackMontage; // ��Ÿ �޺� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_SkillMontage; // ��ų �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_HitReactMontage; // �ǰ� �ִϸ��̼�
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_DeathMontage; // ��� �ִϸ��̼�

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* Boss_Phase2Montage; // ������2��� �ִϸ��̼�

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;//�����ϴ����� �Ǵ��ϱ� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsTumbling = false;//�������ϴ����� �Ǵ��ϱ� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsAttacked = false;//�ǰ��� �Ǵ��ϱ� ���� ����

	FOnAttackHit OnAttackHit;
	FOnTumbleEnd OnTumbleEnd;
	FOnSkillEnd OnSkillEnd;
	/*FOnHitEnd OnHitEnd;*/
	
};
