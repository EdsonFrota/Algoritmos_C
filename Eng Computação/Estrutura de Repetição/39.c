 #include<stdio.h>

int main ()
{
    int l, c, t;
    printf("Linhas:");
    scanf("%d", &t);

    l=1;
    c=1;
    printf("\n");

    while (l <= t)
    {
        while (c <= l)
        {

            printf(" %02d", c);
            c= c+1;
        }
        printf(" %02d\n",c);
        l= l+1;
        c=1;
    }
    getch();
    return 0;

    system("pause");
}
