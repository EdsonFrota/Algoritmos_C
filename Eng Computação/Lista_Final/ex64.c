#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int n, p=1;

    do {

        printf("Informe um número: ");
        scanf("%d", &n);

        if (n > 0) {

            if (n%2 == 0) {

                p *= n;

            }
        }


    } while (n > 0);

    printf("O produto dos numeros pares é %d. ", p);
}


