#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

int checarPerfeito (int n) {

    int x;
    int soma = 0;

    for (x=1; x<n; x++) {

        if (n%x == 0) {
            soma += x;
        }
    }

    if (soma == n) {
        printf("perfeito: %d\n", n);
        return 1;
    } else {
        return 0;
    }



}

main() {

    setlocale(LC_ALL, "");

    int n = 1;
    int perfeito = 0;

    do {

        n++;
        perfeito = checarPerfeito(n);

    } while (perfeito <= 5);
}

