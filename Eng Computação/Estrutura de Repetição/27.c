#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    float v, y, o, d, rl, dolar;
    int x;

    printf("Valor Inicial: ");
    scanf("%f", &v);

    printf("Valor Final: ");
    scanf("%f", &y);

    printf("Valor de Incremento: ");
    scanf("%f", &o);

    printf("Preço de 1 dolar: ");
    scanf("%f", &d);

    printf("\n\nREAL  \t \t          DOLAR \n");

    do
    {

        if (rl < y)
        {

            rl = v;
            dolar = v * d;
            printf("R$ %.2f  \t  \t U$$ %.2f \n", rl, dolar);

            v = v + o;
        }

    }
    while (v <= y);

    getch();
    return 0;
    system("pause");


}
