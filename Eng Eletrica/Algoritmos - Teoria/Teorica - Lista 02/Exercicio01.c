/* 1.Escreva um	programa que receba	os seguintes dados sobre um	funcionário:
- total de horas trabalhadas (Tot_Hora);
- o código do turno de trabalho, sendo  M para matutino, V para vespertino, N para noturno.
(considere a possibilidade de ser informado	um código inválido);
- o valor da hora trabalhada (Val_Hora_Trab).
Seu	 programa,  utilizando o comando switch, deve calcular e imprimir o salário desse
funcionário	com	base na tabela a seguir:
Turno Salário	Final
Matutino (M) Val_Hora_Trab * Tot_Hora * 1.05
Vespertino (V) Val_Hora_Trab * Tot_Hora * 1.1
Noturno (N) Val_Hora_Trab *	Tot_Hora * 1.15  */

#include<stdio.h>
int main ()
{
    char turno;
    float Tot_Hora, Val_Hora_Trab, S_final;
    printf("Digite o total de horas trabalhadas: ");
    scanf("%f",&Tot_Hora);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &Val_Hora_Trab);
    printf("\nTurno de trabalho: \n[MATUTINO - M] :: [VESPERTINO - V] :: [NOTURNO - N]:: ");
    scanf(" %c",&turno);

    switch(turno)
    {

    case 'm':
    case 'M':
        S_final = Val_Hora_Trab * Tot_Hora *1.05;
        printf("O salario sera de R$ %.2f.\n",  S_final);
        break;

    case 'v':
    case 'V':
        S_final = Val_Hora_Trab * Tot_Hora * 1.1;
        printf("O salario sera de R$ %.2f.\n",  S_final);
        break;

    case 'n':
    case 'N':
        S_final = Val_Hora_Trab * Tot_Hora * 1.15;
        printf("O salario sera de R$ %.2f.\n",  S_final);
        break;

    default:
        printf("Codigo de turno Incorreto!\n");
    }
    return (0);

}
