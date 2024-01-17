#include <stdio.h>

int main(){
    int a;
    int b;

    printf("inserisci età:\n");
    scanf("%d", &a);
    printf("a che età si prende la patente nel tuo paese?\n");
    scanf("%d", &b);
    if(a<b){
        printf("non puoi prendere la patente\n");
    }else if(a>=b){
        printf("puoi prendere la patente\n");
    }
    return(0);
}