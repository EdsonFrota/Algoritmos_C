#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int e;
    float fht;

    printf("°CELSIUS° ## °FARENHEIT°\n\n");

    for (e=-100; e<=100; e+=5)
    {
        printf("%d ", e);

        fht = (1.8) * (e) + 32;
        printf(" \t%.1f\n ", fht);

    }


    getch();
    return 0;


    system("pause");
}


