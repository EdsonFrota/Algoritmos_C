#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int edson = 10;

    printf("\t===== Todos os números pares entre 10 e 200 =====\n\n");

    while(edson <= 200)
    {
        if(edson % 2 == 0)
            printf(" %d ",edson);

        ++edson;
    }
    getch();
    return 0;


    system("pause");
}
