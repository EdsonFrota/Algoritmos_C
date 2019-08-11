/*3) O Futebol Clube do Recife deseja aumentar o salário de seus jogadores. O ajuste salarial deve
obedecer à seguinte tabela:
Salário Atual Ação
 até R$ 900,00 Aumento de 20%
 >R$900,00 e <=R$1.300,00 Aumento de 15%
>R$1.300,00 e <=1.800,00 Aumento de 10%
>R$1.800,00 Aumento de 5%
Faça um programa ler o nome de um jogador e seu salário atual e calcular o seu aumento e seu novo
salário. O programa deverá exibir a seguinte frase:
O jogador ___________ terá aumento de R$ __________e passará a receber R$____________. */

#include<stdio.h>
int main ()
{
    char nome[100];
    float salario_atual, aumento, novo_salario;
    printf("Digite o nome do jogador: ");
    scanf("%s", &nome);
    printf("Digite o salario atual do jogador: ");
    scanf("%f", &salario_atual);

    if(salario_atual <= 900.00)
    {
        aumento = salario_atual*0.20;
        novo_salario = salario_atual*1.20;
        printf("\n[20%%] - O jogador %s tera aumento de R$ %.2f e passara a receber R$ %.2f.\n", nome, aumento, novo_salario);
    }
    else
    {
        if(salario_atual > 900.00 && salario_atual <= 1300.00)
        {
            aumento = salario_atual*0.15;
            novo_salario = salario_atual*1.15;
            printf("\n[15%%] - O jogador %s tera aumento de R$ %.2f e passara a receber R$ %.2f.\n", nome, aumento, novo_salario);
        }
        else
        {
            if(salario_atual > 1300.00 && salario_atual <= 1800.00)
            {
                aumento = salario_atual*0.10;
                novo_salario = salario_atual*1.10;
                printf("\n[10%%] - O jogador %s tera aumneto de RS %.2f e passara a receber %.2f\n", nome, aumento, novo_salario);
            }
            else
            {
                if (salario_atual > 1800.00)
                {
                    aumento = salario_atual*0.05;
                    novo_salario = salario_atual*1.05;
                    printf("\n[5%%] - O jogador %s tera aumento de R$ %.2f e passara a receber R$ %.2f\n", nome, aumento, novo_salario);
                }
            }
        }
    }
    return (0);
}
