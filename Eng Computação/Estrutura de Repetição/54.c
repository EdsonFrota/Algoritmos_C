#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int i, base, expoente, r;

    r=1;

    printf("Base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    for (i=1; i<=expoente; ++i)
    {
        r *= base;
    }

    printf("\n\tResultado é = %d.\n",r);


    getch();
    return 0;


    system("pause");
}


