#include <stdio.h>

int main(){
    char stringa[]="ciao";
    
    printf("la parola è %s\n", stringa);
    stringa[0]='C';
    stringa[3]='O';
    printf(" la parola è %s\n", stringa);
}