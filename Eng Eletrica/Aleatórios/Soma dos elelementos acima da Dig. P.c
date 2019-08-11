/* Soma os elementos que estão acima da diagonal principal*/
#include<stdio.h>
int main ()
{
    int matriz[3][3], i,j, soma=0;
    printf("Digite os elementos da matriz: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf(" %2d", matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>j)
            {
                soma+=matriz[i][j];
            }
        }
    }
    printf("SOMA: %d", soma);
    return 0;
}
