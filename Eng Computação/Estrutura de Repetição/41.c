#include<stdio.h>

int main ()
{
    int l, i, n, h, a;
    printf("Linhas: ");
    scanf("%d", &l);
    printf("\n\n");
    i=l;
    for (n=1; n < l; ++n)
    {
        --i;
        if (n > 0)
        {
            --i;
            for (a=l-n-1; a > 0; --a)
                printf(" ");
            for (h=0; h < l- i; ++h)
                printf("*");

            printf("\n");



        }

    }
    getch();
    return 0;

    system("pause");

}

