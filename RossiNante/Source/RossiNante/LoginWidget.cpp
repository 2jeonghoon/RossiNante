// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginWidget.h"
#include "RossiNanteGameModeBase.h"

void ULoginWidget::OnSignInButtonClicked()
{
	FString InputID = ID->GetText().ToString();
	FString InputPW = PW->GetText().ToString();
    
	// �α��� ����
    LoginDataPacket ld_packet;
    char* cID = TCHAR_TO_ANSI(*InputID);
    char* cPW = TCHAR_TO_ANSI(*InputPW);
    ld_packet.user_id = 0;
    ld_packet.buffer = new char[strlen(cID) + strlen(cPW)];
    strcpy(ld_packet.buffer, cID);
    ld_packet.buffer[strlen(cID)] = '\0'; 
    strcat(ld_packet.buffer, cPW);
    ld_packet.packet_type = (int)EPacketType::C2S_LOGIN;
    
    if (send(Socket, (char*)&ld_packet, strlen((char*)&ld_packet), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket\n"));
        for (int i = 0; i < 3; i++) {
            if (send(Socket, (char*)&ld_packet, strlen((char*)&ld_packet), 0) != -1) {
                break;
            }
        }
    }

    UserDataPacket ud_packet;
    if (recv(Socket, (char*)&ud_packet, strlen((char*)&ud_packet), 0) != strlen((char*)&ud_packet)) {
        for (int i = 0; i < 3; i++) {
            if (recv(Socket, (char*)&ud_packet, strlen((char*)&ud_packet), 0) != strlen((char*)&ud_packet) == strlen((char*)&ud_packet)) {
                break;
            }
        }
    }
    // ������� �߰� server �ڵ� �����ؾ��� task queue���� task���� ó�����ִ� �۾����־�� ��
}

void ULoginWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld(); 

    if (World)
    {
        ARossiNanteGameModeBase* GameMode = Cast<ARossiNanteGameModeBase>(World->GetAuthGameMode());
        if (GameMode)
        {
            Socket = GameMode->Socket;
        }
    }

    // BT_SignIn ��ư�� Ŭ�� �̺�Ʈ�� OnSignInButtonClicked �Լ��� �����մϴ�.
    if (BT_SignIn)
    {
        BT_SignIn->OnClicked.AddDynamic(this, &ULoginWidget::OnSignInButtonClicked);
    }
}