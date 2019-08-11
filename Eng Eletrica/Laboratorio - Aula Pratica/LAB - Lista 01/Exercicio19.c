/*19. Uma locadora de charretes cobra R$10,00 de taxa para cada 3 horas de uso
destas e R$5,00 para cada hora abaixo destas 3 horas. Fazer um algoritmo
que dado a quantidade de horas que a charrete foi usada calcule e escreva
quanto o cliente tem que pagar.*/

#include<stdio.h>
int main ()
{
    int horas;
    float valor10,valor5,rest,valorF;
    printf("Digite a quantidade de horas qua a charrete foi utilizada: ");
    scanf("%d", &horas);
    valor10=(horas/3)*10;
    rest=(horas%3);
    valor5=rest*5;
    valorF=valor10+valor5;
    printf("O valor a ser pago e R$ %f",valorF);
}
