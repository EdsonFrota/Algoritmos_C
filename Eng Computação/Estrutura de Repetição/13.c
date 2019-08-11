#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int ed, son=1;
    int s=0;
    float m;

    do
    {
        printf("Informe um número: ");
        scanf("%d", &ed);

        if (ed > 0)
        {
            s += ed;

            m = (float)s/ (float)son;
            printf("Soma: %d  \nQtd: %d  \nMedia: %.2f\n\n", s, son, m);
            son++;
        }


    }
    while(ed >= 0);

    getch();
    return 0;

    system("pause");

}
