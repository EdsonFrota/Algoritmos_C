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

        printf("Informe um n�mero: ");
        scanf("%d", &n);

        soma += n;

    }

    media = (float)soma / (float)500;
    printf("A media aritm�tica dos 500 n�meros �: %.2f", media);

}
