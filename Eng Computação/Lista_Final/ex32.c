#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int dia, mes, ano;
    int add, x;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mês: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("Informe a quantidade de dias a ser adicionada: ");
    scanf("%d", &add);

    printf("\n\nData informada: %2d \ %2d \ %d", dia, mes, ano);

    for (x=0; x<add; x++) {

        dia++;

        if (dia > 30) {
            dia = 1;
            mes++;

            if (mes > 12) {
                mes = 1;
                ano++;
            }
        }

    }

    printf("\n\nData atualizada: %2d \ %2d \ %d\n\n", dia, mes, ano);


}
