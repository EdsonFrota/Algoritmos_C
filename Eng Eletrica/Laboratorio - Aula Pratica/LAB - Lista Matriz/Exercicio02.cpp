/*2) Fazer um algoritmo que leia uma matriz A3x2, calcule e escreva a matriz
transposta de A.*/
#include<stdio.h>
int main ()
{
    int A[3][2], i, j;

    printf("Informe os elementos da Matriz 3x2:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatriz Gerada:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %3d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\Matriz Transposta:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %3d",A[j][i]);
        }
        printf("\n");
    }

    return 0;
}
