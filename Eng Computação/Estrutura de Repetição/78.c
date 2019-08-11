#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int Perfeito (int n)
{

    int x;
    int soma = 0;



    for (x=1; x<n; ++x)
    {

        if (n%x == 0)
        {
            soma += x;
        }
    }

    if (soma == n)
    {
        printf("N°= %d\n", n);
        return 1;
    }
    else
    {
        return 0;
    }



}

main()
{
    printf("\t === PERFEITOS === \n");
    setlocale(LC_ALL, "");

    int n = 1;
    int perfeito = 0;

    do
    {

        ++n;
        perfeito = Perfeito(n);
    }
    while (perfeito <= 5);

    getch();
    return 0;

    system("pause");
}


