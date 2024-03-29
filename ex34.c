#include <stdio.h>

int calcolaPotenza (int b, int coefficiente){
    int i=1;
    int potenza = b;

    coefficiente = 2;
    while(i<coefficiente){
        potenza = b * b;
        i++;
    }
    return potenza;
}

int calcoloDelta(){
    int delta;

    delta = calcolaPotenza(b, coefficiente) -(4 * a * c);
    return delta;
}

int calcoloSoluzioni(int a, int b, int delta){
    int x1;
    int x2;

    if(delta>0){
        x1 = (-b + radiceQuadrata(delta))/2 * a;
        x2 = (-b - radiceQuadrata(delta))/2 * a;
        printf("le soluzioni sono %d e %d\n", x1, x2);
    }else if(delta==0){
        x1==x2 = (-b /2 * a);
        printf("la soluzione è %d", x1);
    }
}

int main(){
    int a;
    int b;
    int c;

    printf("inserisci un numero:\n");
    scanf("%d", &a);
    printf("inserisci un numero:\n");
    scanf("%d", &b);
    printf("inserisci un numero:\n");
    scanf("%d", &c);
    delta = calcoloDelta();
    if(delta>=0){
        calcoloSoluzioni(a,b,delta);
        
    }else if(delta<0){
        printf("l'equazione non ammette soluzioni reali");
    }
return(0);
}