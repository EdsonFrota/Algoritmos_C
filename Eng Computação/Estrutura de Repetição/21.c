#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int k, edson, junior;

    printf("Quantidade de valores a serem lidos: ");
    scanf("%d", &k);

    printf("\n\n");

    for (edson=0; edson<k; ++edson)
    {

        printf("Informe um número: ");
        scanf("%d", &junior);

        if (junior > 0)
        {
            printf("\tPOSITIVO. \n\n");
        }
        else if (junior < 0)
        {
            printf("\tNEGATIVO. \n\n");
        }
    }
    getch();
    return 0;
    system("pause");
}



