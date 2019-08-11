/*6. Criar o algoritmo que deixe entrar com dois números e imprimir o quadrado do menor
número e a raiz quadrada do maior número, se for possível. */

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL,"");
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    if (n1 < 0 && n2 > 0)
    {
        n1=pow(n1,2);
        n2=sqrt(n2);
        printf("\n Quadrado: %.1f\n Raíz: %.1f",n1,n2);
    }
    else
    {
        if (n1 < 0 && n2 < 0 && n1 > n2)
        {
            n2=pow(n2,2);
            printf("Não existe de raíz de %.1f pois é um número negativo.\n Quadrado do outro número é: %.1f",n1,n2);
        }
        else
        {
            if (n1 < 0 && n2 < 0 && n2 > n1)
            {
                n1=pow(n1,2);
                printf("Não existe de raíz de %.1f pois é um número negativo.\n Quadrado do outro número é: %.1f",n2,n1);
            }

            else
            {
                if (n1 > n2)
                {
                    n1=sqrt(n1);
                    n2=pow(n2,2);
                    printf("Quadrado: %.1f\nRaíz: %.1f ",n2,n1);
                }
                else
                {
                    if (n2 > n1)
                    {
                        n1=pow(n1,2);
                        n2=sqrt(n2);
                        printf("Quadrado: %.1f\nRaíz: %.1f ",n1,n2);
                    }
                    else
                    {
                        if (n1==n2 && n2==n1)

                            if(n1 < 0 && n2 < 0)
                            {
                                n1=pow(n1,2);
                                printf("Os números são iguais e negativos. Portanto: \nQuadrado: %.1f \nRaíz: não existe. ",n1,n2);
                            }
                            else
                            {
                                if(n1==n2 && n2==n1)
                                    if (n1 > 0 && n2 > 0)
                                    {
                                        n1=pow(n1,2);
                                        n2=sqrt(n2);
                                        printf("Os números são iguais. Portanto \nQuadrado : %.1f \nRaíz: %.1f",n1,n2);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
