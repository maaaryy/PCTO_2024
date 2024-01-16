#include <stdio.h>

int main(){
    int a;
    int b;

printf("inserisci un numero:\n");
scanf("%d", &a);
printf("inserisci un numero:\n"); 
scanf("%d", &b);
    if(a<b){
        printf("somma:%d\n", a+b);
    }else if(a>b){
        printf("differenza:%d\n", a-b);
    }
    return(0);


}