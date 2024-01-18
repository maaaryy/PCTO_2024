#include <stdio.h>

int calcoloDelta(int a, int b, int c){
    int delta;

    delta = b * b -(4 * a * c);
    return delta;
}

float radiceQuadrata(int delta){
    float temp,sqrt;

    sqrt= delta/2;
    temp = 0;
    while(sqrt!=temp){
        temp=sqrt;
        sqrt=(delta/temp+temp)/2;
    }
    return(sqrt);
}

int calcoloSoluzioni(int a, int b, int delta){
    int x1;
    int x2;

    if(delta>0){
        x1 = (-b + radiceQuadrata(delta))/2 * a;
        x2 = (-b - radiceQuadrata(delta))/2 * a;
        printf("le soluzioni sono %d e %d\n", x1, x2);
    }else if(delta==0){
        x1 = x2 = (-b /2 * a);
        printf("la soluzione è %d", x1);
    }
}

int main(){
    int a;
    int b;
    int c;
    int delta;
    
    printf("inserisci un numero:\n");
    scanf("%d", &a);
    printf("inserisci un numero:\n");
    scanf("%d", &b);
    printf("inserisci un numero:\n");
    scanf("%d", &c);
    delta = calcoloDelta(a,b,c);
    if(delta>=0){
        calcoloSoluzioni(a,b,delta);
    }else if(delta<0){
        printf("l'equazione non ammette soluzioni reali\n");
    }
    return(0);
}