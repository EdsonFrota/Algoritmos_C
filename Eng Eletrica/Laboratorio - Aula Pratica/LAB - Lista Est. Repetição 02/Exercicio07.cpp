/*7) O n�mero 3025 possui a seguinte carcter�stica: 30+25 = 55
 55� =	3025. Fa�a um programa que imprima todos os n�meros de 4 d�gitos que apresentem tal caracter�stica*/

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
