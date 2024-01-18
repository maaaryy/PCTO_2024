#include <stdio.h>

int calcolaPotenza (int n, int coefficiente){
    int i=1;
    int potenza = n;

    while(i<coefficiente){
        potenza = n * potenza;
        i++;
    }
    printf("la potenza di %d è %d\n", n, potenza);
    return(potenza);
}

int main(){
    int n;
    int potenza;
    printf("inserisci un numero:\n");
    scanf("%d", &n);
    calcolaPotenza();
    return(potenza);
}