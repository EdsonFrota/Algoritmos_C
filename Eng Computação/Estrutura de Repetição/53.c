#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");
    int x, n, p;
    p=1;

    printf("Número: ");
    scanf("%d", &n);
    printf("\n");
    for (x=1; x<=n; ++x)
    {
        printf(" %d ", x);
    }

    for (x=1; x<=n; ++x)
    {
        p *= x;
    }

    printf("\n\n\tPRODUTO = %d. \n", p);


    getch();
    return 0;


    system("pause");

}


