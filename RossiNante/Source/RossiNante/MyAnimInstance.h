// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

		virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UMyAnimInstance();

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;//ĳ������ �̵� ���θ� �����ϱ� ���� �ӵ� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Horizontal; //�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Vertical;	//�̵� ���� �����̽����� �������� ���� ��Ÿ���� ����
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn)
		bool IsJumping = false;//�����ϴ����� �Ǵ��ϱ� ���� ����
};
