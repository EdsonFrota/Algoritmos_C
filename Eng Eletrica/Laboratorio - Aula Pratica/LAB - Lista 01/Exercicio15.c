/*15. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e com os impostos aplicados ao custo de fábrica.
Supondo que a percentagem do distribuidor seja de 12% do preço de fábrica e
os impostos de 30% do preço de fábrica, fazer um programa para ler o custo
de fábrica de um carro e imprimir o custo ao consumidor.*/

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
