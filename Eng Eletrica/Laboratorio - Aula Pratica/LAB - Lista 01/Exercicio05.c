/*5. Faça um programa em C que receba o salário-base de um funcionário, calcule
e mostre o seu salário a receber, sabendo-se que esse funcionário tem
gratificação de R$ 50,00 e paga imposto de 10% sobre o salário-base.*/

#include<stdio.h>
int main ()
{
    float salario,imposto,novo;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    salario=(salario+50);
    imposto=(salario*0.10);
    novo=salario-imposto;
    printf("\nO salario a receber sera de R$%.2f",novo);
    return 0;
}
