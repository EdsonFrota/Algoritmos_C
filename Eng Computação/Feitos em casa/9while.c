#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int edson, junior, f;
    printf("Digite o número que deseja calcular o fatorial!: ");
    scanf("%d", &edson);

    if (edson > 0)
    {
        f=1;
        junior=edson;
        while (junior > 0)
        {
            f*=junior;
            --junior;
        }
        printf("\n\n\tFATORIAL = %d\n", f);
    }
    getch();
    return 0;

    system ("pause");
}

