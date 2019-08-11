/*6) Uma determinada	empresa	deseja	dar	um	aumento	de	salário	para	seus
funcionários. O	ajuste	deve	obedecer	a	tabela	seguinte:
Salário	Atual Ação
Até	R$900,00 Aumento	de	20%
Acima	de	R$	900,00	até	R$1.300,00 Aumento	de	15%
Acima	de	R$	1.300,00	até	 R$1.800,00 Aumento	de	10%
Acima	de	R$1.800,00 Aumento	de	5%
Faça	um	programa	para	ler	o nome	e o salário	atual	dos	funcionários	e
calcular	seu	aumento	e	seu	novo salário. O	programa	deverá	exibir,	para
cada	funcionário,	a	seguinte frase:
O funcionário	_________	terá	aumento	de	R$	_________	e	passará	a	receber	R$
___________.*/

#include<stdio.h>
int main ()
{
    float salario, aumento;
    char nome[100];

    do
    {
        printf("Digite o nome do funcionario: ");
        scanf("%s",&nome);

        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        if ((salario > 0.0) && (salario <= 900.0))
        {
            aumento=salario*0.20;
            salario*=1.20;
            printf("O funcionario %s tera aumento de  R$ %.1f e passara a receber R$ %.1f\n\n",nome ,aumento, salario);

        }

        else if ((salario > 900.0) && (salario <= 1300.0))
        {
            aumento=salario*0.15;
            salario*=1.15;
            printf("O funcionario %s tera aumento de  R$ %.1f e passara a receber R$ %.1f\n\n",nome ,aumento, salario);
        }

        else if((salario > 1300.0) && (salario <= 1800.0))
        {
            aumento=salario*0.10;
            salario*=1.10;
            printf("O funcionario %s tera aumento de  R$ %.1f e passara a receber R$ %.1f\n\n",nome ,aumento, salario);
        }

        else if (salario > 1800.0)
        {
            aumento=salario*0.05;
            salario*=1.05;
            printf("O funcionario %s tera aumento de  R$ %.1f e passara a receber R$ %.1f\n\n",nome ,aumento, salario);
        }
    }
    while(salario > -1);
    return 0;
}
