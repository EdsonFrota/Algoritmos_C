/* 2. Um funcion�rio ir� receber um	aumento	de	acordo com o seu plano de  trabalho, de
acordo com a tabela	abaixo:

                PLANO | AUMENTO
                A     |   10%
                B     |   15%
                C     |   20%

Fa�a um	programa que leia o plano de trabalho e o sal�rio atual de um funcion�rio,	e
calcule	e	imprima	o	seu	novo sal�rio. Use o comando	switch. */

#include<stdio.h>
int main ()
{

    char plano;
    float salario;

    printf("PLANOS ->\n\t[A]-10%% \n\t[B]-15%% \n\t[C]-20%%\n");
    printf("Digite o plano de trabalho: ");
    scanf(" %c",&plano);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch(plano)
    {


    case 'a':
    case 'A':
        salario = salario*1.10;
        printf("\nO novo salario sera de R$ %.2f", salario);
        break;

    case 'b':
    case 'B':
        salario = salario*1.15;
        printf("\nO novo salario sera de R$ %.2f", salario);
        break;

    case 'c':
    case 'C':
        salario = salario*1.20;
        printf("\nO novo salario sera de R$ %.2f", salario);
        break;

    default:
        printf("PLANO INEXISTENTE !");

    }
    return (0);
}

