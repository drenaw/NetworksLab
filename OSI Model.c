#include<stdio.h>
#include<string.h>

void layerEffect(char ar[100], char layer[100], char addThis[100]){
    char newS[100];
    strcpy(newS, addThis);
    strcat(newS, ar);
    if(strcmp(layer,"Datalink")==0){
        strcat(ar,"DH");
    }
    printf("Result after %s : %s \n", layer, newS);
    strcpy(ar, newS);
}

int main(){
    char res[100] = "Hello";
    layerEffect(res, "Application", "AH");
    layerEffect(res, "Presentation", "PH");
    layerEffect(res, "Session", "SH");
    layerEffect(res, "Transport", "TH");
    layerEffect(res, "Network", "NH");
    layerEffect(res, "Datalink", "DH");
}

