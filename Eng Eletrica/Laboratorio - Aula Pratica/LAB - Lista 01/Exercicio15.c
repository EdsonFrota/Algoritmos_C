/*15. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a
percentagem do distribuidor e com os impostos aplicados ao custo de f�brica.
Supondo que a percentagem do distribuidor seja de 12% do pre�o de f�brica e
os impostos de 30% do pre�o de f�brica, fazer um programa para ler o custo
de f�brica de um carro e imprimir o custo ao consumidor.*/

#include<stdio.h>
int main ()
{
    float pDistri,imposto,fabrica,custo;
    printf("Digite o valor do carro: ");
    scanf("%f", &fabrica);
    pDistri=(fabrica*0.12);
    imposto=(fabrica*0.30);
    custo=pDistri+imposto+fabrica;
    printf("\nO preco ao consumidor sera de R$ %.3f",custo);
    return 0;
}
