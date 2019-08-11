#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int n, x, a;
    int neg = 0;

    printf("Informe uma quantida de números a serem lidos: ");
    scanf("%d", &n);

    for (x=0; x<n; x++) {

        printf("Informe um número: ");
        scanf("%d", &a);

        if (a < 0) {
            neg++;
            printf("O valor digitado (%d) é negativo. \n", a);
            printf("Um total de %d números negativos foram já digitados. \n\n", neg);
        }

    }

}


