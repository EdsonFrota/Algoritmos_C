#include<stdio.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");
    float salario, div, dividas, total;

    printf("Qual o salário desse mês: ");
    scanf("%f", &salario);

    div = salario/4;
    printf("\n\t SALDO DISP.= %.2f", div);

    printf("\n\nDIVÍDAS:");
    scanf("%f", &dividas);

    if (dividas >= div)
    {
        printf("\n\tVÁ COM CALMA, NÃO SE COMPROMETA,  ");
        printf("SALDO DISP.= %.2f\n\n", div);
    }
    else
    {
        total = div - dividas;
        printf("\n\nDISP. = %.2f", total);
        printf("\n\nCONTINUE...");
    }
return 0;

}
