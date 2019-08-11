#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{

    setlocale(LC_ALL, "");


    int i, y, w,dA, mA, aA,dB, mB, aB;

    printf("Dia inicial: ");
    scanf("%d", &dA);

    printf("Mês inicial: ");
    scanf("%d", &mA);

    printf("Ano inicial: ");
    scanf("%d", &aA);

    printf("\n\n");

    printf("Dia final: ");
    scanf("%d", &dB);

    printf("Mês final: ");
    scanf("%d", &mB);

    printf("Ano final: ");
    scanf("%d", &aB);

    for (i=aA; i<=aB; ++i)
    {
        for (y=mA; y<=mB; ++y)
        {
            for (w=dA; w<=dB; ++w)
            {
                printf(" \n%2d / %2d / %d \n", w, y, i);
            }
        }
    }

    getch();
    return 0;


    system("pause");




}
