#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int n;
    int soma = 0, qtd = 0;
    float media;

    do {

        printf("Digite um n�mero: ");
        scanf("%d", &n);

        if (n != 0) {
                qtd++;
            if (n%2 == 0) {
                soma += n;
                media = (float)n/qtd;
                printf("A media de n�meros pares digitados � de %.2f\n", media);
            }
        }


    } while (n != 0);

}


