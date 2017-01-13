#include<stdio.h>
#include<stdlib.h>
#include<netdb.h>
#include<netinet/in.h>
#include<string.h>
int main(int argc, char* argv[]){

    int welcomeSocket, newSocket, portno, clilen;
    char buffer[256];

    struct sockaddr_in serverAddr, serverStorage;
    int addr_size;

    welcomeSocket = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(7891);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.01");
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    bind(welcomeSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));

    if(listen(welcomeSocket,5)==0) printf("\nListening");
    else printf("\nError");

    addr_size = sizeof serverStorage;
    newSocket = accept(welcomeSocket, (struct sockaddr *)&serverStorage, &addr_size);

    strcpy(buffer, "\nHello World");
    send(newSocket, buffer, 13, 0);

    return 0;

}
