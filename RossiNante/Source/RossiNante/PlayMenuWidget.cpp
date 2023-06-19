// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMenuWidget.h"

void UPlayMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
    }

    // BT_SignIn ��ư�� Ŭ�� �̺�Ʈ�� OnSignInButtonClicked �Լ��� �����մϴ�.
    if (BT_Play)
    {
        BT_Play->OnClicked.AddDynamic(this, &UPlayMenuWidget::OnPlayButtonClicked);
    }

    UserDataPacket* ud = GameMode->GetPlayerInfo();

    TB_LevelValue->SetText(FText::FromString(FString::FromInt(ud->level)));
    TB_ExpValue->SetText(FText::FromString(FString::FromInt(ud->exp)));
}

void UPlayMenuWidget::OnPlayButtonClicked()
{
   GameMode->ChangeLevel(GetWorld(), "1F_Hall");
}
