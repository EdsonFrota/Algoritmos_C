#include<stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int tam;

    printf("Informe o tamanho do Vetor: ");
    scanf("%d",&tam);

    int  i, j, aux, vetor[tam];

    if((tam > 0 ) && (tam <=100))
    {
        for(i=0; i<tam; i++)
        {
            printf("[%d]: ",i);
            scanf("%d",&vetor[i]);
        }

        for(i=0; i<tam; i++)
        {
            for(j=0; j<tam; j++)
            {
                if(vetor[i] < vetor[j])
                {
                    aux = vetor[j];
                    vetor[j] = vetor[i];
                    vetor[i] = aux;
                }
            }
        }

        printf("\n Vetor em ordem crescente: \n ");

        for(i=0; i<tam; i++)
        {
            printf(" %d ",vetor[i]);
        }

        printf("\n\n ");

        printf("Vetor em ordem decrescente: \n ");

        for(j=0; j<tam; j++)
        {
            for(i=0; i<tam; i++)
            {
                if(vetor[j] > vetor[i])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

        for(j=0; j<tam; j++)
        {
            printf(" %d ",vetor[j]);
        }
    }

    else
    {
        printf("\n PAÇOCA.");
    }
    return 0;
}
