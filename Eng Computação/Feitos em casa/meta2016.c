#include<stdio.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "Portuguese");
    float salario, div, dividas, total;

    printf("Qual o sal�rio desse m�s: ");
    scanf("%f", &salario);

    div = salario/4;
    printf("\n\t SALDO DISP.= %.2f", div);

    printf("\n\nDIV�DAS:");
    scanf("%f", &dividas);

    if (dividas >= div)
    {
        printf("\n\tV� COM CALMA, N�O SE COMPROMETA,  ");
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
