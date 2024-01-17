#include <stdio.h>

void calcolaCubo(){
    int numero;
    int cubo;

    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("il cubo di %d è %d\n",  numero, cubo);
}

int main(){
    int i=0;

   while(i<4){
    calcolaCubo();
    i++;
   }
   return(0);
}