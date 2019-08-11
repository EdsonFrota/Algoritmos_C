#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void fatorial (int n)
{

    int x, fat=1;

    for (x=1; x<=n; ++x)
    {
        fat *= x;
    }

    printf("\tNúmero: %d\tFatorial = %d\n\n", n, fat);

}


int main()
{

    setlocale(LC_ALL, "");

    int x, n, t;

    printf("Quantidade de números: ");
    scanf("%d", &t);

    printf("\n");

    for (x=0; x<t; ++x)
    {

        printf("Número: ");
        scanf("%d", &n);

        fatorial(n);


    }

    getch();
    return 0;


    system("pause");

}


