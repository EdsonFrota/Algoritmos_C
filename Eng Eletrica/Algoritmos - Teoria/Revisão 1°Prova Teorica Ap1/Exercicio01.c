/*1. Fa¸ca um programa que leia uma temperatura, e uma op¸c˜ao, sendo:
’a’ - converter de Celsius para Fahrenheit.
’b’ - conventer de Fahrenheit para Celsius.
Calcule e mostre a convers˜ao escolhida. Utilize o comando switch na sua solu¸c˜ao. Se a
op¸c˜ao escolhida pelo usu´ario for inv´alida, imprima na tela ”INVALIDO”.*/

#include<stdio.h>
int main ()
{
    float temperatura;
    char op;
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a opcao desejada A / B :");
    scanf(" %c", &op);

    switch(op)
    {
    case 'a':
    case'A':
        temperatura = (temperatura *1.8)+32;
        printf(" A temperatura em fhrt e: %f", temperatura);
        break;
    case'b':
    case'B':
        temperatura = ((temperatura - 32)/1.8);
        printf("A temperatura em csl e: %f", temperatura);
        break;

    default:
        printf("INVALIDO.");


    }

    return (0);
}
