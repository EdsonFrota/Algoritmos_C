/*4) Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Ambos os conjuntos já
foram lidos ordenados. Calcule e escreva um terceiro conjunto fruto da intercalação, também
ordenada, dos dois primeiros. */
#include<stdio.h>
int main ()
{
    int i,j,aux,vetor1[30], vetor2[30], vetor3[60], a1=0, a2=0;
    printf("Digite o 1§ conjunto:\n");
    for(i=0; i<30; i++)
    {
        printf("[%d]: ",i);
        scanf("%d",&vetor1[i]);
    }
    printf("Digite o 2§ conjunto:\n");
    for(i=0; i<30; i++)
    {
        printf("[%d]: ", i);
        scanf("%d",&vetor2[i]);
    }
    for(i=0; i<60; i++)
    {
        if(i%2==0)
        {
            vetor3[i]=vetor1[a2];
            a2++;
        }
        else
        {
            vetor3[i]=vetor2[a1];
            a1++;
        }
    }
     printf("\nConjunto Intercaldo:");
    for(i=0; i<60; i++)
    {
        printf("\n[%d]: %d", i,vetor3[i]);
    }
    for(i=0; i<60; i++)
    {
        for(j=i+1; j<60; j++)
        {
            if(vetor3[i]>vetor3[j])
            {
                aux=vetor3[i];
                vetor3[i]=vetor3[j];
                vetor3[j]=aux;
            }
        }
    }
     printf("\n");    printf("\nConjunto Intercalado Ordenado:") ;
    for(i=0; i<60; i++)
    {
        printf("\n[%d]: %d",i,vetor3[i]);
    }

    return 0;
}
