/*1. Um trabalhador recebeu seu salário e depositou em uma conta bancária. Esse trabalhador
emitiu dois cheques e agora deseja saber seu saldo. Sabendo que cada operação bancária de
retirada é paga uma taxa de 0.03% do valor retirado e que o saldo anterior ao depósito do
salário era de R$ 100,00, faça um algoritmo que receba o valor do salário e os valores dos
dois cheques emitidos, determine e emita o saldo atual. */

#include<stdio.h>
#include<locale.h>
int main ()
{   setlocale(LC_ALL,"Portuguese");
    float salario, cheque1, cheque2, saldoF;
    printf("Digite o salário recebido: ");
    scanf("%f", &salario);
    printf("Digite o valor do primeiro cheque emitido: ");
    scanf("%f", &cheque1);
    printf("Digite o valor do segundo cheque emitido: ");
    scanf("%f", &cheque2);
    cheque1=(0.0003*cheque1);
    cheque2=(0.0003*cheque2);
    saldoF=((salario+100)-(cheque1+cheque2));
    printf("O saldo atual é de R$: %.2f",saldoF);
    return 0;


}
