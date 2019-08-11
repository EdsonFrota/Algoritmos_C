/*2) Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva raiz
média quadrática. */

#include<stdio.h>
#include<math.h>
int main ()
{
    int i, quadrado=0,vetor[100];
    float rms;

     printf("Preencha o Vetor:\n");

    for(i=0; i<100; i++)
    {
        printf("[%d]: ", i);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<100; i++)
    {
        quadrado+=pow(vetor[i],2);
    }

    rms=quadrado/100.0;
    rms = sqrt(rms);

    printf("\nRaiz Media Quadrada: %f",rms);
    return 0;
}
