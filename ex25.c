#include <stdio.h>

void calcolaRadiceQuadrata(){
    int a;
    int radiceQuadrata;

    printf("inserisci un numero:\n");
    scanf("%d", &a);
    radiceQuadrata = a/radiceQuadrata;
    if(radiceQuadrata>=0){
        printf("la radice di %d è %d\n",  a, radiceQuadrata);
    }else{
        printf("non esiste la radice quadrata di a\n");
    }
}

int main(){
    calcolaRadiceQuadrata();
}