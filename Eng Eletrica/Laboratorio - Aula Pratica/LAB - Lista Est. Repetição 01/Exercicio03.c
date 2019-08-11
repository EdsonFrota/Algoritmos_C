/*3)Sendo H =1 + 1/2 + 1/3 + 1/4+...+ 1/N fazer um programa para ler N e derar e imprimir H.*/
#include<stdio.h>
int main ()
{
    int inicio, n;
    float h=0;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(inicio=1; inicio<=n; inicio++)
    {
        n+=inicio;
        h=1 + (1/n);

    }
    printf("O valor de H:%f\n", h);
    return 0;
}


