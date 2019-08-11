#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");

    int ed, s, on;
    int fat=1;

    printf("Digite o valor de N: ");
    scanf("%d", &ed);

    for(on =1; on<= ed; ++on)
    {
        fat*=on;
        s = 1 + (1/ fat);
    }

    printf("\n\tS = %d ", s);


    getch();
    return 0;

    system("pause");
}
