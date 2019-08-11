#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n;
    float a, q, an;

    printf("Informe o primeiro termo: ");
    scanf("%f", &a);

    printf("RAZÃO: ");
    scanf("%f", &q);

    printf("TERMO? ");
    scanf("%d", &n);

    an = a * pow(q, n-1);

    printf("\n\t %dº dá progressão é: %f", n, an);

    getch();
    return 0;

    system("pause");

}


