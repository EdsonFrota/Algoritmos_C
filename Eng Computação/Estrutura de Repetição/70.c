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

        printf("Código do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0)
        {
            printf("CÓDIGO INVÁLIDO");
        }

        else
        {

            ++quantidade;

            printf("Preço do produto: ");
            scanf("%f", &i);

            novo = 1.2 * i;

            t += (novo - i);
            np = t/quantidade;

            printf("Código: %d \tNovo preço: %.2f\n", codigo, novo);
            printf("Média de aumento de preços é: %.2f\n\n", np);

        }

        getch();
        return 0;


        system("pause");

    }



}

