#include<stdio.h>
#include<stdlib.h>


int main()
{

    int n, x, y;

    printf("Linhas:");
    scanf("%d", &n);
    printf("\n");

    for (x=1; x<=n; ++x)
    {
        for (y=1; y<=x; ++y)
        {
            printf("%.2d ", x);
        }
        printf("\n");
    }

    getch();
    return 0;

    system("pause");
}


