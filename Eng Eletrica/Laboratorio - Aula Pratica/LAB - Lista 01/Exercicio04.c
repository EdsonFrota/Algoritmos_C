/*4. Fa�a um programa em C que receba o sal�rio-base de um funcion�rio, calcule
e mostre o sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o
de 5% sobre o sal�rio-base e paga imposto de 7% sobre o sal�rio-base.*/

#include<stdio.h>
int main ()
{
    float salario,novoS, salarioR, imposto;
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario);
    salarioR=(salario*0.05)+salario;
    imposto=(salarioR*0.07)+salarioR;
    novoS=(salario +salarioR)-imposto;
    printf("O salario base do funcionario sera de R$%.3f",novoS);
    return 0;
}
