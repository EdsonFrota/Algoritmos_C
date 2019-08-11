#include<stdio.h>
int main ()
{
    int i, j;
    float matriz[12][12], area=0;
    printf("MATRIZ: ");
    for(i=0; i<12; ++i)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&matriz[i][j]);
        }
    }
    for (i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if((i+j)<=10)
            {
                area+=matriz[i][j];
            }
        }
    }
      printf("a soma da area marcada e %g.\n",area);


    return 0;
}
