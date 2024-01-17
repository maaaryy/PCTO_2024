#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("inserisci un numero:\n");
    scanf("%d", &a);
    printf(" inserisci un numero:\n");
    scanf("%d", &b);
    printf("inserisci un numero:\n");
    scanf("%d", &c);
    if(a+b>c && b+c>a && a+c>b){
        printf("sono i lati di un triangolo\n");
    }else{
        printf("non sono i lati di un triangolo\n");
    }
return(0);
}