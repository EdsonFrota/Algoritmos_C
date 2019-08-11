/*1. Faça um programa em C que receba três notas e seus respectivos pesos,
calcule e mostre a média ponderada dessas notas.*/

#include<stdio.h>
int main ()
{
    float n1,n2,n3,p1,p2,p3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Peso 1: ");
    scanf("%f", &p1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &n2);
    printf("Peso 2: ");
    scanf("%f", &p2);
    printf("\nDigte a nota 3: ");
    scanf("%f", &n3);
    printf("Peso 3: ");
    scanf("%f", &p3);
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("A media ponderada das notas e : %.2f",media);
    return 0;
}
