/*9. Fa�a um programa em C que receba um n�mero positivo e maior que zero,
calcule e mostre:
a. o n�mero digitado ao quadrado;
b. o n�mero digitado ao cubo;
c. a raiz quadrada do n�mero digitado;
d. a raiz c�bica do n�mero digitado.*/

#include<stdio.h>
#include<math.h>
int main  ()
{
    int numero,quadr,cubo,raizQ, raizC;
    printf("Digite um numero positivo maior que zero: ");
    scanf("%d", &numero);
    quadr=pow(numero,2);
    cubo=pow(numero,3);
    raizQ=sqrt(numero);
    raizC=cbrt(numero);
    printf("\n a.quadrado: %d\n b.cubo: %d\n c.raiz quadrada: %d\n d.raiz cubica: %d",quadr,cubo, raizQ,raizC);
    return 0;
}
