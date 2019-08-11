#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, " ");


    char gvt;
    float oi = 100, vivo = 0, claro, tim, minuto, ww, kk=0;

    do
    {

        printf("LIGAÇÃO: \n");
        printf("\to: DIF. OPERADORAS. \n");
        printf("\tv: VAI VAI. \n");
        printf("\tf: FIXO - FIXO. \n");
        printf("\ts: SAIR \n");

        printf("\nTipo de ligação: ");
        scanf(" %c", &gvt);

        if (gvt != 's')
        {

            printf("TOTAL DE MINUTOS: ");
            scanf("%d", &minuto);

            if (gvt == 'o')
            {
                oi -= minuto;

                if (oi <= 0)
                {
                    claro = (oi * -1) - 100;
                }

            }
            else if (gvt == 'v')
                {
                    vivo += minuto;

                    if (vivo >= 50)
                    {
                        minuto = vivo - 50;
                        oi -= minuto;

                        if (oi <= 0)
                        {
                            tim = (oi * -1) - 100;

                        }
                    }
                    else

                        if (gvt == 'f')
                        {
                            kk = kk + (minuto*0.5);
                        }
                }

        }
        while (gvt != 's')

        ww = 80 + (claro * 1.34) + (tim* 0.45) + kk;
        printf("O valor a ser pago é de R$ %.2f", ww);



    getch();
    return 0;
    system("pause");
}
