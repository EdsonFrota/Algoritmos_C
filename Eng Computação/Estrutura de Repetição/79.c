#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.14

calcular (int n, float lc, float r)
{

    float lp;
    float residuo, percent;

    lp = (2 * r * n) * sin(PI/n);

    residuo = lc - lp;
    percent = (residuo/lc) * 100;


    printf("\t%d \t%.2f \t%.2f \t%.2f \t%.2f\n", n, lc, lp, residuo, percent);

}

int main()
{

    setlocale(LC_ALL, "");

    int v, x;
    float r, lc;

    printf("Valores a serem lidos: ");
    scanf("%d", &v);

    printf("RAIO: ");
    scanf("%f", &r);

    printf("\n\n");

    lc = 2 * PI * r;

    printf("\tN \tLC \tLP \tLC-LP \t%% RESIDUO\n");


    for (x=1; x<=v; x++)
    {
        calcular(x, lc, r);
    }


}

