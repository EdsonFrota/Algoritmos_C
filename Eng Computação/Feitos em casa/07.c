#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int x[10],i, j,k, l[99], p1, p2, td=0;
    printf ("");
    for (i=0; i<=10; i++)
    {
        printf ("", i);
        scanf ("%d", &x[i]);
    }
    for (i=0; i<=10; i++)
    {

        for (j=i+1; j<=10; j++)
        {
            if(x[i] == x[j])
            {
                td=td++;
                l[k]=x[i];
                p1=i;
                p2=j;
                for (i=0; i<=10; i++)
    {
        for (j=i++; j<=10; j++)
        {
            for (k=0; k<=10; k++)
            {
                printf ("SIM");
            }

            }
        }
    } else {
        printf("NAO");

    }

        }

        }

    system("pause");
    getch();
    return 0;
}
