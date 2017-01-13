#include<stdio.h>

int main(){

    char str[100];
    printf("Enter the string: ");
    scanf("%s", &str);

    int i;
    int sum = 0;
    for(i=0;i<strlen(str);i++){

        sum = sum + (int)str[i];

    }

    printf("%d\n",sum);
    //72 + 101 + 108 + 108 + 111

    int noofbits = 0;
    int tempSum = sum;
    while(tempSum > 0){
        tempSum = tempSum/10;
        noofbits++;
    }
    tempSum = sum;
    int res[10];
    int j=0;
    int noofHexaBits = 0;
    while (tempSum>0){
        res[j] = tempSum%16;
        j++;
        tempSum =tempSum/16;
        noofHexaBits++;
    }
    int l=0;
    for(;l<noofHexaBits/2;l++){
        int tmp = res[l];
        res[l] = res[noofHexaBits-l];
        res[noofHexaBits-l] = tmp;
    }

    for(l=0;l<noofHexaBits;l++){
        printf("\n%d ",res[l]);
    }



}
