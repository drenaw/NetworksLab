#include<stdio.h>
#include<math.h>

int powerOf2(int n){
    int k=0;

    while(n>pow(2,k)){
        k++;
    }

    if(n==pow(2,k)) return 1;
    else return 0;

}

int main(){

    int size,r;
    scanf("%d", &size);

    char str[50];
    char res[50];
    scanf("%s", str);

    r=0;
    while(size+r >= pow(2,r)-1){
        r++;
    }

    int k=0;
    int i=1;
    for(;i<=size+r;){
        if(powerOf2(i)==1){

            //int t = i;


            res[i] = '2';i++;
        }
        else{
            res[i] = str[k];i++;k++;
        }

    }

    for(i=1;i<=size+r;i++){
        printf("%c", res[i]);
    }

}
