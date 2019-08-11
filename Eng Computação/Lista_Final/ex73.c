#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    char s;
    int h, alto, baixo, mulher, mulher0, turma;
    float n, mulher1, turma0;

    alto=0;
    baixo=999;
    mulher=0;
    mulher=0;
    turma=0;

    for (h=0; h<50; h++)
    {

        printf("SEXXO: ");
        scanf("%s", &s);

        printf("ALTURA: ");
        scanf("%d", &n);

        if (n > alto)
        {
            alto = n;
        }

        if (n < baixo)
        {
            baixo = n;
        }

        if (s == 'f')
        {
            ++mulher;
            mulher0 += n;
            mulher1 = (float)mulher0/mulher;
        }

        turma += n;
        turma0 = (float)turma/50;

    }
    printf("\nMAT: Média altura da Turma:: %.2f\n", turma0);

    printf("\nMaior altura: %d\n", alto);
    printf("\nMenor altura: %d\n", baixo);
    printf("\nMAM: Média altura das mulheres:: %.2f\n", mulher1);


    getch();
    return 0;
    system("pause");



}

