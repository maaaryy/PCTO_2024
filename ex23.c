#include <stdio.h>

int main(){
    int a;
    int b = 1969;
    
    printf("inserire anno di nascita:\n");
    scanf("%d", &a);
    if(a == b){
        printf("è nato l'anno  in cui l'uomo andò sulla luna\n");
    }else if(a!=b && a>b){
        printf("non è nato l'anno in cui l'uomo andò sulla luna ma %d\n anni dopo", a-b );
    }else if(a!=b && a<b){
        printf("non è nato l'anno in  cui l'uomo andò sulla luna ma %d\n anni prima", b-a );
    }
     return(0);
}