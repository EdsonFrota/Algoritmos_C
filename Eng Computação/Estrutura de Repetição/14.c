#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int q, x;
    int maior=0, menor=100;
    int pMaior, pMenor;
    int qtdMaiorIdade=0;

    printf("Quantidade de pessoas: ");
    scanf("%d", &q);

    printf("\n");

    int i[q];

    for (x=0; x<q; ++x)
    {
        printf("Informe a idade da pessoa %d: ", x+1);
        scanf("%d", &i[x]);
    }

    for (x=0; x<q; ++x)
    {
        if (i[x] > maior)
        {
            maior = i[x];
            pMaior = x+1;
        }
    }
    printf("\nMaior idade é a pessoa %d, com idade de %d\n", pMaior, maior);

    for (x=0; x<q; ++x)
    {
        if (i[x] < menor)
        {
            menor = i[x];
            pMenor = x+1;
        }
    }
    printf("\nMenor idade é a pessoa %d, com idade de %d\n", pMenor, menor);

    for (x=0; x<q; ++x)
    {
        if (i[x] >= 60)
        {
            qtdMaiorIdade++;
        }
    }
    printf("\nTem %d pessoas maiores de idade (maior ou igual a 60 anos). ", qtdMaiorIdade);


    getch();
    return 0;

    system("pause");

}
