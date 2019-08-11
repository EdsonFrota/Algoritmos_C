#include<stdio.h>

int main ()
{

    int t, v, p;
    t=0;
    v=1;
    p=1;

    printf("Linhas: ");
    scanf("%d", &t);

    printf("\n");

    while (v <= t)
    {
        while (p <= v)
        {

            printf("*");
            ++p;
        }

        p=1;

        printf("\n");
        ++v;
    }

    getch();
    return 0;

    system("pause");
}
