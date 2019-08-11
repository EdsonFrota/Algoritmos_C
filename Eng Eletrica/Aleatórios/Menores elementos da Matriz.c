/*MENORES DA MATRIZ*/

#include<stdio.h>
int main ()
{
    int i,j,v4,v5,v6, V[3][3];
    int M=3,w = 0;
    for(i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d",&V[i][j]);
        }
    }

    printf("Os menores sao:\n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
        {
            if(w==0)
            {
                v4 = V[i][j];
                printf(" %d ",v4);
                w++;
            }

            else if(V[i][j] >= v4 && w == 1)
            {
                v5 = v4;
                v4 = V[i][j];
                v5=v4;
                printf(" %d ",v5);
                w++;
            }
            else if(V[i][j] > v4 && w == 2)
            {
                v6 = v5;
                v5 = v4;
                v4 = V[i][j];
                v6=v4;
                printf(" %d ",v6);
                w++;
            }

        }
    }
}

