#include<stdio.h>
#include<locale.h>

main ()  {
setlocale(LC_ALL, "Portuguese");

float salario, fgts, nvsalario;

    printf("Informe o salário:");
    scanf("%f", &salario);

fgts = 0.08 * salario;
    printf("O desconto referente ao FGTS será de R$%.1f", fgts);
nvsalario = salario - fgts;
    printf("\nO novo salário será de R$ %.2f\n\n", nvsalario);

system("pause");

}
