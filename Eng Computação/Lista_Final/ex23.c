#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, n;
    int n1, n2, soma;

    n1 = 1;
    n2 = 1;

    printf("TERMO DESEJADO DA SEQUENCIA DE FIBONACCI:  ");
    scanf("%d", &n);

    if (n == 1)
    {
        soma = 1;
    }
    else if (n == 2)
    {
        soma = 1;
    }
    else
    {

        for (x=3; x<=n; x++)
        {
            soma = n1+n2;
            n1 = n2;
            n2 = soma;
        }
    }

    printf("\n\t%dº termo de FIBONACCI é: %d\n", n, soma);

        getch();
        return 0;

        system("pause");

}
