#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int edson, junior, f;

    do
    {
        printf(" Digite o número que deseja calcular o fatorial: ");
        scanf("%d",&edson);
    }
    while(edson < 0);


    junior = 1;
    f = 1;
    do
    {
        f*= junior;
        junior+= 1;

    }
    while(junior <= edson);
    printf("\n\n\tFATORIAL = %d\n", f);


    getch();
    return 0;
    system("pause");
}
