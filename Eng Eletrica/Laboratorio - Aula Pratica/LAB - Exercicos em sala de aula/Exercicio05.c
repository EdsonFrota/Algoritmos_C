/*5 - O	custo ao consumidor	de um carro novo é a soma do custo de
fábrica	com	a percentagem do distribuidor e com os impostos
aplicados ao custo de fábrica. Supondo que a percentagem do
distribuidor seja de 12% do	preço de fábrica e os impostos de 30% do
preço de fábrica, fazer	um	programa para ler o	custo de fábrica de um
carro e imprimir o custo ao	consumidor.*/

#include<stdio.h>
int main()
{
    float distr, fabrica, impostos, consumidor;
    printf("Digite o preco de fabrica do carro: ");
    scanf("%f", &fabrica);
    distr = (fabrica*0.12)+fabrica; //(%) do distribuidor
    impostos = (fabrica*0.30)+fabrica;
    consumidor = distr+impostos;
    printf("\nO custo do consumidor sera de: %.3f\n",consumidor);
    return 0;
}


