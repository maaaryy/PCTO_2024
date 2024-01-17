#include <stdio.h>

int main(){
    int n;
    int somma;
    int i=1;

    printf("inserisci un numero:\n");
    scanf("%d", &n);
    somma = n;
    while(n>0){
        printf("la media è:%d\n", somma/i);
        printf("inserisci un numero:\n");
        scanf("%d", &n);
        somma = n + somma;
        i++;
    }
}