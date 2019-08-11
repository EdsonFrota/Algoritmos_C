#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int k, t, d;
    float c, s;

    s=0;
    d=48;
    t=0;

    do
    {

        ++t;
        --d;

        k = pow(2, t);

        c = (float)k/d;

        s += c;

    }
    while(d >= 1);

    printf("O valor de S é: %.1f\n", s);


    getch();
    return 0;


    system("pause");

}


