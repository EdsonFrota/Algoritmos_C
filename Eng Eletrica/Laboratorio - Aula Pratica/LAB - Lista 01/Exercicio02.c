/*2. Faça um programa em C que receba o salário de um funcionário, calcule e
mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.*/

#include<stdio.h>
int main ()
{
    float salario;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    salario=(salario*0.25)+salario;
    printf("O novo salario e: %f",salario);
    return 0;
}
