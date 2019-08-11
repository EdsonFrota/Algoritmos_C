#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int edson = 1;

    printf("\t===== Exibindo números de 1 a 500 =====\n\n");

    while(edson <= 500)
    {

        printf("%d ",edson);

        ++edson;
    }

    getch();
    return 0;

    system("pause");
}
