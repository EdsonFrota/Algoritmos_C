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

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos números: %f\n", media);



}

