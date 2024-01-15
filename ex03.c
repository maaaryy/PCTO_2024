#include <stdio.h>

int main() {
    int a = 100;
    int sum_a;

// per il th di Gauss
// possiamo considerare: 2+4+...+2n=n(n+1)
sum_a=a/2*(a/2+1);
    printf ("la somma dei numeri pari compresi fra 2 e 100: %d\n", sum_a);
    return 0;

}