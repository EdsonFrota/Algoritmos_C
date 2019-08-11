#include<stdio.h>

int main()
{

    int h, o, j, e;

    printf("Triangulos: ");
    scanf("%d", &h);

    for (o=1; o<=h; ++o)
    {
        for (j=1; j<=o; ++j)
        {
            for (e=1; e<=j; ++e)
            {
                printf(" * ");
            }
            printf("\n");
        }
        printf("\n\n");
    }

    getch();
    return 0;

    system("pause");
}


