#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void fatorial (int n) {

    int x, fat=1;

    for (x=1; x<=n; x++) {
        fat *= x;
    }

    printf("N�mero: %d\tFatorial: %d\n\n", n, fat);

}


main() {

    setlocale(LC_ALL, "");

    int x, n, t;

    printf("Informe a quantidade de n�meros: ");
    scanf("%d", &t);

    printf("\n\n");

    for (x=0; x<t; x++) {

        printf("N�mero: ");
        scanf("%d", &n);

        fatorial(n);


    }


}


