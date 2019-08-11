#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int k, d;
    float t, s;

    k=1;
    d=0;
    s=0;


    do
    {

        k = k+2;
        ++d;

        t = (float)k/d;

        s+= t;

    }
    while(d <= 50);

    printf("O valor de S é: %.1f\n", s);


    getch();
    return 0;


    system("pause");
}


