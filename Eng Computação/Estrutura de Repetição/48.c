#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int a, b, f, n;
    int qt = 0, P;

    printf("Informe um valor: ");
    scanf("%d", &a);

    printf("Quantidade de valores a digitados: ");
    scanf("%d", &n);

    for (f=1; f<=n; f++)
    {

        printf("\n");

        printf("Digite um número: ");
        scanf("%d", &b);

        if (b == a)
        {
            if (qt == 0)
            {
                P = f;
                ++qt;
            }
            else
            {
                ++qt;
            }
        }
    }

    printf("\n\tO número (%d) apareceu %d vezes, a primeira aparição foi ao digitar o %dº número. \n", a, qt, P);


    getch();
    return 0;

    system("pause");
}


