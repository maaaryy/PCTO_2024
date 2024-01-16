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

    if(a==b && b==c){
        printf("il triangolo è equilatero\n");
    }else if((a==b&& b!=c) || (a==c && b!=c) || (c==b && b!=a)){
        printf("il triangolo è isoscele\n");
    }else if(a!=b && b!=c){
        printf("il triangolo è scaleno\n");
    }
return 0;
}