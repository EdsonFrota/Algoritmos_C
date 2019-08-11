#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int cod, d, qtd=0;
    float p, newP;
    float somaNewP = 0, mediaNewP;

    do {

        printf("Código: ");
        scanf("%d", &cod);

        if (cod < 0) {
            printf("404.");
        }

        else {

        qtd++;

        printf("Preço produto: ");
        scanf("%f", &p);

        newP = 1.2 * p;

        somaNewP += (newP - p);
        mediaNewP = somaNewP/qtd;

        printf("Código: %d \tNovo preço: %.2f\n", cod, newP);
        printf("Até agora a média do aumento de preços é: %.2f\n\n", mediaNewP);

        }


    } while (cod > 0);



}

