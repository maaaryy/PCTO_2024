#include <stdio.h>

int invertiValori(int *x, int *y){
    int i;
    i = *x;
    *x = *y;
    *y= i;
}

int main (){
    int x=5;
    int y=7;

    invertiValori(&x, &y);
    printf("x=%d\ny=%d\n", x, y);
    return(0);
}