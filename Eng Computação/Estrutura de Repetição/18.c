#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int x, y, n, q;
    int soma=0;
    float media;

    printf("Quantidade de números: ");
    scanf("%d", &q);

    for (x=0; x<q; ++x)
    {

        printf("Informe um número: ");
        scanf("%d", &n);

        soma += n;

    }

    media = (float)soma / (float)q;
    printf("A media aritmética dos %d números é: %.2f", q, media);

    getch();
    return 0;

    system("pause");

}
