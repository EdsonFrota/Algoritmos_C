#include<stdio.h>

int main (void)
{
    int fatorial(int y);
    int numero, resultado;

    printf("Digite um inteiro: ");
    scanf("%d",&numero);
    resultado = fatorial(numero);

    printf("\nFatorial de %d e: %d\n", numero,resultado);


    return 1;
}
int fatorial(int y)
{

    int resultado;
    if (y == 0)
    {
        resultado = 1;

    }
    else
    {
        resultado = y * fatorial(y - 1);


    }

    return resultado;
}
