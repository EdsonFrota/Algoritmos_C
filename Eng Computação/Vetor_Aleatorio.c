#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int *vetor;
    int i,n;

    printf("Entre com o numero de valores a serem gerados: \n");
    scanf("%d", &n);

    printf("\n");
    vetor=(int *) malloc(n * sizeof (int));
    for(i=0; i<n; i++)
    {
        vetor[i]=rand()%1000; //inserção dos valores no vetor.
        printf(" %d ",vetor[i] ); //impressao dos valores contidos no vetor
    }
    printf("\n");

    return (0);
}
