#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int edson, junior;
    int maior = 0;
    int menor = 10000;

    for (edson=0; edson<50; ++edson)
    {

        printf("Digite um n�mero: ");
        scanf("%d", &junior);

        if (junior > maior)
        {
            maior = junior;
        }

        if (junior < menor)
        {
            menor = junior;
        }

    }

    printf("\nO maior n�mero �: %d\n", maior);

    printf("\nO menor n�mero �: %d\n", menor);


    getch();
    return 0;

    system("pause");

}


