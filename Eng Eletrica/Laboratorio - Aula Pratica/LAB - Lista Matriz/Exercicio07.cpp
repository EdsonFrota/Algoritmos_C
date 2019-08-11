/*7) Faça um programa que leia uma matriz A de 4x4 elementos. Após a
leitura, verique se existem elementos repetidos em A e apresente-os.*/

#include<stdio.h>
int main ()
{
    int i, j, m, n,x, y=0, verifica, A[4][4], V[8];

    printf("Informe os elementos da Matriz 4x4:\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {

            printf("[%d][%d]: ",i,(j+1));
            scanf("%d",&A[i][j]);
        }
    }

    printf("\n\tMatriz Gerada:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t%2d",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            for(m=i; m<4; m++)
            {
                for(n=0; n<4; n++)
                {
                    if((A[i][j] == A[m][n]) && (j != n || i != m))
                    {
                        verifica = 1;
                        printf(" |%d| ",A[i][j]);

                        for(x=0; x<y; x++)

                            if(V[x] == A[m][n])
                                verifica = 0;

                        if(verifica == 1)
                        {
                            V[y] = A[m][n];
                            y++;
                        }
                    }
                }
            }
        }
    }

    printf("\n");

    if (verifica == 1)
    {
        printf("\nOs numero repetidos sao:");

        for(x=0; x<y; x++)
        {
            printf(" %d ",V[x]) ;
        }
    }
    else
    {
        printf("Não há numeros repetidos in mat.");
    }
    return 0;
}
