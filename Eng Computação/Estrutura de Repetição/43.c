#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int i, o, u;

    for (o=0; o<i; ++o)
    {

        printf("Digite um n�mero: ");
        scanf("%d", &u);


        printf("N�meros a serem lidos: ");
        scanf("%d", &i);


        printf("O triplo de %d � %d\n\n", u, u*3);

    }

    getch();
    return 0;

    system("pause");

}


