/*5) Elabore um algoritmo para armazenar em um vetor V1 todos os valores inteiros positivos
desde 1 até 50. Em seguida transporte todos os elementos primos do vetor V1 para um vetor
V2. Imprima no final os dois vetores. */
#include<stdio.h>

int main ()
{

    int i, v1[50], v2[50], n, controle, aux, contador=0;

    for(i=0; i<50; i++)
    {
        printf("[%d]: ", i);
        scanf("%d",&v1[i]);
    }
    for(i=1; i<=50; i++)
    {
        v1[i-1]=i;
    }

    printf("Os numeros primos do vetor informado sao: ");
    for(i=0; i<50; i++)
    {
        controle=0;
        aux=v1[i];
        for(n=1; n<=aux; n++)
        {
            if(aux%n==0)
            {
                controle++;
            }
        }
        if(controle==2)
        {
            contador++;
            v2[contador]=v1[i];
            printf("%d ",v2[contador]);
        }
    }
    return 0;
}






