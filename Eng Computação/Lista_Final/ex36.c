#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void corrigirDivida(int mesAux, float div, float tx) {

    float divNew;

    divNew = div + (tx*mesAux);
    printf("\t%.2f", divNew);


}

main() {

    setlocale(LC_ALL, "");

    float div, tx;
    int mes, ano, x, y;

    int mesAux;

    int anoI = 2011, anoF;

    printf("Informe o valor da divida inicial: ");
    scanf("%f", &div);

    printf("Informe a taxa de correção por mês: ");
    scanf("%f", &tx);

    printf("Informe a quantidade de meses: ");
    scanf("%d", &mes);

    ano = mes/12;
    anoF = anoI + ano;

    mesAux = 1;

    for (y=1; y<=12; y++) {
            printf("\t%d", y);
        }

    for (x = anoI; x<=anoF; x++) {
        printf("\n%d", x);

        for (y=1; y<=12; y++) {
                if (mesAux < mes) {
                    corrigirDivida(mesAux, div, tx);
                    mesAux++;
                }
        }
    }




}


