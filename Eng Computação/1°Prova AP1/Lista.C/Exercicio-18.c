#include<stdio.h>
#include<locale.h>

main ()  {
setlocale(LC_ALL, "Portuguese");

float salario, fgts, nvsalario;

    printf("Informe o sal�rio:");
    scanf("%f", &salario);

fgts = 0.08 * salario;
    printf("O desconto referente ao FGTS ser� de R$%.1f", fgts);
nvsalario = salario - fgts;
    printf("\nO novo sal�rio ser� de R$ %.2f\n\n", nvsalario);

system("pause");

}
