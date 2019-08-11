#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int n, x, a;

    printf("Informe uma quantida de números a serem lidos: ");
    scanf("%d", &n);

    for (x=0; x<n; x++) {

        printf("Informe um número: ");
        scanf("%d", &a);

        printf("O triplo de %d é %d\n\n", a, a*3);

    }

}


