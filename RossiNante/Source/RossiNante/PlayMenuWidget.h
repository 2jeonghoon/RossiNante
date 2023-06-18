// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "MyGameModeBase.h"
#include "PlayMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UPlayMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_Play = nullptr;

	UFUNCTION()
		void OnPlayButtonClicked(); // BT_SignIn ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�

private:
	AMyGameModeBase* GameMode;
};
