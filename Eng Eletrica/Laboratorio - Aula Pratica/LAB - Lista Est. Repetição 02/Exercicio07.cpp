/*7) O número 3025 possui a seguinte carcterística: 30+25 = 55
 55² =	3025. Faça um programa que imprima todos os números de 4 dígitos que apresentem tal característica*/

#include<stdio.h>
int main ()
{
    int numero, num1, num2, soma, quadrado;

        printf("Os numeros sao: ");

    for(numero=1000; numero<=9999; numero++)
    {
        num1 = numero/100;
        num2 = numero%100;
        soma = num1+num2;
        quadrado = soma*soma;

        if(quadrado == numero)
        {
            printf(" %d",numero);
        }
    }
    return 0;
}
