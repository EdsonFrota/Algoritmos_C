/*2. Fa�a um programa em C que receba o sal�rio de um funcion�rio, calcule e
mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.*/

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
