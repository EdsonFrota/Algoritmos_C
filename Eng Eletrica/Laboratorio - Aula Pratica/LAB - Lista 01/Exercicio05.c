/*5. Fa�a um programa em C que receba o sal�rio-base de um funcion�rio, calcule
e mostre o seu sal�rio a receber, sabendo-se que esse funcion�rio tem
gratifica��o de R$ 50,00 e paga imposto de 10% sobre o sal�rio-base.*/

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
