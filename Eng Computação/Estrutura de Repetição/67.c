#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int a, l, n;
    int q, w, e, r;

    q=0;
    w=0;
    e=0;
    r=0;

    printf("Intervalo de números: ");
    scanf("%d", &l);

    for (a=0; a<l; ++a)
    {

        printf("Números: ");
        scanf("%d", &n);

        if ((n < 0) || (n > 100))
        {
            printf("Informe um número positivo e menor que 100.\n");
        }

        else
        {

            if ((n>=0) && (n<=25))
            {
                ++q;
            }
            else if ((n>=26) && (n<=50))
            {
                ++w;
            }
            else if ((n>=51) && (n<=75))
            {
                ++e;
            }
            else if ((n>=76) && (n<=100))
            {
                ++r;
            }
        }
    }

    printf("\n");
    printf("\t[0,25]: %d\n", q);
    printf("\t[26,50]: %d\n", w);
    printf("\t[51,75]: %d\n", e);
    printf("\t[76,100]: %d\n", r);

    getch();
    return 0;

    system("pause");

}


