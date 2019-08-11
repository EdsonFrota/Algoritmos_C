#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int vetor[20], w, x;
    printf(" ");

    for (x=0; x<20; x++)
    {
        scanf("\t%d", &vetor[x]);

    }

    printf("\n\tX: ");
    scanf("%d", &x);

    for (w=0; w<20; ++w)
    {

        if (x == vetor[w])
        {

            printf(" INDICE = %d.", vetor[w], w);

        }
        else
        {
            printf("VALOR NAO ENCONTRADO!");
        }

    }

    getch();
     system ("pause")
    return 0;

}
