#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()  {

setlocale(LC_ALL, "Portuguese");

float custoF, porcD, imposto, m, l;

printf("Digite o preço de fábrica do carro:");
scanf("%f", &custoF);

porcD = 0.28;
imposto = 0.45;

m = custoF*(porcD*imposto);
l = custoF+m;
printf("O custo total do consumidor será de R$%.3f\n\n", l);

system ("pause");

}
