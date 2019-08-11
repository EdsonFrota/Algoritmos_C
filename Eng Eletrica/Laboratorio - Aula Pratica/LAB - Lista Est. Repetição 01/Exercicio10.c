/*10)Fazer	um	algoritmo	que	calcule	escreva	o	valor	de	Π, com	precisão	de
0,0001,	usando	a	série:
π = 4 − 4/3 + 4/5 - 4/7 + 4/9 - 4/11 ... */

#include<stdio.h>
int main ()
{
    int inicio, contador=1;
    float pi=0, aux;

    for (inicio=1; inicio<=1000000; inicio+=2)
    {
        aux = 4.0/inicio;

        if (contador%2!=0)
        {
            pi+=aux;
        }
        else
        {
            pi-=aux;
        }
        contador++;
    }

    printf("Pi: %f",pi) ;
    return 0;
}
