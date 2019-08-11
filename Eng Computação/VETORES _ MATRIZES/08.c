#include<stdio.h>
#include<stdlib.h>

int main (void)
{

    int a, w, vetor[10];

    for (a=0; a<10; ++a)
    {
        printf(" ");
        scanf("%d", &vetor[a]);
    }

    for (a=0; a<10; ++a)
    {

        for (w=0; w<a; ++w)
        {
            vetor[a] += vetor[w];
        }
    }

    for (a=0; a<10; ++a)
    {
        printf("Valor: %d\n", vetor[a]);
    }
    getch ();
    return 0;
    system ("pause");
}
