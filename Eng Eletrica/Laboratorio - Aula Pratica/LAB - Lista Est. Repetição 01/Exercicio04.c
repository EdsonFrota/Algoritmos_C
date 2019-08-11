/*4) A	sequência	abaixo	é	conhecida	como	série	de	Fibonacci.	Faça	um
programa	para	escrever	até	o	trigésimo	termo	dessa	série.		Série	de
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

        printf("\n%d§ Termo -> %d",indice+1, contador);
    }

    return 0;
}
