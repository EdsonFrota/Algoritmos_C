#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int edson, junior=1, fatorial=1;
    do
    {
        printf(" Digite o número que deseja calcular o fatorial: ");
        scanf("%d",&edson);
    do
    {
        fatorial*= junior;
        junior+= 1;

    }
    while(junior <= edson);
    printf("\n\n\tFATORIAL = %d\n", fatorial);

 }
    while(edson < 0);

    return 0;

}
