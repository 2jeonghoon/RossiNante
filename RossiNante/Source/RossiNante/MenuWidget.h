// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
			UButton* BT_PlayMenu = nullptr;
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
			UButton* BT_StatMenu = nullptr;

		UFUNCTION()
			void OnPlayMenuButtonClicked(); // BT_SignIn ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�
		UFUNCTION()
			void OnStatMenuButtonClicked(); // BT_SignIn ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�

private:
	class AMyGameModeBase* GameMode;
};
