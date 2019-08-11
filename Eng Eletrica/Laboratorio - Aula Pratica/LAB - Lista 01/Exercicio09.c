/*9. Faça um programa em C que receba um número positivo e maior que zero,
calcule e mostre:
a. o número digitado ao quadrado;
b. o número digitado ao cubo;
c. a raiz quadrada do número digitado;
d. a raiz cúbica do número digitado.*/

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
