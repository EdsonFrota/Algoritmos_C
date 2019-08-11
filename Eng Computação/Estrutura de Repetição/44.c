#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int a, e, i;
    int edson;

    edson=0;

    printf("Quantidade de números a serem lidos: ");
    scanf("%d", &a);

    for (e=0; e<a; ++e)
    {

        printf("Informe um número: ");
        scanf("%d", &i);

        if (i < 0)
        {
           ++edson;
            printf(" %d é NEGATIVO. \n", i);
            printf(" %d números NEGATIVO digitados. ", edson);
        }



        getch();
        return 0;

        system("pause");
    }

}


