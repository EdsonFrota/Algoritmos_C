#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int vetor[20], w, x,n;


    for (x=0; x<n; x++)
    {
        scanf("\t%d", &vetor[x]);

    }

    printf("\n\tX: ");
    scanf("%d", &x);

    for (w=0; w<20; ++w)
    {

        if (x == vetor[w])
        {

            printf("%d", vetor[w], w);

        }
        else
        {
            printf("!");
        }

    }

    getch();
    return 0;
    system ("pause");

}
