#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, y, z = 1, div;

    for (x=92; x<=1478; ++x)
    {

        for (y=1; y<=x; ++y)
        {
            if (x%y == 0)
            {
                ++div;
            }
        }

        if (div <= 2)
        {
            z *= x;
        }
    }

    printf("PRODUTO = %d", &z);

    getch();
    return 0;

    system("pause");
}

