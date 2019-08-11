#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, t, n;
    int qP=0, qN=0;
    float pP, pN;

    printf("Informe o tamanho da leitura: ");
    scanf("%d", &t);

    for (x=0; x<t; x++) {

        printf("Número: ");
        scanf("%d", &n);

        if (n > 0) {
            qP++;
        } else {
            qN++;
        }
    }

    pP = (float)qP/t;
    pN = (float)qN/t;

    printf("\n");
    printf("Quantidade positivos: %d\n", qP);
    printf("Quantidade negativos: %d\n", qN);
    printf("Porcentagem positivos: %f\n", pP);
    printf("Porcentagem negativos: %f\n", pN);
}


