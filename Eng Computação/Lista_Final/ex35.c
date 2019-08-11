#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void checar(int x) {

    int qtd = 0, y;

    for (y=1; y<=x; y++) {
        if (x%y == 0) qtd++;
    }

    if (qtd <= 2) {
        printf("\nO número %d é primo. ", x);
    }
}


main() {

    setlocale(LC_ALL, "");

    int n, x;

    printf("Informe uma quantidade de números: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        checar(x);
    }

}


