#include <stdio.h>

int main(){
    int anno;

    printf("inserisci un anno:\n");
    scanf("%d", &anno);
    if(anno%4 == 0){
        if(anno%100 != 0){
            printf("l'anno è bisestile\n");
        }else if(anno%400 == 0){
            printf("l'anno è bisestile\n");
        }else{
            printf("l'anno non è bisestile\n");
        }
    }else{
        printf("l'anno non è bisestile\n");
    }
    return(0);
}