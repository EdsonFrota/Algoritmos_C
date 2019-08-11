#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int i, o, u;

    for (o=0; o<i; ++o)
    {

        printf("Digite um número: ");
        scanf("%d", &u);


        printf("Números a serem lidos: ");
        scanf("%d", &i);


        printf("O triplo de %d é %d\n\n", u, u*3);

    }

    getch();
    return 0;

    system("pause");

}


