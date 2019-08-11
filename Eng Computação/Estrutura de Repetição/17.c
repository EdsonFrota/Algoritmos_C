#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int h, j;
    int s=0;
    float media;

    for (h=0; h<500; ++h)
    {

        printf("Informe um número: ");
        scanf("%d", &j);

        s+= j;

    }

    media = (float)s / (float)500;
    printf("A media aritmética dos 500 números é: %.2f", media);

    getch();
    return 0;

    system("pause");
}
