#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main () {

    setlocale(LC_ALL, "");

    int x, y, n;
    int soma=0;
    float media;

    for (x=0; x<500; x++) {

        printf("Informe um número: ");
        scanf("%d", &n);

        soma += n;

    }

    media = (float)soma / (float)500;
    printf("A media aritmética dos 500 números é: %.2f", media);

}
