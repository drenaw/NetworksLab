#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int t = strlen(s);
    int sub;
    int i=0;
    while(t>i){
        scanf("%d", &sub);
        sub = i+sub;
        for(;i<sub;i++){
            printf("%c", s[i]);
        }
        printf("\n");
    }
}
