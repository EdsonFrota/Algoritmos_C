#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void mostrarDiv (int n) {

    int x;

    printf("Divisores: ");

    for (x=1; x<=n; x++) {

        if (n%x == 0) {
            printf("%d ", x);
        }


    }

}

int checarPrimo (int n) {

    int x;
    int div = 0;

    for (x=1; x<=n; x++) {

        if (n%x == 0) {
            div++;
        }
    }

    if (div <= 2) {
        return 1;
    } else {
        return 0;
    }


}

main() {

    setlocale(LC_ALL, "");

    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    if (checarPrimo(n) == 1) {
        printf("É primo.");
    } else {
        mostrarDiv(n);
    }



}

