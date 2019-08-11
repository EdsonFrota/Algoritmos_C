/*2) Recomendam-se estudantes para bolsas de estudo em função de seu desempenho anterior. A natureza
das recomendações é baseada na seguinte tabela:
Média Recomendação
 Média >= 9,0 Altamente recomendado
 8,0<= média< 9,0 Fortemente recomendado
7,0<= média< 8,0 Recomendado
Média <7,0 Não recomendado
Faça um programa para ler o nome e a média de um aluno e determinar sua recomendação. O programa
deverá exibir a seguinte mensagem:
O aluno ____________ é __________________. */

#include<stdio.h>
int main ()
{

    char nome[100];
    float media;

    printf("Digite o nome do aluno: ");
    scanf("%s",&nome);
    printf("Digite a media: ");
    scanf("%f", &media);
    if (media >= 9.0)
    {
        printf("\nO aluno %s e Altamente Recomendado.\n",nome);
    }
    else
    {
        if (media >= 8.0 && media < 9.0 )
        {
            printf("\nO aluno %s e Fortemente Recomendado.\n",nome);
        }
        else
        {
            if (media >= 7.0 && media)
            {
                printf("\nO aluno %s e Recomendado.\n",nome);
            }
            else
            {
                printf("\nO aluno %s e Nao recomendado.\n",nome);
            }

        }
    }
    return (0);
}
