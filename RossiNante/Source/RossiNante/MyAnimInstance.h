// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHit);
DECLARE_MULTICAST_DELEGATE(FOnTumbleEnd);
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
	void PlaySkill_QMontage();//�⺻ ���� ��Ÿ�� ���� �Լ�
	void PlayTumbleMontage();//�⺻ ���� ��Ÿ�� ���� �Լ�

	void JumpToSection(int32 SectionIndex);

	FName GetAttackMontageName(int32 SectionIndex);

private:
	UFUNCTION()
		void AnimNotify_AttackHit();
	UFUNCTION()
		void AnimNotify_OnTumbleEnd();

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;//ĳ������ �̵� ���θ� �����ϱ� ���� �ӵ� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Horizontal; //�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Vertical;	//�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* AttackMontage;//�⺻ ���� ��Ÿ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* TumbleMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* Skill_QMontage;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;//�����ϴ����� �Ǵ��ϱ� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsTumbling = false;//�������ϴ����� �Ǵ��ϱ� ���� ����

	FOnAttackHit OnAttackHit;
	FOnTumbleEnd OnTumbleEnd;

};
