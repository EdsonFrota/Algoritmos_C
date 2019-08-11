#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int x, n, z;
    int maior = 0;
    int menor = 10000;
    int soma = 0;
    float media;

    printf("Quantidade de valor a ser digitada: ");
    scanf("%d", &z);

    printf("\n");

    if (z < 3)
    {
        printf("Informe uma quantidade maior que 3: ");
        scanf("%d", &z);
    }

    printf("\n");

    for (x=0; x<z; x++)
    {

        printf("Digite um número: ");
        scanf("%d", &n);

        soma += n;

        if (n > maior)
        {
            maior = n;
        }

        if (n < menor)
        {
            menor = n;
        }

    }

    soma = soma - maior - menor;
    media = (float)soma/z;

    printf("\n\tA media é: %.3f\n", media);

    getch();
    return 0;


    system("pause");
}


