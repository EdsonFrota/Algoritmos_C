#include<stdio.h>
#include<locale.h>

int main ()
{

    int m[3][3];
    int e, j,i;
    printf("");
    for(e=0; e<3; ++e)
    {
        for(j=0; j<3; ++j)
        {

            scanf("%d", &m[e][j]);

        }
    }
    printf("\n\n");
    for(e=0; e<3; ++e)
    {
        for(j=0; j<3; ++j)
        {
            printf(" \t%d", m[e][j]);
        }
        printf("\n\n");
    }

    getch();
    return 0;
    system ("pause");
}
