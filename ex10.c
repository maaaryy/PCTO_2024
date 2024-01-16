#include <stdio.h> 

int main(){
    int a;
    int b;

    printf("inserisci un numero a :\n");
    printf("inserisci un numero b :\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b){
        printf("a è maggiore di b\n");
    }else(a<b);{
        printf("a non è maggiore di b\n");
    }

    return 0;

}