/*3) Fazer um algoritmo que leia duas matrizes A e B de ordem 3. Calcular e
escrever a matriz resultante da adição de A com B.*/
#include<stdio.h>
int main ()
{
    int i, j,A[3][3], B[3][3],soma;

    printf("Informe os elementos da Matriz A 3x3:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nInforme os elementos da Matriz B:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nMatrizes A e B Geradas:\n");

    printf("A=\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }

    printf("B=\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%3d",B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultado de A+B:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            soma = A[i][j] + B[i][j] ;
            printf(" %3d",soma);
        }
        printf("\n");
    }
    return 0;
}
