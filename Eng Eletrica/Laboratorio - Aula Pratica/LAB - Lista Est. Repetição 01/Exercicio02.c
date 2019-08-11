/*2) Faça	um	programa para exibir os	quadrados dos números inteiros de	15	a
200:*/

#include<stdio.h>
int main ()
{
    int numero, quadrado;
    for(numero=15; numero<=200; numero++)
    {
        quadrado=numero*numero;
        printf("\nNumero:%d - Quadrado:%d",numero,quadrado);
    }

    return 0;
}
