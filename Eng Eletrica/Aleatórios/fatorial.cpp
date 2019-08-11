#include<stdio.h>
int main ()
{
    int i, n, fatorial=1;

    printf("Digite o numero para saber o fatorial: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fatorial*=i;
    }
    printf("O fatorial de %d e: %d",n,fatorial);
    return 0;
}
