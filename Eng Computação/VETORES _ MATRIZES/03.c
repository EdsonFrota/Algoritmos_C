#include<stdio.h>

int main(void)
{
    int vetor[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int l, i;

    printf(" ");
    for(i=0; i<16; ++i)
    {
        scanf("%d", &vetor[i]);
        l = vetor[i+8];
        vetor[i+8] = vetor[i];
        vetor[i] = l;
    }

    for(i=0; i<16; ++i)
        printf("\n   %d ", vetor[l]);

    getch();
    system("pause");
    return 0;


}
