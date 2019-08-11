#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int idade, maiorIdade = 0;
    char sexo, corOlho, corCabelo;
    int letraB = 0;

    do {

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == -1) {
            printf("saindo");
        }

        else {

            printf("Sexo: ");
            scanf(" %c", &sexo);

            printf("Cor dos olhos: ");
            scanf(" %c", &corOlho);

            printf("Cor dos cabelos: ");
            scanf(" %c", &corCabelo);


            if (idade > maiorIdade) {
                maiorIdade = idade;
            }

            if (sexo == 'f') {
                if ((idade >= 18) && (idade <= 35)) {
                    if ((corOlho == 'v') && (corCabelo == 'l')) {
                        letraB++;
                    }
                }
            }

        }

    } while (idade != -1);

    printf("\nA maior idade é: %d", maiorIdade);
    printf("\nQtd. mulher/18-35anos/olho verde/cabelo louro: %d", letraB);


}

