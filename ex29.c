#include <stdio.h>

int main(){
    int n;
    int i = 2;
        
    printf("inserisci un numero:\n");
    scanf("%d", &n);
    while(n%i!=0){
        i++;
    }
    if(n==i){
        printf("è un numero primo\n");
    }else{
        printf("non è un numero primo\n");
    }
}