/*6) Faça um programa que leia uma matriz 3x4 de inteiros, substitua seus
elementos negativos por zero. Imprima na tela a matriz original e a
modificada.*/
#include<stdio.h>

int main ()
{
    int i, j, E[3][4];
    printf("Informe os elementos da Matriz 3x4:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&E[i][j]);
        }
    }
    printf("Matriz Gerada:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%3d",E[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(E[i][j]< 0)
            {
                E[i][j]=0;
            }
            printf("%3d",E[i][j]);
        }
        printf("\n");
    }
    return 0;
}
