/*1	- Fa�a um programa em C para ler uma temperatura em	Celsius	e transform�-la	em
Farenheit. Utilize a f�rmula: F=((9*C)/5)+32 */

#include<stdio.h>

int main ()
{
    float celsius, farenheit, transform;
    printf("Digite a temperatura em celsius:");
    scanf("%f", &celsius);

    transform = ((9*celsius)/5)+32;
    printf("\nVoce digitou a temperatura: %.2f, o valor dela em farenheit e: %.2f\n",celsius, transform);
    return 0;
}
