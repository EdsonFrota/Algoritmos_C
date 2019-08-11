/*9) Fazer	um	programa	que	calcule	e	escreva	o	valor	de	S:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 + ... -10/100*/

#include<stdio.h>
int main ()
{
    int n,d,soma=0, aux;            // (n = numero)(d = denominador)
    printf("Denominadores:");

    for(n=1; n<=10; n++)
    {
        d = n*n;
        printf(" %d",d);

        aux = n/d;
        if(n%2!=0)
        {
            soma+=aux;
        }
        else
        {
            soma-=aux;
        }
    }
    printf("\nS:%d", soma);
    return 0;
}

