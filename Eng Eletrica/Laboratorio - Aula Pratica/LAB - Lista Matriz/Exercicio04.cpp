/*4) Fazer um algoritmo que leia uma matriz inteira de ordem 3. Determinar
se esta matriz é identidade.*/
#include<stdio.h>
int main ()
{
    int i, j, E[3][3],verifica=1;
    printf("Informe os elementos da Matriz 3x3: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&E[i][j]);
        }
    }
    printf("Matriz Gerada\n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%3d",E[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0; (i<3) && (verifica==1); i++)
    {
        for(j=0; (j<3) && (verifica==1); j++)
        {
            if((i==j) && (E[i][j]!=1))
            {
                verifica = 0;
            }
            else if((i!=j) && (E[i][j]!=0))
            {
                verifica =0;
            }
        }
    }
    if(verifica !=1)
    {
        printf("Nao e matriz identidade.");
    }
    else
    {
        printf("E uma matriz identidade.");
    }
    return 0;
}
