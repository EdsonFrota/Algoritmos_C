/*4. Faça um programa em C que receba o salário-base de um funcionário, calcule
e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação
de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.*/

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
