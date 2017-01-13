#include<stdio.h>
int main(){
    int sendDataFrame = 0;
    int receiveDataFrame = 0;
    int ack;
    while(1){
        printf("Send data frame: ");
        scanf("%d",&sendDataFrame);
        if(sendDataFrame == receiveDataFrame){
            printf("\nIs acknowledgement received? : ");
            receiveDataFrame = 1 - receiveDataFrame;
            scanf("%d", &ack);
            if(ack == 1){
                printf("\nSending implicitly");
                sendDataFrame = 1 - sendDataFrame;
            }else{
                printf("\nNo acknowledgement received, sending explicitly after timeout");
            }
        }else{
            printf("\nFrame Discarded");
            printf("\nIs acknowledgement received? : ");
            receiveDataFrame = 1 - receiveDataFrame;
            scanf("%d", &ack);
            if(ack == 1){
                sendDataFrame = 1 - sendDataFrame;
            }else{

            }
        }
    }
}
