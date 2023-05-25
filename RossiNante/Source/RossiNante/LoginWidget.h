// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableText.h"
#include <winsock2.h>
<<<<<<< Updated upstream
#include "RossiNanteGameModeBase.h"
=======
#include "MyGameModeBase.h"
>>>>>>> Stashed changes
#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UEditableText* ID = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UEditableText* PW = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_SignUp = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_SignIn = nullptr;
	UFUNCTION()
		void OnSignInButtonClicked(); // BT_SignIn ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�

private:
	SOCKET Socket;
<<<<<<< Updated upstream
	ARossiNanteGameModeBase* GameMode;
=======
	AMyGameModeBase* GameMode;
	
>>>>>>> Stashed changes
};
