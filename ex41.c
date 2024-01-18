#include <stdio.h>

int main(){
    char stringa[100];
    int i;

    i=0;
    printf("inserire testo:\n");
    scanf("%s", stringa);
    while(stringa[i]!='\0'){
        if(stringa[i]>=97 && stringa[i]<=122){
            stringa[i] = stringa[i]-32;
        }
        i++;
    }  
    printf("%s", stringa);
}