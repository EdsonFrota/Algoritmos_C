/*1) Escreve	um	programa	para	calcular	e	exibir	a	soma	dos	100	primeiros
números	inteiros(1+2+3+4+5+...+99+100): */

#include<stdio.h>
int main ()
{
    int numero, soma=0;
    for (numero=1; numero<=100; numero++)
    {
        soma+=numero;
    }
    printf("\nSOMA:%d",soma);

    return 0;
}
