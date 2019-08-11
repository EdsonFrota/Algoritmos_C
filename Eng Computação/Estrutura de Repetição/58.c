#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int u, i, o;
    float a, b, fx;

    for (u=1; u<=10; ++u)
    {

        i = pow(u,2);

        for (o=1; o<=5; ++o)
        {

            a = pow(i,2) + (3*i) + pow(o,2);

            b = (i*o) - (5*o) - (3*i) + 15;

            fx = a/b;


            printf("Para X: %d e Y: %d, f(x,y): %.2f\n", i, o, fx);

        }

        printf("\n");

    }

    getch();
    return 0;


    system("pause");
}


