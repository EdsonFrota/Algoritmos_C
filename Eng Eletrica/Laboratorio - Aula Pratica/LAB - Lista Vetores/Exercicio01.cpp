/*1) Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva a
amplitude total deste conjunto. (maior elemento – menor elemento).*/

#include<stdio.h>
int main ()
{
    int i, maior, menor, amplitude, vetor[100];

    printf("Preencha o Vetor:\n");

    for(i=0; i<100; i++)
    {
        printf("[%d]: ",i);
        scanf("%d",&vetor[i]);

        maior=vetor[0];
        menor=vetor[0];
    }
    for(i=0; i<100; i++)
    {
        if(vetor[i] > maior)
        {
            maior=vetor[i];
        }
    }
    printf("\nMaior: %d\n",maior);

    for(i=0; i<100; i++)
    {
        if(vetor[i] < menor)
        {
            menor=vetor[i];
        }
    }
    printf("Menor: %d\n", menor);

    amplitude = maior - menor;

    printf("Amplitude Total: %d\n",amplitude);

    return 0;
}
