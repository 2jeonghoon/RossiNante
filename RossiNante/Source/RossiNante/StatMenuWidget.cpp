// Fill out your copyright notice in the Description page of Project Settings.


#include "StatMenuWidget.h"

void UStatMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // BT_SignIn ��ư�� Ŭ�� �̺�Ʈ�� OnSignInButtonClicked �Լ��� �����մϴ�.
    if (BT_Upgrade1)
    {
        BT_Upgrade1->OnClicked.AddDynamic(this, &UStatMenuWidget::OnUpgrade1ButtonClicked);
    }

}

void UStatMenuWidget::OnUpgrade1ButtonClicked()
{
}
