/*6. Criar o algoritmo que deixe entrar com dois n�meros e imprimir o quadrado do menor
n�mero e a raiz quadrada do maior n�mero, se for poss�vel. */

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL,"");
    float n1, n2;
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);
    if (n1 < 0 && n2 > 0)
    {
        n1=pow(n1,2);
        n2=sqrt(n2);
        printf("\n Quadrado: %.1f\n Ra�z: %.1f",n1,n2);
    }
    else
    {
        if (n1 < 0 && n2 < 0 && n1 > n2)
        {
            n2=pow(n2,2);
            printf("N�o existe de ra�z de %.1f pois � um n�mero negativo.\n Quadrado do outro n�mero �: %.1f",n1,n2);
        }
        else
        {
            if (n1 < 0 && n2 < 0 && n2 > n1)
            {
                n1=pow(n1,2);
                printf("N�o existe de ra�z de %.1f pois � um n�mero negativo.\n Quadrado do outro n�mero �: %.1f",n2,n1);
            }

            else
            {
                if (n1 > n2)
                {
                    n1=sqrt(n1);
                    n2=pow(n2,2);
                    printf("Quadrado: %.1f\nRa�z: %.1f ",n2,n1);
                }
                else
                {
                    if (n2 > n1)
                    {
                        n1=pow(n1,2);
                        n2=sqrt(n2);
                        printf("Quadrado: %.1f\nRa�z: %.1f ",n1,n2);
                    }
                    else
                    {
                        if (n1==n2 && n2==n1)

                            if(n1 < 0 && n2 < 0)
                            {
                                n1=pow(n1,2);
                                printf("Os n�meros s�o iguais e negativos. Portanto: \nQuadrado: %.1f \nRa�z: n�o existe. ",n1,n2);
                            }
                            else
                            {
                                if(n1==n2 && n2==n1)
                                    if (n1 > 0 && n2 > 0)
                                    {
                                        n1=pow(n1,2);
                                        n2=sqrt(n2);
                                        printf("Os n�meros s�o iguais. Portanto \nQuadrado : %.1f \nRa�z: %.1f",n1,n2);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
