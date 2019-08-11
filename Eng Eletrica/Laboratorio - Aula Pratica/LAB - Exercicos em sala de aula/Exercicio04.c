/*4	- Fazer um	programa em C para ler os valores dos coeficientes A, B	e
C de uma equação quadrática e calcular e imprimir o valor do
discriminante (delta):Delta	=B2-4*A*C.	*/

#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C, delta;
    printf("Valor do coeficiente A: ");
    scanf("%d", &A);
    printf("\nValor do coeficiente B: ");
    scanf("%d",&B);
    printf("\nValor do coeficiente C: ");
    scanf("%d", &C);
    delta = (pow(B,2)) - 4*A*C;
    printf("O valor de delta e: %d", delta);
    return 0;
}
