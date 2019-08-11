/*1) Fazer um algoritmo que leia uma matriz inteira de ordem 3 e verifique
se a soma dos elementos das diagonais são iguais.*/
#include<stdio.h>
int main ()
{
    int i, j, E[3][3],soma_P=0, soma_S=0;

    printf("Informe os elementos da Matriz 3x3:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&E[i][j]);
        }
    }

    printf("\nMatriz Gerada:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d",E[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Principal: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i == j)
            {
                printf(" %d",E[i][j]);
                soma_P+=E[i][j];
            }
        }
    }
    printf(" -> soma = %d",soma_P);

    printf("\nDiagonal Secundaria: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==(3-1-i))
            {
                printf(" %d",E[i][j]);
                soma_S+=E[i][j];
            }
        }
    }
    printf(" -> soma = %d",soma_S);

    if(soma_P == soma_S)
    {
        printf("\nA soma dos elementos das ambas diagonais sao iguais.");
    }
    else
    {
        printf("\nAs soma dos elementos das ambas diagonais sao diferentes.");
    }
    printf("\n");
    return 0;
}
