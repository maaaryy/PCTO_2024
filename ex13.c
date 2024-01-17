#include <stdio.h> 

int main(){
    int a;
    
    printf("inserisci un numero:\n");
    scanf("%d", &a);
    if(a<5){
        printf("il tuo numero è minore di 5\n");
    }if(0<a<5){
        printf("il tuo numero è compreso tra 0 e 5\n");
    }else if(a>5){
        printf("il tuo numero è maggiore di 5\n");
    }
    return 0;
}