#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");


    int edson, junior ;


    printf(" Digite o número que deseja calcular o fatorial: ");
    scanf("%d", &edson);

    junior = 1;
    if (edson > 0)
    {
        for (edson; edson >= 1; --edson)
        {
            junior *=edson;
        }
    }
    printf("\n\n\tFATORIAL = %d\n", junior);

    getch();
    return 0;

    system("pause");
}
