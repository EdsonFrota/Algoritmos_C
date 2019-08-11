#include<stdio.h>


int main()
{


    int i, base, expoente, r;

    r=1;


    scanf("%d", &base);


    scanf("%d", &expoente);

    for (i=1; i<=expoente; ++i)
    {
        r *= base;
    }

    printf("\n %d\n",r);


    getch();
    return 0;



}
