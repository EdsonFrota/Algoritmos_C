#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void soma (int m) {

    int x, soma=0;

    for (x=1; x<=m; x++) {
        soma += x;
    }

    printf("O somatório de %d é %d. ", m, soma);
}

void fatorial (int m) {

    int x, fat=1;

    for (x=1; x<=m; x++) {
        fat *= x;
    }

    printf("O fatorial de %d é %d. \n", m, fat);

}

void checarDivisores (int m) {

    int x, qtd=0;

    for (x=1; x<=m; x++) {

        if (m%x == 0) {
            qtd++;
        }
    }

    printf("O número %d possui %d divisores. \n", m, qtd);
}

main() {

    setlocale(LC_ALL, "");

    int t, x, m;

    printf("t: ");
    scanf("%d", &t);

    for (x=0; x<t; x++) {

        printf("m: ");
        scanf("%d", &m);

        if (m%2 == 0) {
            checarDivisores(m);
        } else
            if ((m%2 != 0) && (m < 10)) {
                fatorial(m);
            } else
                if ((m%2 != 0) && (m >= 10)) {
                    soma(m);
                }
    }

}

