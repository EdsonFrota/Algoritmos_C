/*5 - O	custo ao consumidor	de um carro novo � a soma do custo de
f�brica	com	a percentagem do distribuidor e com os impostos
aplicados ao custo de f�brica. Supondo que a percentagem do
distribuidor seja de 12% do	pre�o de f�brica e os impostos de 30% do
pre�o de f�brica, fazer	um	programa para ler o	custo de f�brica de um
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


