#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
     
    printf("inserisci un numero:\n");
    scanf("%f", &a);
    printf("inserisci un numero:\n");
    scanf("%f", &b);
    printf("inserisci un numero:\n");
    scanf("%f", &c);
    
    if(a+b>c){
        if(b+c>a){
            if(a+c>b){
                printf("sono i lati di un triangolo\n");
            }else{
                printf("non sono i lati di un triangolo\n");
            }
        }else{
            printf("non sono i lati di un triangolo\n");
        }
    } else{
         printf("non sono i lati di un triangolo\n");   
    }
     return(0);
}

     
