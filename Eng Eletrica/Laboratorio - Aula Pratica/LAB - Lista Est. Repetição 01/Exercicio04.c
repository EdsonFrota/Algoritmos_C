/*4) A	sequ�ncia	abaixo	�	conhecida	como	s�rie	de	Fibonacci.	Fa�a	um
programa	para	escrever	at�	o	trig�simo	termo	dessa	s�rie.		S�rie	de
Fibonacci:	1,1,2,3,5,8,13,21,34,55,..*/

#include<stdio.h>
int main ()
{
    int numero=1,indice,contador=0, anterior=0;

    for (indice=0; indice<30; indice++)
    {
        contador = numero + anterior;
        numero = anterior;
        anterior = contador;

        printf("\n%d� Termo -> %d",indice+1, contador);
    }

    return 0;
}
