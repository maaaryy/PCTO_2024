#include <stdio.h>

int addizione(int x, int y, float somma){
    somma = x+y;
}

int sottrazione(int x, int y, float differenza){
    differenza = x-y;
}

int moltiplicazione(int x, int y, float prodotto){
    prodotto = x*y;
}

int divisione(int x, int y, float quoziente){
    quoziente = x/y;
}

int main(){
    int x;
    int y;
    float somma ;
    float differenza;
    float prodotto;
    float quoziente;
    char c;
    
    printf("inserisci un numero:\n");
    scanf("%d", &x);
    printf("inserisci un numero:\n");
    scanf("%d", &y);
    printf("inserisci operazione:\n");
    scanf("%c", &c);
     if((c=='+' ) || (c==43)){
        somma = addizione(x,y);
        printf("la somma è %f\n", somma);
    }else if((c=='-') || (c==45)){
        differenza = sottrazione(x,y);
        printf("la differenza è %f\n", differenza);
    }else if((c=='/' ) || (c==47)){
        quoziente = divisione(x,y);
        printf("la divisione è %f\n", quoziente);
    }else if((c=='*' ) || (c==42)){
        prodotto = moltiplicazione(x,y);
        printf("la moltiplicazone è %f\n", prodotto);
    }else{
        printf("il carattere scelto non corrisponde ad alcun operazione\n");
    }
    
}