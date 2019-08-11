#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#define PI 3.14159265358979323846

void calcularLP (int n, float lc, float raio) {

    float lp;
    float residuo, percent;

    lp = (2 * raio * n) * sin(PI/n);

    residuo = lc - lp;
    percent = (residuo/lc) * 100;


    printf("\t%d \t%.2f \t%.2f \t%.2f \t%.2f\n", n, lc, lp, residuo, percent);

}

main() {

    setlocale(LC_ALL, "");

    int nMax, x;
    float raio, lc;

    printf("Valores a serem lidos: ");
    scanf("%d", &nMax);

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("\n\n");

    lc = 2 * PI * raio;

    printf("\tN \tLC \tLP \tLC-LP \t%% Residuo\n");


    for (x=1; x<=nMax; x++) {
        calcularLP(x, lc, raio);
    }


}

