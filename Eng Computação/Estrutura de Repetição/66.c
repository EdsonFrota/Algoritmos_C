#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, y, t;

    printf("Digite o conjunto de valores: ");
    scanf("%d", &t);

    int n[t];
    int p2, p3;
    float raiz;

    for (x=0; x<t; ++x)
    {


        printf("\nNÚMERO: ");
        scanf("%d", &n[x]);

        printf("\n\n");
        printf("\tNúmero\tQuadrado\tCubo\tRaiz\n\n");

        for (y=0; y<=x; ++y)
        {

            p2 = pow(n[y], 2);
            p3 = pow(n[y], 3);
            raiz = sqrt(n[y]);

            printf("\t%d\t%d\t\t%d\t%.2f\n", n[y], p2, p3, raiz);

        }
    }
    getch();
    return 0;

    system("pause");

}


