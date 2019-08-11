#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, y, t;

    printf("Informe um número de valores: ");
    scanf("%d", &t);

    int n[t];
    int p2, p3;
    float raiz;

    for (x=0; x<t; x++) {

        system("cls");

        printf("Informe um número: ");
        scanf("%d", &n[x]);

        printf("\n\n");
        printf("\tNúmero\tQuadrado\tCubo\tRaiz\n");

        for (y=0; y<=x; y++) {

            p2 = pow(n[y], 2);
            p3 = pow(n[y], 3);
            raiz = sqrt(n[y]);

            printf("\t%d\t%d\t\t%d\t%.2f\n", n[y], p2, p3, raiz);

        }

        system("pause");




    }
}


