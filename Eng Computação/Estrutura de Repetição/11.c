#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int edson, junior, i;

    printf("Digite um n�mero: ");
    scanf("%d", &edson);

    junior = 0;

    for (i=1; i<=edson; ++i)

        if ((edson % i )< 1) junior=junior+1;
    if (junior==2)
        printf("\n\t� um n�mero primo.\n");

    else
        printf("\n\tN�o � n�mero primo.\n");

    getch();
    return 0;

    system("pause");
}
