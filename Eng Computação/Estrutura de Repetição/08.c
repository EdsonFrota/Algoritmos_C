#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int edson, junior;

    printf(" Digite os 2 núneros:\n");
    scanf("%d %d", &edson, &junior);

    while(edson <= junior)
    {
        if(edson % 2 != 0)
            printf(" %d ",edson);

        edson+=1;
    }

    getch();
    return 0;

    system("pause");
}
