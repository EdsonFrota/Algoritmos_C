/*8) Faça um programa para resolver equações do 2o grau. */

#include<stdio.h>
#include<math.h>
int main ()
{
    float a, b, c, delta,raiz, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);


    if (delta >= 0)
    {
        raiz=sqrt(delta);
        printf("A raiz de deta e: %.1f",raiz);

        x1=(-(b)+sqrt(delta))/2*a;
        x2=(-(b)-sqrt(delta))/2*a;
        printf("\nO valores sao: \nx1: %.1f \nx2: %.1f\n",x1,x2);
    }
    else
    {
        printf("Delta negativo. Portanto nao tem raizes reais.");
    }

    return (0);
}
