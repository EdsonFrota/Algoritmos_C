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

        printf("Digite um número: ");
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

    printf("\nO maior número é: %d\n", maior);

    printf("\nO menor número é: %d\n", menor);


    getch();
    return 0;

    system("pause");

}


