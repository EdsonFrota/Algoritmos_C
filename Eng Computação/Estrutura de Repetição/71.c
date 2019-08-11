#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, n, maior, menor;
    float soma, media;

    maior = 1;
    menor = 999;
    soma= 0;
    for (x=0; x<500; ++x)
    {

        printf(" DIGITE O NÚMERO: ");
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

    media = soma/(float)500;

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média do maior com o menor é : %f\n", media);


    getch();
    return 0;


    system("pause");

}

