/*2. Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais
fornece a quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada �
sempre a mesma. Fa�a um algoritmo que receba o peso do saco de ra��o e a quantidade de
ra��o fornecida para cada gato, calcule e mostre quanto restar� de ra��o ao final de cinco
dias. */

#include<stdio.h>
#include<locale.h>
int main ()
{   setlocale(LC_ALL, "Portuguese");
    float peso, racao, gramas, gato, resta;
    printf("Digite o peso do saco de racao (kgs): ");
    scanf("%f", &peso);
    printf("Digite a quantidade de racao fornecida para cada gato (gramas): ");
    scanf("%f", &racao);
    gramas=peso*1000;
    gato=(racao*2)*5;
    resta=(gramas-gato)/1000;

    printf("Ao final de 5 dias restara %.2f kgs de ra�a�.",resta);
    return 0;
}
