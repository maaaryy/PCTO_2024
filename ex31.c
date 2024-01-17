#include <stdio.h>

int  main(){
    int i;
    int n;

    printf("inserisci un numero:\n");
    scanf("%d", &n);
    i=n-1;
    while(n%i !=0){
        i--;
    if(1==i){
        printf(" è un numero primo\n");
    }else{
        printf(" non è un nuero primo\n");
    }
    }
}