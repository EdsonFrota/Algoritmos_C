#include<stdio.h>
#include<stdlib.h>
int main (void)
{

    int q=0, i, vetor[10];
    printf("Valores: ");
    for (i=0; i<10; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    for (i=0; i<10; ++i)
    {
        if (vetor[i] % 2 == 0)
        {
            ++q;
            printf(" %d .", vetor[i]);
        }
}

    printf(" \n%d valores pares.", q);

    getch ();
    return 0;
    system ("pause");

}
