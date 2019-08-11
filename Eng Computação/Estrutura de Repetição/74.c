#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, h, i;
    char s;
    float sal, somaSal = 0, mediaSal;
    int maior = 0, menor = 999, mulher = 0;

    printf("HABITANTES: ");
    scanf("%d", &h);

    for (x=0; x<h; ++x)
    {

        printf("SEXO: ");
        scanf(" %c", &s);

        printf("IDADE: ");
        scanf("%d", &i);

        printf("SALÁRIO: ");
        scanf("%f", &sal);

        somaSal += sal;
        mediaSal = somaSal/(float)h;

        if (i > maior)
        {
            maior = i;
        }

        if (i < menor)
        {
            menor = i;
        }

        if (s == 'f' || 'F')
        {
            if (sal <= 100)
            {
                ++mulher;
            }
        }
    }

    printf("\nA média de salário do grupo é: %.2f", mediaSal);
    printf("\nMaior idade do grupo: %d, \nMenor idade: %d", maior, menor);
    printf("\nQuantidade de mulheres com salário até R$100,00: %d", mulher);

    getch();
    return 0;

    system("pause");

}

