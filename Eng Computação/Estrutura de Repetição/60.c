#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int a;
    float chico, ze;

    a = 0;
    chico = 150;
    ze = 110;

    do
    {

        ++a;

        chico += 2;
        ze += 3;

    }
    while(ze <= chico);

    printf("SER�O NECESS�RIOS %d anos\n",a);

    printf("\n\tAp�s %d anos,", a);
    printf("\n\tZ� ter� %.2f.", ze/100);
    printf("\n\tCHICO ter� %.2f.\n", chico/100);

    getch();
    return 0;

    system("pause");

}


