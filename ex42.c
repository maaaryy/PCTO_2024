#include <stdio.h>

void ciao(int *c){
    *c=1000;
}

int main(){
    int a=20;
    ciao(&a);
    printf("a=%d\n", a);
    return 0;
}