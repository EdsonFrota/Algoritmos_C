/*1) A nota de um aluno em uma disciplina � a m�dia ponderada das notas de suas duas avalia��es
parciais. A primeira avalia��o parcial tem peso 2 e a segunda avalia��o parcial tem peso 3. Se a m�dia
do aluno for maior o u igual a sete, o aluno est� aprovado. Se a m�dia do aluno for menor que tr�s, o
aluno est� reprovado. Se a m�dia do aluno for menor que sete e maior ou igual a tr�s, o aluno ir� para a
recupera��o. Fa�a um programa para calcular a m�dia de um aluno em uma determinada disciplina e
informar o seu estado final. O programa dever� exibir a seguinte frase:
O aluno _____________ obteve m�dia _________ e est� ______________.*/

#include<stdio.h>

int main ()
{
    float prova1, prova2, media;

    printf("Digite a nota da 1a prova: ");
    scanf("%f",&prova1);
    printf("Digite a nota da 2a prova: ");
    scanf("%f",&prova2);

    prova1 = prova1*2.0;
    prova2 = prova2*3.0;
    media = ((prova1+prova2)/(2.0 + 3.0));

    if (media >= 7.0)
    {
        printf("\nO aluno obteve media %.2f e esta APROVADO.\n",media);
    }
    else
    {
        if (media >= 3.0 && media < 7.0)
        {
            printf("\nO aluno obteve media %.2f e ira para RECUPERACAO.\n",media);
        }
        else
        {
            printf("O aluno obteve media %.2f e esta REPROVADO.\n",media);
        }
    }
    return(0);
}
