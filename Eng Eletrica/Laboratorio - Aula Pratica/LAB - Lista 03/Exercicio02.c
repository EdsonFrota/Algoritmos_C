/*2) Recomendam-se estudantes para bolsas de estudo em fun��o de seu desempenho anterior. A natureza
das recomenda��es � baseada na seguinte tabela:
M�dia Recomenda��o
 M�dia >= 9,0 Altamente recomendado
 8,0<= m�dia< 9,0 Fortemente recomendado
7,0<= m�dia< 8,0 Recomendado
M�dia <7,0 N�o recomendado
Fa�a um programa para ler o nome e a m�dia de um aluno e determinar sua recomenda��o. O programa
dever� exibir a seguinte mensagem:
O aluno ____________ � __________________. */

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
