#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int x, y, n,i,a, b, c;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("N: ");
    scanf("%d", &n);


    for (a=0; i< n; ++i)
    {
        a += (x*i);
    }


    for (b=0; i< n; ++i)
    {
        b +=((x*i)*(y*i));
    }


    for (c=0; i< n; i++)
    {
        c += pow((x*i),2);
    }

    printf("\n A: %d", a);
    printf("\n B: %d", b);
    printf("\n C: %d\n",c);

    getch();
    return 0;

    system("pause");

}

