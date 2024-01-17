#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("inserisci un numero:\n");
    scanf("%d", &a);
    printf("inserisci un numero:\n");
    scanf("%d", &b);
    if(a % b){
        printf("a non è multiplo di b\n");
    }else{
        printf("a è multiplo di b\n", a*b);
    }
    return(0);
}