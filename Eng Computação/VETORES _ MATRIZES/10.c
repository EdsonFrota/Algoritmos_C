#include<stdio.h>
#include<stdlib.h>
int main (void)
{

    int  n, i, x[10], y[10], p=0;

    printf("N: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        p += x[n]*y[n];
    }

    printf("Produto Escalar = %d", p);

    getch ();
    return 0;
    system ("pause");
}
