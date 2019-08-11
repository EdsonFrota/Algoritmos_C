/*3. Crie um programa que exibe se um dia ´e dia ´util, fim de semana ou dia inv´alido, dado o
n´umero referente ao dia. Considere que domingo ´e o dia 1 e s´abado ´e o dia 7. Utilize o
comando switch na sua solu¸c˜ao.*/
#include<stdio.h>
int main ()
{
    int dia;
    printf("Digite o numero referente ao dia de semana (1 a 7): ");
    scanf("%d", &dia);
    switch(dia)
    {

    case 1:
    case 7:
        printf("Final de semana.");
        break;

    case 2 ... 6:
        printf("Dia util.");
        break;

    default:
        printf("Dia invalido. ");
    }
    return (0);
}
