/*1) Faça um programa que receba três notas	de um aluno, calcule e mostre a	média
aritmética de acordo com a tabela abaixo.Para alunos de exame, calcule e mostre	a	nota
que	deverá	ser	 tirada	no	exame para a aprovação,	considerando
que	a	média	no	exame	é	6,0.
Média	aritmética Mensagem
0,0	<=	Média<	3,0 REPROVADO
3,0	<=	Média<	7,0 EXAME
7,0	<=	Média<	10,0 APROVADO */

#include<stdio.h>
int main ()
{

    float nota1, nota2, nota3, media;

    printf("Digite a 1a nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2a nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3a nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3.0;
    printf("A media foi de: %.2f",media);
    if (media < 3.0)
    {
        printf("\nREPROVADO.");
    }
    else
    {
        if (media <= 3.0  || media < 7.0)
        {
            printf("\nEXAME. Sera necessario de %.2f pnts para a aprovacao.",6.0-media);
        }
        else
        {
            if (media <= 7.0 || media < 10.0)
            {
                printf("\nAPROVADO.");
            }
        }
    }
    return (0);
}
