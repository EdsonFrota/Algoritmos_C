#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int x, y, n, q;
    int soma=0;
    float media;

    printf("Quantidade de n�meros: ");
    scanf("%d", &q);

    for (x=0; x<q; ++x)
    {

        printf("Informe um n�mero: ");
        scanf("%d", &n);

        soma += n;

    }

    media = (float)soma / (float)q;
    printf("A media aritm�tica dos %d n�meros �: %.2f", q, media);

    getch();
    return 0;

    system("pause");

}
