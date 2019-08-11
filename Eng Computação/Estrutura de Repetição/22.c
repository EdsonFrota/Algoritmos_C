#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int w, k, u, o;

    printf("\n\t=== Exibindo os 50 primeiros números da seqüência de Fibonacci ===\n\n");

    w =1;
    k =1;

    printf(" %d\n", w);
    printf(" %d\n", k);

    for (u = 1; u <= 50; ++u)
    {
        o = w+k;
        w = k;
        k = o;

        printf (" %d\n", o);

    }
    getch();
    return 0;

    system("pause");
}
