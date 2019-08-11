#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void divisores (int u)
{

    int ii;

    printf("\n\tDIVISORES de %d: ", u);


    for (ii=1; ii<=u; ++ii)
    {

        if (u%ii == 0)
        {
            printf("%d ", ii);
        }


    }

}

int primo (int u)
{

    int ii;
    int div = 0;

    for (ii=1; ii<=u; ++ii)
    {

        if (u%ii == 0)
        {
            ++div;
        }
    }

    if (div <= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}

main()
{

    setlocale(LC_ALL, "");

    int u;

    printf("Informe um valor: ");
    scanf("%d", &u);

    if (primo(u) == 1)
    {
        printf("É um número PRIMO.");
    }
    else
    {
        divisores(u);
    }

    getch();
    return 0;

    system("pause");


}

