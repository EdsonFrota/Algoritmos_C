#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int edson=1, junior=1;

    printf("\n\t=== CAUCULA O PRODUTO DOS NÚMEROS PARES DE UMA SEQUÊCIA ===\n\n");


    do
    {

        printf("\tNúmero: ");
        scanf("%d", &edson);

        if (edson > 0)
        {

            if (edson%2 == 0)
            {

                junior *= edson;

            }
        }


    }
    while (edson > 0);

    printf("\n\tProduto dos números pares é = %d.\n", junior);

    getch();
    return 0;

    system("pause");
}


