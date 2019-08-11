#include<stdio.h>
#include<stdlib.h>
int main (void)
{

    int i, vetor1[9], vetor2[9], vetor3[9], vetor4[9];


    for (i=0; i<9; ++i)
    {
        printf("[Vetor 1] Valor: ");
        scanf("%d", vetor1[i]);

        printf("[Vetor 1] Valor: ");
        scanf("%d", vetor1[i]);

        printf("[Vetor 1] Valor: ");
        scanf("%d", vetor1[i]);
    }

    for (i=0; i<3; ++i)
    {
        vetor4[i] = vetor1[i];
    }

    for (i=3; i<6; ++i)
    {
        vetor4[i] = vetor2[i];
    }

    for (i=6; i<9; ++i)
    {
        vetor4[i] = vetor3[i];
    }

    for (i=0; i<9; ++i)
    {
        printf("\tVetor: %d\n", vetor4[i]);
    }

    getch();
    return 0;
    system("pause");
}
