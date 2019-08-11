#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    int n, x, y, z, cont=1;

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {

        for (y=1; y<=cont; y++) {
            printf("* ");
        }

        cont = cont+2;
        printf("\n");
    }

}


