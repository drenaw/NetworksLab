#include<stdio.h>
#include<math.h>
int main(){
    int m;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    int ws = pow(2,m)-1;
    printf("Enter time out value");
    scanf("%d", &timeout);
    int timeoutCheck = 0;
    int ack;
    int i=0;
    while(1){
        printf("Frame %d sent",i);
        if(sendDataFrame == receivedDataFrame){
            printf("\nIs acknowledgement received? ");
            scanf("%d", &ack);
            if(ack==1){
                i = i+receivedDataFrame
            }else{
                receivedDataFrame = (receivedDataFrame+1)%m;
            }
        }
    }
}
