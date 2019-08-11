#include<stdio.h>
#include<windows.h>

int main ()
{

    int x, y, z;
    x=0;
    y=0;
    z=0;

    do
    {
        system("cls");

        printf("\n\t%.2d: %.2d: %.2d", z, y, x);
        ++x;

        if (x==60)
        {
            x=0;
            ++y;

            if(y==60)
            {
                y=0;
                ++z;

                if (z==24)
                {
                    z=0;
                    y=0;
                    x=0;

                }
            }

        }
        Sleep(1000);
    }
    while(z !=90);
}
