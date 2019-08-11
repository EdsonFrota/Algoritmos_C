#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int k, l[100], m=0;

    for (k=0; k<100; ++k)
    {
        printf("Digite um número: ");
        scanf("%d", &l[k]);
    }

    for (k=0; k<100; k++)
    {
        if (l[k] > m)
        {
            m = l[k];
        }
    }

    printf("Maior número é= %d", m);

    getch();
    return 0;

    system("pause");
}
