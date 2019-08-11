#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {

    setlocale(LC_ALL, "");

    int a, e, i;
    int positivo, negativo;
    float pr1, pr2;

    positivo = 0;
    negativo = 0;
    printf("VALORES: ");
    scanf("%d", &e);

    for (a=0; a<e; ++a) {

        printf("Números: ");
        scanf("%d", &i);

        if (i > 0) {
            ++positivo;
        } else {
            ++negativo;
        }
    }

    pr1 = (float)positivo/e;
    pr2 = (float)negativo/e;

    printf("\n");

    printf("\tPOSITIVOS = %d\n", positivo);
    printf("\tNEGATIVOS = %d\n", negativo);
    printf("\t%% POSITIVOS = %f\n", pr1);
    printf("\t%% NEGATIVOS = %f\n", pr2);

    getch();
    return 0;

    system("pause");
}


