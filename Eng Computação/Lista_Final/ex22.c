#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x;
    long int n1, n2, soma;

    n1 = 1;
    n2 = 1;

    printf("\n1. %d", n1);
    printf("\n2. %d", n2);

    for (x=3; x<=50; x++) {

            soma = n1+n2;
            n1 = n2;
            n2 = soma;

            printf("\n%d. %li", x, soma);

    }


}
