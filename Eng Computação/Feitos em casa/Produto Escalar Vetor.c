#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    int i, vetorA[10], vetorB[10], escalar=0;
    printf("\nVETOR [A]::\n\n");
    for(i=0; i<10; i++)
    {
        printf("[%d] valor: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n\nVETOR [B]::\n\n");
    for(i=0; i<10; i++)
    {
        printf("[%d] valor: ", i);
        scanf("%d", &vetorB[i]);
    }

    for(i=0; i<10; i++)
    {
        escalar += vetorA[i] * vetorB[i];
    }

    printf("\n\n O produto escalar entre os vetores = %d\n\n", escalar);

    system("pause");
}
