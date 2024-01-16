#include <stdio.h>

int main(){
    int a;

    printf("inserisci età:\n");
    scanf("%d", &a);
    if(a<18){
        printf("sei minorenne\n");
    }else{
        printf("sei maggiorenne\n");
    }
    return(0);
}