#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int edson, junior;

    junior =1;


    do
    {

        printf("N�mero: ");
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

    printf("Produto dos n�meros pares � = %d.\n", junior);

    getch();
    return 0;

    system("pause");
}


