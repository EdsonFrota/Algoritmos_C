#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n;
    int maior = 0; menor = 999999;
    float soma = 0, media;

    for (x=0; x<500; x++) {

        printf("n: ");
        scanf("%d", &n);

        soma += n;

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }

    }

    media = soma/(float)500;

    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("M�dia dos n�meros: %f\n", media);



}

