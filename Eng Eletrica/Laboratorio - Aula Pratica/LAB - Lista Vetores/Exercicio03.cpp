/*3) Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Calcule e escreva um
terceiro conjunto fruto da intercalação dos dois primeiros. */

#include<stdio.h>

int main ()
{
    int i, vetor1[30], vetor2[30], vetor3[60], organiza1=0, organiza2=0;

    printf("Digite o 1§ conjunto:\n");
    for(i=0; i<30; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&vetor1[i]);
    }

    printf("Digite o 2§ conjunto:\n");
    for(i=0; i<30; i++)
    {
        printf("[%d]: ",i);
        scanf("%d",&vetor2[i]);
    }

    for(i=0; i<60; i++)
    {
        if(i%2!=0)
        {
            vetor3[i]=vetor2[organiza1];
            organiza1++;
        }
        else
        {
            vetor3[i]=vetor1[organiza2];
            organiza2++;
        }
    }

    printf("\n3§ conjunto gerado:");
    for(i=0; i<60; i++)
    {
        printf("\n[%d]: %d ",i,vetor3[i]);
    }
    return 0;
}
