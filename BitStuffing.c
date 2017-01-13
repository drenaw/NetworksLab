#include<stdio.h>
#include<string.h>
int main(){
    char str[100] = "";
    printf("Enter the input stream: ");
    scanf("%s", str);

    int i=0;
    int k=0;

    char res[100];
    for(i=0;i<strlen(str);){
        if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1'){
            res[k] = str[i];
            res[k+1] = str[i+1];
            res[k+2] = str[i+2];
            res[k+3] = str[i+3];
            res[k+4] = str[i+4];
            res[k+5] = '0';
            k=k+6;
            i=i+5;

        }else{
            res[k] = str[i];i++;k++;
        }
    }

    printf("%s", res);

}
