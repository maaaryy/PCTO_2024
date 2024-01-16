#include <stdio.h>

int main(){
    int a;
    int b;

    printf ("inserisci un numero:\n");
    scanf ("%d", &a);
    printf("inserisci un numero:\n");
    scanf("%d", &b);
    
    if(a==b){
        printf ("a è uguale a b");
    }else{
        printf("a non è uguale a b");
    }
    return 0;
    
    }