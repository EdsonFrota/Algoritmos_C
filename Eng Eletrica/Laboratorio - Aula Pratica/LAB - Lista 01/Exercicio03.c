/*3. Fa�a um programa em C que receba o sal�rio de um funcion�rio e o percentual
de aumento, calcule e mostre o valor do aumento e o novo sal�rio.*/

#include<stdio.h>
int main ()
{
    float salario, salario1, porcentagem, aumento;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem);
    salario1=(salario*porcentagem)+salario;
    aumento=(salario1-salario)*1000;
    printf("\nO valor do aumento foi de R$ %.2f \nO novo salario sera de R$ %.3f\n", aumento,salario1);
    return 0;

}
