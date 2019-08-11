/*7) Faça	 um	 programa que	 receba	 o	 código	 correspondente	 ao	 cargo	 de	 um
funcionário	e	seu	salário	atual	e	mostre	o	cargo,	o	valor	do	aumento	e	seu	novo
salario.	Os	cargos	estão	na	tabela	a	seguir:
CÓDIGO CARGO PERCENTUAL
1 ESCRITURÁRIO 50%
2 SECRETÁRIO 35%
3 CAIXA 20%
4 GERENTE 10%
5 DIRETOR NÃOHAVERÁ AUMENTO */

#include<stdio.h>
int main ()
{
    int codigo;
    float salario, aumento;
    printf("\t*** CARGOS ***\n[1].ESCRITURARIO\n[2].SECRETARIO\n[3].CAIXA\n[4].GERENTE\n[5].DIRETOR\n");
    printf("Digite o codigo do funcionario: ");
    scanf("%d", &codigo);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);
    switch(codigo)
    {
    case 1:
        aumento=salario*0.50;
        salario=salario+aumento;
        printf("\nCargo ESCRITURARIO, 50%% de aumento. Novo salario R$ %.2f.\n",salario);
        break;

    case 2:
        aumento=salario*0.35;
        salario=salario+aumento;
        printf("\nCargo SECRETARIO, 35%% de aumento. Novo salario R$ %.2f.\n", salario);
        break;

    case 3:
        aumento=salario*0.20;
        salario=salario+aumento;
        printf("\nCargo CAIXA, 20%% de aumento. Novo salario R$ %.2f.\n", salario);
        break;

    case 4:
        aumento=salario*0.10;
        salario=salario+aumento;
        printf("\nCargo GERENTE, 10%% de aumento. Novo salario R$ %.2f.\n", salario);
        break;

    case 5:
        printf("\nCargo DIRETOR. Nao havera aumneto.\n");
        break;

    default:
        printf("\nOpcao inexistente.PRESTA ATENCAO.\n");
    }
    return (0);
}
