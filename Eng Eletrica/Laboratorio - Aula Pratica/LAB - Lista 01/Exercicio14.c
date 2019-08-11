/*14. Fazer um programa em C para ler os valores dos coeficientes A, B e C de uma
equação quadrática e calcular e imprimir o valor do discriminante(delta):
b² + 4*a*c. */

#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, c, delta;
    printf("Digite valor do coeficiente A: ");
    scanf("%d", &a);
    printf("Digite o valor do coeficiente B: ");
    scanf("%d",&b);
    printf("Digite o valor do coeficiente C: ");
    scanf("%d", &c);
    delta=(pow(b,2))- 4*a*c;
    printf("\nO valor de delta e: %d", delta);
    return 0;
}
