#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int codigo, quantidade;
    float i, novo,t, np;

    quantidade = 0;
    t = 0;
    while (codigo > 0)
    {

        printf("C�digo do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0)
        {
            printf("C�DIGO INV�LIDO");
        }

        else
        {

            ++quantidade;

            printf("Pre�o do produto: ");
            scanf("%f", &i);

            novo = 1.2 * i;

            t += (novo - i);
            np = t/quantidade;

            printf("C�digo: %d \tNovo pre�o: %.2f\n", codigo, novo);
            printf("M�dia de aumento de pre�os �: %.2f\n\n", np);

        }

        getch();
        return 0;


        system("pause");

    }



}

