#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, n, qtde;
    int aux, sorteado = 0;

    printf("Informe um número de 1 a 100: ");
    scanf("%d", &n);

    printf("Informe uma quantidade de sorteios: ");
    scanf("%d", &qtde);

    for (x=0; x<qtde; x++) {
        aux = rand()%100 + 1;

        if (aux == n) {
            sorteado++;
        }
    }

    printf("O seu número foi sorteado %d vezes. ", sorteado);
}


