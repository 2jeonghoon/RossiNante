// Fill out your copyright notice in the Description page of Project Settings.


#include "RossiNanteGameModeBase.h"
#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MenuHUD.h"
#include "MenuPlayerController.h"
#include <winsock2.h>
#include <ws2tcpip.h>

ARossiNanteGameModeBase::ARossiNanteGameModeBase() {
    static ConstructorHelpers::FClassFinder<AMyCharacter> PlayerCharacterBPClass(TEXT("/GAME/RossiNante/Blueprints/BP_Character"));
    if (PlayerCharacterBPClass.Class != NULL) {
        DefaultPawnClass = PlayerCharacterBPClass.Class;
    }

    PlayerControllerClass = AMenuPlayerController::StaticClass();
    HUDClass = AMenuHUD::StaticClass();

    ARossiNanteGameModeBase::ConnectToServer();

}

void ARossiNanteGameModeBase::ConnectToServer()
{
    // ���� �ʱ�ȭ�� �ʿ��� ������ ��� �ִ� ����ü
    WSADATA wsaData;

    // TCP ������ ������ ���� IP�� ��Ʈ ��ȣ ����
    char* ServerIP = "52.79.202.2";
    int32 Port = 8050;

    // wsaData �ʱ�ȭ
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        UE_LOG(LogTemp, Warning, TEXT("WSAStartup failed\n"));
    }

    // ���� ����
    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(Port);
    inet_pton(AF_INET, ServerIP, &serverAddr.sin_addr);

    // ���� �ʱ�ȭ
    SOCKET Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (Socket == INVALID_SOCKET) {
        WSACleanup();
        UE_LOG(LogTemp, Warning, TEXT("SOCKET INIT FAILED\n"));
    }

    // ���� �õ�
    if (connect(Socket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        closesocket(Socket);
        WSACleanup();
        UE_LOG(LogTemp, Warning, TEXT("CONNECT FAILED\n"));
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("CONNECT SUCCESS\n"));
    }
}
