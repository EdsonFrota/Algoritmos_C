#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main () {

    setlocale(LC_ALL, "");

    int n, x, qtd=1;
    int soma=0;
    float media;

    do {
        printf("Informe um número: ");
        scanf("%d", &n);

        if (n > 0) {
            soma += n;

            media = (float)soma/ (float)qtd;
            printf("Soma: %d  || Qtd: %d  || Media: %.2f\n\n", soma, qtd, media);
            qtd++;
        }


    } while(n >= 0);

}
