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

    printf("SERÃO NECESSÁRIOS %d anos\n",a);

    printf("\n\tApós %d anos,", a);
    printf("\n\tZÉ terá %.2f.", ze/100);
    printf("\n\tCHICO terá %.2f.\n", chico/100);

    getch();
    return 0;

    system("pause");

}


