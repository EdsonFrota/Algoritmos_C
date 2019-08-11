#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int edson=1, junior,f, s;
    printf("TABUADA: ");
    scanf("%d", &junior);


    while(edson <= 10)
    {
        f = edson;
        s = edson*junior;

        printf("\n\t%d x %d = %d\n", junior, f, s);
        edson = ++edson;
    }

    getch();
    return 0;


    system("pause");
}
