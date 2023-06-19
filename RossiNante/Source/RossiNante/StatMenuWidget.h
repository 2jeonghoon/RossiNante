// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "MyGameModeBase.h"
#include "StatMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UStatMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_Upgrade1 = nullptr;

	UFUNCTION()
		void OnUpgrade1ButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수

private:
	class AMyGameModeBase* GameMode;
};
