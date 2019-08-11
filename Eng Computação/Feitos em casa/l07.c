#include<stdio.h>
#include<locale.h>

int main ()
{

    int m[2][2];
    int e, j,i;
    printf("");
    for(e=0; e<2; ++e)
    {
        for(j=0; j<2; ++j)
        {

            scanf("%d", &m[e][j]);

        }
    }
    printf("\n\n");
    for(e=0; e<2; ++e)
    {
        for(j=0; j<2; ++j)
        {
            printf(" \t%d", m[e][j]);
        }
        if (m[e]==m[j]){
            printf("\nSIM");
        }
        printf("\n\n");
    }


    system ("pause");
    getch();
    return 0;

}
