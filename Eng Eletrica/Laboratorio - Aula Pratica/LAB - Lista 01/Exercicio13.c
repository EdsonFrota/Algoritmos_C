/*13. Fazer um programa em C para ler uma quantidade de chuva dada em
polegadas e imprimir o equivalente em milímetros. (1 polegada = 25,4 mm).*/

#include<stdio.h>
#define polegada 25.4
int main ()
{
    float chuva;
    printf("Digite o quantidade de chuva em polegadas: ");
    scanf("%f",&chuva);
    chuva=chuva*polegada;
    printf("%f", chuva);
    return 0;
}
