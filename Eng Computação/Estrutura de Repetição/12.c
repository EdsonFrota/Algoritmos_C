#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{

    setlocale(LC_ALL, "");

    int n, x, y=0;
    int soma = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    int div[n];

    for (x=1; x<n; ++x)
    {
        if (n%x == 0)
        {
            div[y] = x;
            ++y;
        }
    }

    for (x=0; x<y; ++x)
    {
        soma += div[x];
    }

    if (soma == n)
    {
        printf("N�mero � perfeito. ");
    }
    else
    {
        printf("N�mero n�o perfeito. ");
    }
    getch();
    return 0;

    system("pause");

}
