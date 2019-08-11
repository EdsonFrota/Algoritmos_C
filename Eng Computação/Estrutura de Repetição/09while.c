#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int edson, junior, fatorial;
    printf("Digite o número que deseja calcular o fatorial!: ");
    scanf("%d", &edson);

    if (edson >= 0)
    {
        fatorial=1;
        junior=edson;
        while (junior > 0)
        {
            fatorial*=junior;
            --junior;
        }
        printf("\n\n\tFATORIAL = %d\n", fatorial);
    }
    getch();
    return 0;

    system ("pause");
}

