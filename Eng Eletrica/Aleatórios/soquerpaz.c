#include<stdio.h>

int main ()
{
    int edson, junior;
    float x, resp = 1;

    printf("Digite um valor para a base: ");
    scanf("%f", &x);
    printf("Digite um valor para o expoente: ");
    scanf("%d", &junior);
    for(edson=junior; edson>0; edson--)
    {
        resp*=x;
    }
    printf("%f elevado a %d e %f", x, junior, resp);
    return(0);
}
