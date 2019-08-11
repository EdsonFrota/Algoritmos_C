/*6. Faça um programa em C que receba o valor de um depósito e o valor da taxa
de juros, calcule e mostre o valor do rendimento e o valor total depois do
rendimento.*/

#include<stdio.h>
int main ()
{
    float deposito,taxa,rendimento,total;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    rendimento=deposito*taxa;
    total=rendimento+deposito;
    printf("O valor do rendimento foi de: %.2f. Apos o rendimento o valor total foi de R$%.2f",rendimento,total);
    return 0;
}
