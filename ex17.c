#include <stdio.h>

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
    if(b-a==c-b){
        printf("i numeri sono in progressione aritmetica\n");
    }else{
        printf("i numeri non sono in progressione aritmetica\n");
    }
    return(0);
    
}